#pragma once

#include "errors/ErrorAmbiguousListType.hpp"
#include "errors/ErrorAmbiguousSumType.hpp"
#include "errors/ErrorAmbiguousVariantType.hpp"
#include "errors/ErrorDuplicateFuncDecl.hpp"
#include "errors/ErrorDuplicateFunctionParameter.hpp"
#include "errors/ErrorDuplicateRecordFields.hpp"
#include "errors/ErrorIllegalEmptyMatching.hpp"
#include "errors/ErrorIncorrectArityOfMain.hpp"
#include "errors/ErrorIncorrectNumberOfArgs.hpp"
#include "errors/ErrorMissingDataForLabel.hpp"
#include "errors/ErrorMissingRecordFields.hpp"
#include "errors/ErrorNonExhaustiveMatchPatterns.hpp"
#include "errors/ErrorNotAFunction.hpp"
#include "errors/ErrorNotAList.hpp"
#include "errors/ErrorNotARecord.hpp"
#include "errors/ErrorNotATuple.hpp"
#include "errors/ErrorTupleIndexOutOfBounds.hpp"
#include "errors/ErrorUnexpectedDataForNullaryLabel.hpp"
#include "errors/ErrorUnexpectedFieldAccess.hpp"
#include "errors/ErrorUnexpectedInjection.hpp"
#include "errors/ErrorUnexpectedList.hpp"
#include "errors/ErrorUnexpectedNonNullaryVariantPattern.hpp"
#include "errors/ErrorUnexpectedNullaryVariantPattern.hpp"
#include "errors/ErrorUnexpectedNumberOfParamsInLambda.hpp"
#include "errors/ErrorUnexpectedLambda.hpp"
#include "errors/ErrorUndefinedVariable.hpp"
#include "errors/ErrorUnexpectedPatternForType.hpp"
#include "errors/ErrorUnexpectedRecord.hpp"
#include "errors/ErrorUnexpectedRecordFields.hpp"
#include "errors/ErrorUnexpectedTuple.hpp"
#include "errors/ErrorUnexpectedTupleLength.hpp"
#include "errors/ErrorUnexpectedTypeForExpr.hpp"
#include "errors/ErrorUnexpectedTypeForParameter.hpp"
#include "errors/ErrorUnexpectedVariant.hpp"
#include "errors/ErrorUnexpectedVariantLabel.hpp"
#include "stellaParser.h"
#include "stellaParserBaseVisitor.h"
#include "StellaTypeCheckerContext.hpp"
#include "StellaType.hpp"
#include "errors/ErrorMissingMain.hpp"
#include <any>
#include <cstddef>
#include <set>
#include <stdexcept>
#include <string>
#include <vector>

namespace typecheck
{

class StellaTypeChecker : public stellaParserBaseVisitor {
public:
    StellaTypeChecker(StellaTypeCheckerContext& typeCtx)
        : typeCtx{typeCtx}
    {}

    virtual std::any visitProgram(stellaParser::ProgramContext *ctx) override {
        typeCtx.declarationsOnly = true;
        visitChildren(ctx);
        typeCtx.declarationsOnly = false;
        auto const res = visitChildren(ctx);
        if (auto const mainT = dynamic_cast<type::Func const*>(typeCtx.type(MAIN)); !mainT) { throw error::ErrorMissingMain{}; }
        else if (mainT->paramTs.size() != 1) { throw error::ErrorIncorrectArityOfMain{}; }
        return res;
    }

    virtual std::any visitChildren(antlr4::tree::ParseTree *node) override {
        return stellaParserBaseVisitor::visitChildren(node);
    }

    std::any visitParenthesisedExpr(stellaParser::ParenthesisedExprContext* ctx) override
    {
        return ctx->expr_->accept(this);
    }

    std::any visitTerminatingSemicolon(stellaParser::TerminatingSemicolonContext* ctx) override
    {
        return ctx->expr_->accept(this);
    }

