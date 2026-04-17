#pragma once

#include "errors/ErrorDuplicateRecordTypeFields.hpp"
#include "errors/ErrorDuplicateVariantTypeFields.hpp"
#include "stellaParser.h"

#include <algorithm>
#include <cstddef>
#include <map>
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

inline stella_types_t to_stella_types(std::vector<stellaParser::ParamDeclContext*> const& paramDecls)
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

inline bool same_types(stella_type_t lhs, stella_type_t rhs)
{
    if (lhs == rhs) { return true; }
    if (!lhs || !rhs) { return lhs == rhs; }
    return lhs->sameType(*rhs);
}

inline bool same_types(stella_types_t const& lhs, stella_types_t const& rhs)
{
    if (lhs.size() != rhs.size()) { return false; }
    for (size_t i = 0; i < lhs.size(); ++i)
    {
        if (!same_types(lhs[i], rhs[i])) { return false; }
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
            if (!same_types(lt.second, rt->second)) { return false; }
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

    bool sameType(StellaType const& other) const noexcept override
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

    bool sameType(StellaType const& other) const noexcept override
    {
        return typeid(other) == typeid(Nat);
    }
};

class Top : public StellaType
{
public:
    ~Top() override = default;

    std::string toString() const override
    {
        return "Top";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        return typeid(other) == typeid(Top);
    }
};

class Bottom : public StellaType
{
public:
    ~Bottom() override = default;

    std::string toString() const override
    {
        return "Bot";
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        return typeid(other) == typeid(Bottom);
    }
};

class Func : public StellaType
{
public:
    ~Func() override = default;

    stella_types_t paramTs{};
    stella_type_t resT{};
    stella_types_t throwTs{};

    std::string toString() const override
    {
        std::string type = "fn (";
        for (size_t i = 0; i < paramTs.size(); ++i)
        {
            if (i > 0) { type += ", "; }
            type += paramTs[i]->toString();
        }
        type += ") -> " + resT->toString();
        if (!throwTs.empty())
        {
            type += " throws ";
            for (size_t i = 0; i < throwTs.size(); ++i)
            {
                if (i > 0) { type += ", "; }
                type += throwTs[i]->toString();
            }
        }
        return type;
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(Func)) { return false; }

        auto const& casted = dynamic_cast<Func const&>(other);
        return same_types(paramTs, casted.paramTs) && same_types(resT, casted.resT) && same_types(throwTs, casted.throwTs);
    }

    Func(stella_types_t paramTs, stella_type_t resT, stella_types_t throwTs = {})
        : paramTs{std::move(paramTs)}
        , resT{resT}
        , throwTs{std::move(throwTs)}
    {}

    Func() = default;

    static Func* fromDecl(stellaParser::DeclFunContext* ctx)
    {
        return new Func(to_stella_types(ctx->paramDecls), ast_type(ctx->returnType), to_stella_types(ctx->throwTypes));
    }

    static Func* fromDecl(stellaParser::DeclFunGenericContext* ctx)
    {
        return new Func(to_stella_types(ctx->paramDecls), ast_type(ctx->returnType), to_stella_types(ctx->throwTypes));
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
            if (i > 0) { type += ", "; }
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
        return same_types(inl, casted.inl) && same_types(inr, casted.inr);
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

        return same_types(itemT, casted.itemT);
    }

    explicit List(stella_type_t itemT)
        : itemT{itemT}
    {}
};

class Ref : public StellaType
{
public:
    stella_type_t itemT;

    std::string toString() const override
    {
        return std::string{"&"} + itemT->toString();
    }

    bool sameType(StellaType const& other) const noexcept override
    {
        if (typeid(other) != typeid(Ref)) { return false; }
        auto const& casted = dynamic_cast<Ref const&>(other);
        return same_types(itemT, casted.itemT);
    }

    explicit Ref(stella_type_t itemT)
        : itemT{itemT}
    {}
};

