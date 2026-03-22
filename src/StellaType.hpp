#pragma once

#include "stellaParser.h"
#include "errors/ErrorDuplicateRecordTypeFields.hpp"
#include "errors/ErrorDuplicateVariantTypeFields.hpp"

#include <algorithm>
#include <cstddef>
#include <set>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <vector>

namespace typecheck::type
{

class StellaType;
using stella_type_t = StellaType const*;
using stella_types_t = std::vector<stella_type_t>;

inline StellaType* ast_type(stellaParser::StellatypeContext*);

inline stella_types_t to_stella_types(std::vector<stellaParser::StellatypeContext*>& paramTypes)
{
    stella_types_t paramTs(paramTypes.size());
    std::transform(paramTypes.begin(), paramTypes.end(), paramTs.begin(),
        [](auto* paramT) { return ast_type(paramT); });
    return paramTs;
}

inline std::map<std::string, stella_type_t> to_stella_types(auto const& paramTypes)
{
    std::map<std::string, stella_type_t> out;
    for (auto const& paramT : paramTypes)
    {
        out[paramT->label->getText()] = paramT->type_ ? ast_type(paramT->type_) : nullptr;
    }

    return out;
}

inline stella_types_t to_stella_types(std::vector<stellaParser::ParamDeclContext *> const& paramDecls)
{
    stella_types_t paramTs(paramDecls.size());
    std::transform(paramDecls.begin(), paramDecls.end(), paramTs.begin(),
        [](auto* paramT) { return ast_type(paramT->paramType); });
    return paramTs;
}

class StellaType
{
public:
    virtual ~StellaType() = default;

    virtual std::string toString() const = 0;
    virtual bool sameType(StellaType const& other) const noexcept = 0;
};

inline bool same_types(stella_types_t const& lhs, stella_types_t const& rhs)
{
    if (lhs.size() != rhs.size()) { return false; }
    for (size_t i = 0; i < lhs.size(); ++i)
    {
        if (!lhs[i]->sameType(*rhs[i])) { return false; }
    }

    return true;
}

inline bool same_types(std::map<std::string, stella_type_t> const& lhs, std::map<std::string, stella_type_t> const& rhs)
{
    if (lhs.size() != rhs.size()) { return false; }
    for (auto const& lt : lhs)
    {
        if (auto const rt = rhs.find(lt.first); rt != rhs.end())
        {
            if (!lt.second->sameType(*rt->second)) { return false; }
        }
        else
        {
            return false;
        }
    }

    return true;
}

class Bool : public StellaType
{
public:
    ~Bool() override = default;

    std::string toString() const override
    {
        return "Bool";
    }

    bool sameType(const StellaType& other) const noexcept override
    {
        return typeid(other) == typeid(Bool);
    }
};

class Nat : public StellaType
{
public:
    ~Nat() override = default;

    std::string toString() const override
    {
        return "Nat";
    }

    bool sameType(const StellaType& other) const noexcept override
    {
        return typeid(other) == typeid(Nat);
    }
};

class Func : public StellaType
{
public:
    ~Func() override = default;

    stella_types_t paramTs{};
    stella_type_t resT{};

    std::string toString() const override
    {
        std::string type = "fn (";
        for (size_t i = 0; i < paramTs.size(); ++i)
        {
            if (i > 0) { type += ", "; }
            type += paramTs[i]->toString();
        }

        return type += ") -> " + resT->toString();
    }

    bool sameType(const StellaType& other) const noexcept override
    {
        if (typeid(other) != typeid(Func)) { return false; }

        auto const& casted = dynamic_cast<Func const&>(other);
        return same_types(paramTs, casted.paramTs);
    }

    Func(stella_types_t paramTs, stella_type_t resT)
        : paramTs{std::move(paramTs)}
        , resT{resT}
    {}

    Func() = default;

    static Func* fromDecl(stellaParser::DeclFunContext* ctx)
    {   
        return new Func(to_stella_types(ctx->paramDecls), ast_type(ctx->returnType));
    }

    static Func* fromAbs(stellaParser::AbstractionContext* ctx, stella_type_t resT)
    {
        return new Func{to_stella_types(ctx->paramDecls), resT};
    }
};

class Unit : public StellaType
{
public:
    ~Unit() override = default;

    std::string toString() const override
    {
        return "Unit";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        return typeid(other) == typeid(Unit);
    }
};

class Tuple : public StellaType
{
public:
    stella_types_t itemTs;

    std::string toString() const override
    {
        std::string type = "{";
        for (size_t i = 0; i < itemTs.size(); ++i)
        {
            if (i) { type += ", "; }
            type += itemTs[i]->toString();
        }

        return type += "}";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(Tuple)) { return false; }