    std::any visitVar(stellaParser::VarContext* ctx) override
    {
        if (auto const* varT = typeCtx.type(ctx->name->getText())) { return checkResT(varT, ctx); }
        throw error::ErrorUndefinedVariable{ctx};
    }

    // Bool
    std::any visitConstTrue(stellaParser::ConstTrueContext *ctx) override
    {
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitConstFalse(stellaParser::ConstFalseContext *ctx) override
    {
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitIf(stellaParser::IfContext *ctx) override
    {
        auto const resT = typeCtx.resT();

        typeCtx.resT(new type::Bool());
        ctx->condition->accept(this);

        typeCtx.resT(resT);
        auto const thenT = ctx->thenExpr->accept(this);
        typeCtx.resT(resT);
        auto const elseT = ctx->elseExpr->accept(this);

        typeCtx.resT(resT);
        checkResT(std::any_cast<stella_type_t>(thenT), ctx);

        return thenT;
    }
    // Bool

    // Nat
    std::any visitConstInt(stellaParser::ConstIntContext* ctx) override
    {
        return checkResT(new type::Nat(), ctx);
    }

    std::any visitSucc(stellaParser::SuccContext* ctx) override
    {
        auto const resT = typeCtx.resT();

        auto const* nat = new type::Nat();
        typeCtx.resT(nat);
        ctx->n->accept(this);

        typeCtx.resT(resT);
        return checkResT(nat, ctx);
    }

    std::any visitPred(stellaParser::PredContext* ctx) override
    {
        auto const resT = typeCtx.resT();

        auto const* nat = new type::Nat();
        typeCtx.resT(nat);
        ctx->n->accept(this);

        typeCtx.resT(resT);
        return checkResT(nat, ctx);
    }

    std::any visitIsZero(stellaParser::IsZeroContext* ctx) override
    {
        auto const resT = typeCtx.resT();

        typeCtx.resT(new type::Nat());
        ctx->n->accept(this);

        typeCtx.resT(resT);
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitNatRec(stellaParser::NatRecContext* ctx) override
    {
        auto const resT = typeCtx.resT();

        typeCtx.resT(new type::Nat);
        ctx->n->accept(this);

        if (resT) { typeCtx.resT(resT); }
        auto const initT = std::any_cast<stella_type_t>(ctx->initial->accept(this));

        typeCtx.resT(new type::Func({new type::Nat}, new type::Func({initT}, initT)));
        ctx->step->accept(this);

        if (resT) { typeCtx.resT(resT); }
        return checkResT(initT, ctx);
    }
    // Nat

    // Fun
    std::any visitDeclFun(stellaParser::DeclFunContext *ctx) override
    {
        auto const fnT = type::Func::fromDecl(ctx);

        if (typeCtx.declarationsOnly)
        {
            if (!typeCtx.store(ctx->name->getText(), fnT)) { throw error::ErrorDuplicateFuncDecl{ctx->name->getText(), typeCtx.levelName()}; }
            return fnT;
        }
        typeCtx.up(ctx->name->getText());

        {
            std::set<std::string> seenParams;
            for (size_t i = 0; i < ctx->paramDecls.size(); ++i)
            {
                auto const& pname = ctx->paramDecls[i]->name->getText();
                if (!seenParams.insert(pname).second) { throw error::ErrorDuplicateFunctionParameter{pname}; }
                typeCtx.store(pname, fnT->paramTs[i]);
            }
        }

        typeCtx.declarationsOnly = true;
        for (auto const localDecl : ctx->localDecls) { localDecl->accept(this); }
        typeCtx.declarationsOnly = false;
        for (auto const localDecl : ctx->localDecls) { localDecl->accept(this); }

        typeCtx.resT(fnT->resT);
        ctx->returnExpr->accept(this);

        typeCtx.down();
        typeCtx.store(ctx->name->getText(), fnT);
        return fnT;
    }

    std::any visitAbstraction(stellaParser::AbstractionContext* ctx) override
    {
        auto const resT = typeCtx.resT();

        typeCtx.up(ctx->getText());

        if (resT)
        {
            auto const casted = dynamic_cast<type::Func const*>(resT);
            if (!casted) { throw error::ErrorUnexpectedLambda{resT, ctx}; }
            if (ctx->paramDecls.size() != casted->paramTs.size()) { throw error::ErrorUnexpectedNumberOfParamsInLambda{casted, ctx}; }

            for (size_t i = 0; i < casted->paramTs.size(); ++i)
            {
                auto const paramT = type::ast_type(ctx->paramDecls[i]->paramType);
                if (!casted->paramTs[i]->sameType(*paramT)) { throw error::ErrorUnexpectedTypeForParameter{i, casted, ctx}; }
            }
        }

        {
            std::set<std::string> seenParams;
            for (auto const param : ctx->paramDecls)
            {
                auto const& pname = param->name->getText();
                if (!seenParams.insert(pname).second) { throw error::ErrorDuplicateFunctionParameter{pname}; }
                typeCtx.store(pname, type::ast_type(param->paramType));
            }
        }

        if (resT) { typeCtx.resT(dynamic_cast<type::Func const*>(resT)->resT); }
        auto const returnT = ctx->returnExpr->accept(this);

        typeCtx.down();

        typeCtx.resT(resT);
        return checkResT(type::Func::fromAbs(ctx, std::any_cast<stella_type_t>(returnT)), ctx);
    }

    std::any visitApplication(stellaParser::ApplicationContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->fun->accept(this));
        auto const casted = dynamic_cast<type::Func const*>(type);

        if (!casted) { throw error::ErrorNotAFunction{type, ctx}; }
        if (ctx->args.size() != casted->paramTs.size()) { throw error::ErrorIncorrectNumberOfArgs{casted, ctx}; }
        for (size_t i = 0; i < casted->paramTs.size(); ++i)
        {
            typeCtx.resT(casted->paramTs[i]);
            ctx->args[i]->accept(this);
        }

        typeCtx.resT(resT);
        return checkResT(casted->resT, ctx);
    }
    // Fun

    // Unit
    std::any visitConstUnit(stellaParser::ConstUnitContext* ctx) override
    {
        return checkResT(new type::Unit, ctx);
    }
    // Unit

    // Tuple
    std::any visitTuple(stellaParser::TupleContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        type::Tuple const* castedT = nullptr;

        if (resT)
        {
            auto const casted = dynamic_cast<type::Tuple const*>(resT);
            if (!casted) { throw error::ErrorUnexpectedTuple{resT, ctx}; }

            if (casted->itemTs.size() != ctx->exprs.size()) { throw error::ErrorUnexpectedTupleLength{casted, ctx}; }
            castedT = casted;
        }

        type::stella_types_t itemTs;
        for (size_t i = 0; i < ctx->exprs.size(); ++i)
        {
            if (resT) { typeCtx.resT(castedT->itemTs[i]); }
            itemTs.emplace_back(std::any_cast<stella_type_t>(ctx->exprs[i]->accept(this)));
        }

        return static_cast<stella_type_t>(new type::Tuple{itemTs});
    }

    std::any visitDotTuple(stellaParser::DotTupleContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->expr_->accept(this));
        auto const casted = dynamic_cast<type::Tuple const*>(type);

        if (!casted) { throw error::ErrorNotATuple{type, ctx}; }

        auto const index = atoi(ctx->index->getText().c_str());
        if (index > casted->itemTs.size()) { throw error::ErrorTupleIndexOutOfBounds{casted, ctx, index}; }

        if (resT) { typeCtx.resT(resT); }
        return checkResT(casted->itemTs[index - 1], ctx);
    }
    // Tuple

    // Record
    std::any visitRecord(stellaParser::RecordContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const casted = dynamic_cast<type::Record const*>(resT);

        if (resT)
        {
            if (!casted) { throw error::ErrorUnexpectedRecord{resT, ctx}; }

            std::map<std::string, stella_type_t> itemTs;
            for (auto const& binding : ctx->bindings)
            {
                if (itemTs.contains(binding->name->getText())) { throw error::ErrorDuplicateRecordFields{binding->name->getText(), ctx}; }
                itemTs[binding->name->getText()] = std::any_cast<stella_type_t>(binding->rhs->accept(this));
            }

            for (auto const& real : itemTs)
            {
                if (!casted->itemTs.contains(real.first)) { throw error::ErrorUnexpectedRecordFields{real.first, casted, ctx}; }
            }

            for (auto const& exp : casted->itemTs)
            {
                if (!itemTs.contains(exp.first)) { throw error::ErrorMissingRecordFields{exp.first, casted, ctx}; }
            }
        }

        std::map<std::string, stella_type_t> itemTs;
        for (auto const& bind : ctx->bindings)
        {
            if (itemTs.contains(bind->name->getText())) { throw error::ErrorDuplicateRecordFields{bind->name->getText(), ctx}; }
            if (casted) { typeCtx.resT(casted->itemTs.find(bind->name->getText())->second); }
            itemTs[bind->name->getText()] = std::any_cast<stella_type_t>(bind->rhs->accept(this));
        }

        return static_cast<stella_type_t>(new type::Record{std::move(itemTs)});
    }

    std::any visitDotRecord(stellaParser::DotRecordContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->expr_->accept(this));
        auto const casted = dynamic_cast<type::Record const*>(type);

        if (!casted) { throw error::ErrorNotARecord{type, ctx}; }
        auto const label = ctx->label->getText();

        if (auto const itemT = casted->itemTs.find(label); itemT != casted->itemTs.end())
        {
            if (resT) { typeCtx.resT(resT); }
            return checkResT(itemT->second, ctx);
        }

        throw error::ErrorUnexpectedFieldAccess{casted, label, ctx};
    }
    // Record