inline bool is_subtype(stella_type_t real, stella_type_t expected, bool structuralSubtyping)
{
    if (same_types(real, expected)) { return true; }
    if (typeid(*expected) == typeid(Top)) { return true; }
    if (typeid(*real) == typeid(Bottom)) { return true; }

    if (auto const* realFn = dynamic_cast<Func const*>(real))
    {
        auto const* expectedFn = dynamic_cast<Func const*>(expected);
        if (expectedFn && structuralSubtyping && realFn->paramTs.size() == expectedFn->paramTs.size())
        {
            for (size_t i = 0; i < realFn->paramTs.size(); ++i)
            {
                if (!is_subtype(expectedFn->paramTs[i], realFn->paramTs[i], structuralSubtyping)) { return false; }
            }
            if (!is_subtype(realFn->resT, expectedFn->resT, structuralSubtyping)) { return false; }
            return same_types(realFn->throwTs, expectedFn->throwTs);
        }
    }

    if (auto const* realTuple = dynamic_cast<Tuple const*>(real))
    {
        auto const* expectedTuple = dynamic_cast<Tuple const*>(expected);
        if (expectedTuple && structuralSubtyping && realTuple->itemTs.size() == expectedTuple->itemTs.size())
        {
            for (size_t i = 0; i < realTuple->itemTs.size(); ++i)
            {
                if (!is_subtype(realTuple->itemTs[i], expectedTuple->itemTs[i], structuralSubtyping)) { return false; }
            }
            return true;
        }
    }

    if (auto const* realRecord = dynamic_cast<Record const*>(real))
    {
        auto const* expectedRecord = dynamic_cast<Record const*>(expected);
        if (expectedRecord && structuralSubtyping)
        {
            for (auto const& [label, expectedField] : expectedRecord->itemTs)
            {
                auto const it = realRecord->itemTs.find(label);
                if (it == realRecord->itemTs.end()) { return false; }
                if (!is_subtype(it->second, expectedField, structuralSubtyping)) { return false; }
            }
            return true;
        }
    }

    if (auto const* realSum = dynamic_cast<Sum const*>(real))
    {
        auto const* expectedSum = dynamic_cast<Sum const*>(expected);
        if (expectedSum && structuralSubtyping)
        {
            return is_subtype(realSum->inl, expectedSum->inl, structuralSubtyping)
                && is_subtype(realSum->inr, expectedSum->inr, structuralSubtyping);
        }
    }

    if (auto const* realVariant = dynamic_cast<Variant const*>(real))
    {
        auto const* expectedVariant = dynamic_cast<Variant const*>(expected);
        if (expectedVariant && structuralSubtyping)
        {
            for (auto const& [label, realField] : realVariant->itemTs)
            {
                auto const it = expectedVariant->itemTs.find(label);
                if (it == expectedVariant->itemTs.end()) { return false; }
                if (!realField || !it->second)
                {
                    if (realField != it->second) { return false; }
                    continue;
                }
                if (!is_subtype(realField, it->second, structuralSubtyping)) { return false; }
            }
            return true;
        }
    }

    if (auto const* realList = dynamic_cast<List const*>(real))
    {
        auto const* expectedList = dynamic_cast<List const*>(expected);
        if (expectedList && structuralSubtyping)
        {
            return is_subtype(realList->itemT, expectedList->itemT, structuralSubtyping);
        }
    }

    if (auto const* realRef = dynamic_cast<Ref const*>(real))
    {
        auto const* expectedRef = dynamic_cast<Ref const*>(expected);
        if (expectedRef)
        {
            return same_types(realRef->itemT, expectedRef->itemT);
        }
    }

    return false;
}

inline bool is_castable(stella_type_t source, stella_type_t target, bool structuralSubtyping)
{
    return is_subtype(source, target, structuralSubtyping) || is_subtype(target, source, structuralSubtyping);
}