        auto const& casted = dynamic_cast<Tuple const&>(other);
        return same_types(itemTs, casted.itemTs);
    }

    explicit Tuple(stella_types_t itemTs)
        : itemTs{std::move(itemTs)}
    {}
};

class Record : public StellaType
{
public:
    std::map<std::string, stella_type_t> itemTs;

    std::string toString() const override
    {
        std::string type = "{";
        bool first = true;
        for (auto const& itemT : itemTs)
        {
            if (!first) { type += ", "; }
            first = false;

            type += itemT.first + " : " + itemT.second->toString();
        }

        return type += "}";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(Record)) { return false; }

        auto const& casted = dynamic_cast<Record const&>(other);
        return same_types(itemTs, casted.itemTs);
    }

    Record(std::map<std::string, stella_type_t> itemTs)
        : itemTs{std::move(itemTs)}
    {}
};

class Sum : public StellaType
{
public:
    stella_type_t inl, inr;

    std::string toString() const override
    {
        return inl->toString() + " + " + inr->toString();
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(Sum)) { return false; }
        auto const& casted = dynamic_cast<Sum const&>(other);
        return inl->sameType(*casted.inl) && inr->sameType(*casted.inr);
    }

    Sum(stella_type_t inl, stella_type_t inr)
        : inl{inl}
        , inr{inr}
    {}
};

class Variant : public StellaType
{
public:
    std::map<std::string, stella_type_t> itemTs;

    std::string toString() const override
    {
        std::string type = "<|";
        bool first = true;
        for (auto const& itemT : itemTs)
        {
            if (!first) { type += ", "; }
            first = false;
            type += itemT.first + (itemT.second ? std::string{" : "} + itemT.second->toString() : "");
        }

        return type += "|>";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(Variant)) { return false; }

        auto const& casted = dynamic_cast<Variant const&>(other);
        return same_types(itemTs, casted.itemTs);
    }

    Variant(std::map<std::string, stella_type_t> itemTs)
        : itemTs{std::move(itemTs)}
    {}
};

class List : public StellaType
{
public:
    stella_type_t itemT;

    std::string toString() const override
    {
        return std::string{"["} + itemT->toString() + "]";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(List)) { return false; }
        auto const& casted = dynamic_cast<List const&>(other);

        return itemT->sameType(*casted.itemT);
    }

    explicit List(stella_type_t itemT)
        : itemT{itemT}
    {}
};

inline StellaType* ast_type(stellaParser::StellatypeContext* ctx)
{
    if (auto t = dynamic_cast<stellaParser::TypeParensContext const*>(ctx)) { return ast_type(t->type_); }
    else if (dynamic_cast<stellaParser::TypeBoolContext const*>(ctx)) { return new Bool; }
    else if (dynamic_cast<stellaParser::TypeNatContext const*>(ctx)) { return new Nat; }
    else if (auto* fn = dynamic_cast<stellaParser::TypeFunContext*>(ctx)) { return new Func{to_stella_types(fn->paramTypes), ast_type(fn->returnType)}; }
    else if (dynamic_cast<stellaParser::TypeUnitContext const*>(ctx)) { return new Unit; }
    else if (auto* tup = dynamic_cast<stellaParser::TypeTupleContext*>(ctx)) { return new Tuple{to_stella_types(tup->types)}; }
    else if (auto* rec = dynamic_cast<stellaParser::TypeRecordContext*>(ctx))
    {
        std::set<std::string> seen;
        for (auto const& f : rec->fieldTypes)
        {
            if (!seen.insert(f->label->getText()).second) { throw error::ErrorDuplicateRecordTypeFields{f->label->getText(), rec}; }
        }
        return new Record{to_stella_types(rec->fieldTypes)};
    }
    else if (auto* sum = dynamic_cast<stellaParser::TypeSumContext*>(ctx)) { return new Sum{ast_type(sum->left), ast_type(sum->right)}; }
    else if (auto* var = dynamic_cast<stellaParser::TypeVariantContext*>(ctx))
    {
        std::set<std::string> seen;
        for (auto const& f : var->fieldTypes)
        {
            if (!seen.insert(f->label->getText()).second) { throw error::ErrorDuplicateVariantTypeFields{f->label->getText(), var}; }
        }
        return new Variant{to_stella_types(var->fieldTypes)};
    }
    else if (auto* list = dynamic_cast<stellaParser::TypeListContext*>(ctx)) { return new List{ast_type(list->type_)}; }
    else { throw std::runtime_error{"not supported"}; }
}

}