    // Sum-Type
    std::any visitInl(stellaParser::InlContext* ctx) override
    {
        if (auto const resT = typeCtx.resT())
        {
            auto const casted = dynamic_cast<type::Sum const*>(resT);
            if (!casted) { throw error::ErrorUnexpectedInjection{resT, ctx}; }
            typeCtx.resT(casted->inl);
            ctx->expr_->accept(this);
            return resT;
        }

        throw error::ErrorAmbiguousSumType{ctx};
    }

    std::any visitInr(stellaParser::InrContext* ctx) override
    {
        if (auto const resT = typeCtx.resT())
        {
            auto const casted = dynamic_cast<type::Sum const*>(resT);
            if (!casted) { throw error::ErrorUnexpectedInjection{resT, ctx}; }
            typeCtx.resT(casted->inr);
            ctx->expr_->accept(this);
            return resT;
        }

        throw error::ErrorAmbiguousSumType{ctx};
    }

    std::any visitVariant(stellaParser::VariantContext* ctx) override
    {
        if (auto const resT = typeCtx.resT())
        {
            auto const casted = dynamic_cast<type::Variant const*>(resT);
            if (!casted) { throw error::ErrorUnexpectedVariant{resT, ctx}; }

            auto const label = ctx->label->getText();
            if (auto const itemT = casted->itemTs.find(label); itemT != casted->itemTs.end())
            {
                if (itemT->second && !ctx->rhs) { throw error::ErrorMissingDataForLabel{label, itemT->second, ctx}; }
                if (!itemT->second && ctx->rhs) { throw error::ErrorUnexpectedDataForNullaryLabel{label, ctx}; }

                if (itemT->second) { typeCtx.resT(itemT->second); }
                if (ctx->rhs) { ctx->rhs->accept(this); }

                return resT;
            }
            else
            {
                throw error::ErrorUnexpectedVariantLabel{label, casted, ctx};
            }
        }

        throw error::ErrorAmbiguousVariantType{ctx};
    }