inline stella_type_t join_types(stella_type_t lhs, stella_type_t rhs, bool structuralSubtyping)
{
    if (is_subtype(lhs, rhs, structuralSubtyping)) { return rhs; }
    if (is_subtype(rhs, lhs, structuralSubtyping)) { return lhs; }

    if (auto const* lhsTuple = dynamic_cast<Tuple const*>(lhs))
    {
        auto const* rhsTuple = dynamic_cast<Tuple const*>(rhs);
        if (lhsTuple && rhsTuple && lhsTuple->itemTs.size() == rhsTuple->itemTs.size())
        {
            stella_types_t joined;
            joined.reserve(lhsTuple->itemTs.size());
            for (size_t i = 0; i < lhsTuple->itemTs.size(); ++i)
            {
                auto const item = join_types(lhsTuple->itemTs[i], rhsTuple->itemTs[i], structuralSubtyping);
                if (!item) { return nullptr; }
                joined.emplace_back(item);
            }
            return new Tuple{std::move(joined)};
        }
    }

    if (auto const* lhsRecord = dynamic_cast<Record const*>(lhs))
    {
        auto const* rhsRecord = dynamic_cast<Record const*>(rhs);
        if (lhsRecord && rhsRecord && structuralSubtyping)
        {
            std::map<std::string, stella_type_t> joined;
            for (auto const& [label, lhsField] : lhsRecord->itemTs)
            {
                auto const it = rhsRecord->itemTs.find(label);
                if (it == rhsRecord->itemTs.end()) { continue; }
                auto const fieldJoin = join_types(lhsField, it->second, structuralSubtyping);
                if (!fieldJoin) { return nullptr; }
                joined.emplace(label, fieldJoin);
            }
            return new Record{std::move(joined)};
        }
    }

    if (auto const* lhsSum = dynamic_cast<Sum const*>(lhs))
    {
        auto const* rhsSum = dynamic_cast<Sum const*>(rhs);
        if (lhsSum && rhsSum && structuralSubtyping)
        {
            auto const left = join_types(lhsSum->inl, rhsSum->inl, structuralSubtyping);
            auto const right = join_types(lhsSum->inr, rhsSum->inr, structuralSubtyping);
            if (left && right) { return new Sum{left, right}; }
        }
    }

    if (auto const* lhsVariant = dynamic_cast<Variant const*>(lhs))
    {
        auto const* rhsVariant = dynamic_cast<Variant const*>(rhs);
        if (lhsVariant && rhsVariant && structuralSubtyping)
        {
            std::map<std::string, stella_type_t> joined = lhsVariant->itemTs;
            for (auto const& [label, rhsField] : rhsVariant->itemTs)
            {
                if (auto const it = joined.find(label); it != joined.end())
                {
                    if (!it->second || !rhsField)
                    {
                        if (it->second != rhsField) { return nullptr; }
                    }
                    else
                    {
                        auto const fieldJoin = join_types(it->second, rhsField, structuralSubtyping);
                        if (!fieldJoin) { return nullptr; }
                        it->second = fieldJoin;
                    }
                }
                else
                {
                    joined.emplace(label, rhsField);
                }
            }
            return new Variant{std::move(joined)};
        }
    }

    if (auto const* lhsList = dynamic_cast<List const*>(lhs))
    {
        auto const* rhsList = dynamic_cast<List const*>(rhs);
        if (lhsList && rhsList && structuralSubtyping)
        {
            auto const itemJoin = join_types(lhsList->itemT, rhsList->itemT, structuralSubtyping);
            if (itemJoin) { return new List{itemJoin}; }
        }
    }

    return nullptr;
}

inline StellaType* ast_type(stellaParser::StellatypeContext* ctx)
{
    if (auto t = dynamic_cast<stellaParser::TypeParensContext const*>(ctx)) { return ast_type(t->type_); }
    else if (dynamic_cast<stellaParser::TypeBoolContext const*>(ctx)) { return new Bool; }
    else if (dynamic_cast<stellaParser::TypeNatContext const*>(ctx)) { return new Nat; }
    else if (auto* ref = dynamic_cast<stellaParser::TypeRefContext*>(ctx)) { return new Ref{ast_type(ref->type_)}; }
    else if (auto* fn = dynamic_cast<stellaParser::TypeFunContext*>(ctx)) { return new Func{to_stella_types(fn->paramTypes), ast_type(fn->returnType)}; }
    else if (dynamic_cast<stellaParser::TypeUnitContext const*>(ctx)) { return new Unit; }
    else if (dynamic_cast<stellaParser::TypeTopContext const*>(ctx)) { return new Top; }
    else if (dynamic_cast<stellaParser::TypeBottomContext const*>(ctx)) { return new Bottom; }
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