    std::any visitPatternInl(stellaParser::PatternInlContext* ctx) override
    {
        exhaustivePatterns.erase("inl");
        auto const casted = dynamic_cast<type::Sum const*>(matchedType);
        if (!casted) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        typeCtx.store(ctx->pattern_->getText(), casted->inl);
        return casted->inl;
    }

    std::any visitPatternInr(stellaParser::PatternInrContext* ctx) override
    {
        exhaustivePatterns.erase("inr");
        auto const casted = dynamic_cast<type::Sum const*>(matchedType);
        if (!casted) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        typeCtx.store(ctx->pattern_->getText(), casted->inr);
        return casted->inr;
    }

    std::any visitPatternVariant(stellaParser::PatternVariantContext* ctx) override
    {
        auto const casted = dynamic_cast<type::Variant const*>(matchedType);
        if (!casted) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        if (auto const itemT = casted->itemTs.find(ctx->label->getText()); itemT != casted->itemTs.end())
        {
            if (!itemT->second && ctx->pattern_) { throw error::ErrorUnexpectedNonNullaryVariantPattern{itemT->first, casted, ctx}; }
            if (itemT->second && !ctx->pattern_) { throw error::ErrorUnexpectedNullaryVariantPattern{itemT->first, casted, ctx}; }
            if (itemT->second) { typeCtx.store(ctx->pattern_->getText(), itemT->second); }
            exhaustivePatterns.erase(itemT->first);
            return itemT->second;
        }
        else
        {
            throw error::ErrorUnexpectedPatternForType{casted, ctx};
        }
    }

    std::any visitMatch(stellaParser::MatchContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->expr_->accept(this));
        matchedType = type;

        if (ctx->cases.empty()) { throw error::ErrorIllegalEmptyMatching{ctx}; }
        if (auto const sum = dynamic_cast<type::Sum const*>(type)) { exhaustivePatterns.insert("inl"); exhaustivePatterns.insert("inr"); }
        else if (auto const var = dynamic_cast<type::Variant const*>(type))
        {
            for (auto const& itemT : var->itemTs) { exhaustivePatterns.emplace(itemT.first); }
        }
        for (auto const case_ : ctx->cases)
        {
            typeCtx.up(case_->getText());
            case_->pattern_->accept(this);
            if (resT) { typeCtx.resT(resT); }
            case_->expr_->accept(this);
            typeCtx.down();
        }
        if (!exhaustivePatterns.empty())
        {
            exhaustivePatterns.clear();
            throw error::ErrorNonExhaustiveMatchPatterns{ctx};
        }

        return resT;
    }
    // Sum-Type

    // List
    std::any visitConsList(stellaParser::ConsListContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const casted = dynamic_cast<type::List const*>(resT);
        if (resT && !casted) { throw error::ErrorUnexpectedList{resT, ctx}; }

        if (resT) { typeCtx.resT(casted->itemT); }
        auto const headT = std::any_cast<stella_type_t>(ctx->head->accept(this));

        auto const* tailT = new type::List{headT};
        typeCtx.resT(tailT);
        ctx->tail->accept(this);

        if (resT) { typeCtx.resT(casted); }
        return checkResT(tailT, ctx);
    }

    std::any visitList(stellaParser::ListContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const casted = dynamic_cast<type::List const*>(resT);
        if (resT && !casted) { throw error::ErrorUnexpectedList{resT, ctx}; }

        if (ctx->exprs.empty())
        {
            if (!resT) { throw error::ErrorAmbiguousListType{ctx}; }
            return static_cast<stella_type_t>(casted);
        }

        if (resT) { typeCtx.resT(casted->itemT); }
        auto const itemT = std::any_cast<stella_type_t>(ctx->exprs[0]->accept(this));
        for (size_t i = 1; i < ctx->exprs.size(); ++i)
        {
            typeCtx.resT(itemT);
            ctx->exprs[i]->accept(this);
        }

        if (resT) { typeCtx.resT(casted); }
        return checkResT(new type::List{itemT}, ctx);
    }

    std::any visitHead(stellaParser::HeadContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->list->accept(this));
        auto const casted = dynamic_cast<type::List const*>(type);

        if (!casted) { throw error::ErrorNotAList{type, ctx}; }

        if (resT) { typeCtx.resT(resT); }
        return checkResT(casted->itemT, ctx);
    }

    std::any visitTail(stellaParser::TailContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->list->accept(this));
        auto const casted = dynamic_cast<type::List const*>(type);

        if (!casted) { throw error::ErrorNotAList{type, ctx}; }

        if (resT) { typeCtx.resT(resT); }
        return checkResT(new type::List{casted->itemT}, ctx);
    }

    std::any visitIsEmpty(stellaParser::IsEmptyContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const type = std::any_cast<stella_type_t>(ctx->list->accept(this));
        auto const casted = dynamic_cast<type::List const*>(type);

        if (!casted) { throw error::ErrorNotAList{type, ctx}; }

        if (resT) { typeCtx.resT(resT); }
        return checkResT(new type::Bool, ctx);
    }
    // List

    // Asc
    std::any visitTypeAsc(stellaParser::TypeAscContext* ctx) override
    {
        auto const ascT = checkResT(type::ast_type(ctx->type_), ctx);
        typeCtx.resT(ascT);
        ctx->expr_->accept(this);

        return ascT;
    }
    // Asc

    // Fix
    std::any visitFix(stellaParser::FixContext* ctx) override
    {
        auto resT = typeCtx.resT();
        auto const expected = new type::Func{{resT}, resT};
        if (resT) { typeCtx.resT(expected); }

        auto const type = std::any_cast<stella_type_t>(ctx->expr_->accept(this));
        auto const casted = dynamic_cast<type::Func const*>(type);
        if (!casted) { throw error::ErrorNotAFunction{type, ctx}; }

        if (casted->paramTs.size() != 1) { throw error::ErrorIncorrectNumberOfArgs(expected, ctx); }
        if (!casted->resT->sameType(*casted->paramTs[0])) { throw error::ErrorUnexpectedTypeForExpr{expected, casted, ctx}; }

        if (resT) { typeCtx.resT(resT); }
        return checkResT(casted->resT, ctx);
    }
    // Fix

    // Let
    std::any visitLet(stellaParser::LetContext* ctx) override
    {
        auto const resT = typeCtx.resT();
        auto const exprT = std::any_cast<stella_type_t>(ctx->patternBindings[0]->rhs->accept(this));

        typeCtx.up(ctx->getText());
        typeCtx.store(ctx->patternBindings[0]->pat->getText(), exprT);
        if (resT) { typeCtx.resT(resT); }
        auto const type = std::any_cast<stella_type_t>(ctx->body->accept(this));
        typeCtx.down();

        if (resT) { typeCtx.resT(resT); }
        return checkResT(type, ctx);
    }
    // Let

private:
    static constexpr auto MAIN = "main";
    StellaTypeCheckerContext& typeCtx;
    stella_type_t matchedType{};
    std::set<std::string> exhaustivePatterns;

    stella_type_t checkResT(stella_type_t real, stellaParser::ExprContext* ctx) const
    {
        if (auto const* expected = typeCtx.resT()) { typeMatch(expected, real, ctx); }
        return real;
    }

    void typeMatch(stella_type_t expected, stella_type_t real, stellaParser::ExprContext* ctx) const
    {
        if (!expected->sameType(*real)) { throw error::ErrorUnexpectedTypeForExpr{expected, real, ctx}; }
    }
};

}
