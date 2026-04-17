#pragma once

#include "StellaType.hpp"
#include "StellaTypeCheckerContext.hpp"
#include "errors/ErrorAmbiguousListType.hpp"
#include "errors/ErrorAmbiguousPanicType.hpp"
#include "errors/ErrorAmbiguousReferenceType.hpp"
#include "errors/ErrorAmbiguousSumType.hpp"
#include "errors/ErrorAmbiguousThrowType.hpp"
#include "errors/ErrorAmbiguousVariantType.hpp"
#include "errors/ErrorConflictingExceptionDeclarations.hpp"
#include "errors/ErrorDuplicateExceptionType.hpp"
#include "errors/ErrorDuplicateExceptionVariant.hpp"
#include "errors/ErrorDuplicateFuncDecl.hpp"
#include "errors/ErrorDuplicateFunctionParameter.hpp"
#include "errors/ErrorDuplicateRecordFields.hpp"
#include "errors/ErrorExceptionTypeNotDeclared.hpp"
#include "errors/ErrorIllegalEmptyMatching.hpp"
#include "errors/ErrorIllegalLocalExceptionType.hpp"
#include "errors/ErrorIllegalLocalOpenVariantException.hpp"
#include "errors/ErrorIncorrectArityOfMain.hpp"
#include "errors/ErrorIncorrectNumberOfArgs.hpp"
#include "errors/ErrorMissingDataForLabel.hpp"
#include "errors/ErrorMissingMain.hpp"
#include "errors/ErrorMissingRecordFields.hpp"
#include "errors/ErrorNonExhaustiveMatchPatterns.hpp"
#include "errors/ErrorNotAFunction.hpp"
#include "errors/ErrorNotAList.hpp"
#include "errors/ErrorNotARecord.hpp"
#include "errors/ErrorNotAReference.hpp"
#include "errors/ErrorNotATuple.hpp"
#include "errors/ErrorTupleIndexOutOfBounds.hpp"
#include "errors/ErrorUnexpectedDataForNullaryLabel.hpp"
#include "errors/ErrorUnexpectedFieldAccess.hpp"
#include "errors/ErrorUnexpectedInjection.hpp"
#include "errors/ErrorUnexpectedLambda.hpp"
#include "errors/ErrorUnexpectedList.hpp"
#include "errors/ErrorUnexpectedMemoryAddress.hpp"
#include "errors/ErrorUnexpectedNonNullaryVariantPattern.hpp"
#include "errors/ErrorUnexpectedNullaryVariantPattern.hpp"
#include "errors/ErrorUnexpectedNumberOfParamsInLambda.hpp"
#include "errors/ErrorUnexpectedPatternForType.hpp"
#include "errors/ErrorUnexpectedRecord.hpp"
#include "errors/ErrorUnexpectedRecordFields.hpp"
#include "errors/ErrorUnexpectedReference.hpp"
#include "errors/ErrorUnexpectedSubtype.hpp"
#include "errors/ErrorUnexpectedTuple.hpp"
#include "errors/ErrorUnexpectedTupleLength.hpp"
#include "errors/ErrorUnexpectedTypeForExpr.hpp"
#include "errors/ErrorUnexpectedTypeForParameter.hpp"
#include "errors/ErrorUnexpectedVariant.hpp"
#include "errors/ErrorUnexpectedVariantLabel.hpp"
#include "errors/ErrorUndefinedVariable.hpp"
#include "stellaParser.h"
#include "stellaParserBaseVisitor.h"

#include <any>
#include <cstddef>
#include <cstdlib>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace typecheck
{

class StellaTypeChecker : public stellaParserBaseVisitor
{
public:
    explicit StellaTypeChecker(StellaTypeCheckerContext& typeCtx)
        : typeCtx{typeCtx}
    {}

    std::any visitProgram(stellaParser::ProgramContext* ctx) override
    {
        collectExtensions(ctx);

        typeCtx.declarationsOnly = true;
        for (auto* decl : ctx->decls) { decl->accept(this); }

        typeCtx.declarationsOnly = false;
        std::any res;
        for (auto* decl : ctx->decls) { res = decl->accept(this); }

        if (auto const* mainT = dynamic_cast<type::Func const*>(typeCtx.type(MAIN)); !mainT) { throw error::ErrorMissingMain{}; }
        else if (mainT->paramTs.size() != 1) { throw error::ErrorIncorrectArityOfMain{}; }

        return res;
    }

    std::any visitChildren(antlr4::tree::ParseTree* node) override
    {
        return stellaParserBaseVisitor::visitChildren(node);
    }

    std::any visitDeclFun(stellaParser::DeclFunContext* ctx) override
    {
        auto const* fnT = type::Func::fromDecl(ctx);

        if (typeCtx.declarationsOnly)
        {
            if (!typeCtx.store(ctx->name->getText(), fnT)) { throw error::ErrorDuplicateFuncDecl{ctx->name->getText(), typeCtx.levelName()}; }
            return static_cast<stella_type_t>(fnT);
        }

        typeCtx.up(ctx->name->getText());
        bindParameters(ctx->paramDecls, fnT);

        auto previous = typeCtx.declarationsOnly;
        typeCtx.declarationsOnly = true;
        for (auto* localDecl : ctx->localDecls) { localDecl->accept(this); }
        typeCtx.declarationsOnly = false;
        for (auto* localDecl : ctx->localDecls) { localDecl->accept(this); }
        typeCtx.declarationsOnly = previous;

        auto const expected = typeCtx.resT();
        typeCtx.resT(fnT->resT);
        ctx->returnExpr->accept(this);
        typeCtx.resT(expected);

        typeCtx.down();
        return static_cast<stella_type_t>(fnT);
    }

    std::any visitDeclFunGeneric(stellaParser::DeclFunGenericContext* ctx) override
    {
        auto const* fnT = type::Func::fromDecl(ctx);

        if (typeCtx.declarationsOnly)
        {
            if (!typeCtx.store(ctx->name->getText(), fnT)) { throw error::ErrorDuplicateFuncDecl{ctx->name->getText(), typeCtx.levelName()}; }
            return static_cast<stella_type_t>(fnT);
        }

        typeCtx.up(ctx->name->getText());
        bindParameters(ctx->paramDecls, fnT);

        auto previous = typeCtx.declarationsOnly;
        typeCtx.declarationsOnly = true;
        for (auto* localDecl : ctx->localDecls) { localDecl->accept(this); }
        typeCtx.declarationsOnly = false;
        for (auto* localDecl : ctx->localDecls) { localDecl->accept(this); }
        typeCtx.declarationsOnly = previous;

        auto const expected = typeCtx.resT();
        typeCtx.resT(fnT->resT);
        ctx->returnExpr->accept(this);
        typeCtx.resT(expected);

        typeCtx.down();
        return static_cast<stella_type_t>(fnT);
    }

    std::any visitDeclExceptionType(stellaParser::DeclExceptionTypeContext* ctx) override
    {
        if (typeCtx.levelName() != GLOBAL_LEVEL_NAME) { throw error::ErrorIllegalLocalExceptionType{}; }
        if (!typeCtx.declarationsOnly) { return typeCtx.exceptionTypeDecl(); }
        if (typeCtx.hasOpenVariantExceptions()) { throw error::ErrorConflictingExceptionDeclarations{}; }
        if (typeCtx.hasDeclaredExceptionType()) { throw error::ErrorDuplicateExceptionType{}; }

        auto const* excT = type::ast_type(ctx->exceptionType);
        typeCtx.exceptionTypeDecl(excT);
        return static_cast<stella_type_t>(excT);
    }

    std::any visitDeclExceptionVariant(stellaParser::DeclExceptionVariantContext* ctx) override
    {
        if (typeCtx.levelName() != GLOBAL_LEVEL_NAME) { throw error::ErrorIllegalLocalOpenVariantException{}; }
        if (!typeCtx.declarationsOnly) { return typeCtx.exceptionVariantType(ctx->name->getText()); }
        if (typeCtx.hasDeclaredExceptionType()) { throw error::ErrorConflictingExceptionDeclarations{}; }

        auto const label = ctx->name->getText();
        auto const* variantT = type::ast_type(ctx->variantType);
        if (!typeCtx.addExceptionVariant(label, variantT)) { throw error::ErrorDuplicateExceptionVariant{label}; }
        return static_cast<stella_type_t>(variantT);
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

    std::any visitConstTrue(stellaParser::ConstTrueContext* ctx) override
    {
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitConstFalse(stellaParser::ConstFalseContext* ctx) override
    {
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitIf(stellaParser::IfContext* ctx) override
    {
        auto const* outerExpected = typeCtx.resT();
        typeCtx.resT(new type::Bool());
        ctx->condition->accept(this);

        if (outerExpected)
        {
            typeCtx.resT(outerExpected);
            ctx->thenExpr->accept(this);
            typeCtx.resT(outerExpected);
            ctx->elseExpr->accept(this);
            typeCtx.resT(outerExpected);
            return checkResT(outerExpected, ctx);
        }

        auto const thenT = infer(ctx->thenExpr);
        auto const elseT = infer(ctx->elseExpr);
        auto const joined = joinOrThrow(thenT, elseT, ctx);
        return checkResT(joined, ctx);
    }

    std::any visitConstInt(stellaParser::ConstIntContext* ctx) override
    {
        return checkResT(new type::Nat(), ctx);
    }

    std::any visitSucc(stellaParser::SuccContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        typeCtx.resT(new type::Nat());
        ctx->n->accept(this);
        typeCtx.resT(resT);
        return checkResT(new type::Nat(), ctx);
    }

    std::any visitPred(stellaParser::PredContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        typeCtx.resT(new type::Nat());
        ctx->n->accept(this);
        typeCtx.resT(resT);
        return checkResT(new type::Nat(), ctx);
    }

    std::any visitIsZero(stellaParser::IsZeroContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        typeCtx.resT(new type::Nat());
        ctx->n->accept(this);
        typeCtx.resT(resT);
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitNatRec(stellaParser::NatRecContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        typeCtx.resT(new type::Nat());
        ctx->n->accept(this);

        if (resT) { typeCtx.resT(resT); }
        auto const* initT = infer(ctx->initial);

        typeCtx.resT(new type::Func({new type::Nat()}, new type::Func({initT}, initT)));
        ctx->step->accept(this);

        typeCtx.resT(resT);
        return checkResT(initT, ctx);
    }

    std::any visitAbstraction(stellaParser::AbstractionContext* ctx) override
    {
        auto const* resT = typeCtx.resT();

        typeCtx.up(ctx->getText());

        type::Func const* expectedFn = nullptr;
        if (resT)
        {
            expectedFn = dynamic_cast<type::Func const*>(resT);
            if (!expectedFn) { throw error::ErrorUnexpectedLambda{resT, ctx}; }
            if (ctx->paramDecls.size() != expectedFn->paramTs.size()) { throw error::ErrorUnexpectedNumberOfParamsInLambda{expectedFn, ctx}; }

            for (size_t i = 0; i < expectedFn->paramTs.size(); ++i)
            {
                auto const* paramT = type::ast_type(ctx->paramDecls[i]->paramType);
                if (!type::same_types(expectedFn->paramTs[i], paramT)) { throw error::ErrorUnexpectedTypeForParameter{i, expectedFn, ctx}; }
            }
        }

        {
            std::set<std::string> seenParams;
            for (auto* param : ctx->paramDecls)
            {
                auto const pname = param->name->getText();
                if (!seenParams.insert(pname).second) { throw error::ErrorDuplicateFunctionParameter{pname}; }
                typeCtx.store(pname, type::ast_type(param->paramType));
            }
        }

        if (expectedFn) { typeCtx.resT(expectedFn->resT); }
        auto const* returnT = infer(ctx->returnExpr);
        typeCtx.down();

        typeCtx.resT(resT);
        return checkResT(type::Func::fromAbs(ctx, returnT), ctx);
    }

    std::any visitApplication(stellaParser::ApplicationContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* funT = infer(ctx->fun);
        auto const* casted = dynamic_cast<type::Func const*>(funT);

        if (!casted) { throw error::ErrorNotAFunction{funT, ctx}; }
        if (ctx->args.size() != casted->paramTs.size()) { throw error::ErrorIncorrectNumberOfArgs{casted, ctx}; }

        for (size_t i = 0; i < casted->paramTs.size(); ++i)
        {
            typeCtx.resT(casted->paramTs[i]);
            ctx->args[i]->accept(this);
        }

        typeCtx.resT(resT);
        return checkResT(casted->resT, ctx);
    }

    std::any visitConstUnit(stellaParser::ConstUnitContext* ctx) override
    {
        return checkResT(new type::Unit(), ctx);
    }

    std::any visitTuple(stellaParser::TupleContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* expectedTuple = dynamic_cast<type::Tuple const*>(resT);

        if (resT && !expectedTuple) { throw error::ErrorUnexpectedTuple{resT, ctx}; }
        if (expectedTuple && expectedTuple->itemTs.size() != ctx->exprs.size()) { throw error::ErrorUnexpectedTupleLength{expectedTuple, ctx}; }

        type::stella_types_t itemTs;
        itemTs.reserve(ctx->exprs.size());
        for (size_t i = 0; i < ctx->exprs.size(); ++i)
        {
            if (expectedTuple) { typeCtx.resT(expectedTuple->itemTs[i]); }
            itemTs.emplace_back(infer(ctx->exprs[i]));
        }

        auto const* tupleT = new type::Tuple{std::move(itemTs)};
        typeCtx.resT(resT);
        return checkResT(tupleT, ctx);
    }

    std::any visitDotTuple(stellaParser::DotTupleContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* exprT = infer(ctx->expr_);
        auto const* tupleT = dynamic_cast<type::Tuple const*>(exprT);

        if (!tupleT) { throw error::ErrorNotATuple{exprT, ctx}; }

        auto const index = static_cast<size_t>(std::atoi(ctx->index->getText().c_str()));
        if (index == 0 || index > tupleT->itemTs.size()) { throw error::ErrorTupleIndexOutOfBounds{tupleT, ctx, static_cast<int>(index)}; }

        typeCtx.resT(resT);
        return checkResT(tupleT->itemTs[index - 1], ctx);
    }

    std::any visitRecord(stellaParser::RecordContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* expectedRecord = dynamic_cast<type::Record const*>(resT);
        auto const structural = typeCtx.structuralSubtypingEnabled();

        if (resT && !expectedRecord) { throw error::ErrorUnexpectedRecord{resT, ctx}; }

        std::map<std::string, stella_type_t> itemTs;
        for (auto* bind : ctx->bindings)
        {
            auto const label = bind->name->getText();
            if (itemTs.contains(label)) { throw error::ErrorDuplicateRecordFields{label, ctx}; }
            if (expectedRecord)
            {
                if (auto const it = expectedRecord->itemTs.find(label); it != expectedRecord->itemTs.end()) { typeCtx.resT(it->second); }
            }
            itemTs[label] = infer(bind->rhs);
        }

        if (expectedRecord)
        {
            for (auto const& [label, fieldT] : expectedRecord->itemTs)
            {
                auto const it = itemTs.find(label);
                if (it == itemTs.end()) { throw error::ErrorMissingRecordFields{label, expectedRecord, ctx}; }
                typeMatch(fieldT, it->second, ctx);
            }

            if (!structural)
            {
                for (auto const& [label, _] : itemTs)
                {
                    if (!expectedRecord->itemTs.contains(label)) { throw error::ErrorUnexpectedRecordFields{label, expectedRecord, ctx}; }
                }
            }
        }

        auto const* recordT = new type::Record{std::move(itemTs)};
        typeCtx.resT(resT);
        return checkResT(recordT, ctx);
    }

    std::any visitDotRecord(stellaParser::DotRecordContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* exprT = infer(ctx->expr_);
        auto const* recordT = dynamic_cast<type::Record const*>(exprT);

        if (!recordT) { throw error::ErrorNotARecord{exprT, ctx}; }

        auto const label = ctx->label->getText();
        if (auto const it = recordT->itemTs.find(label); it != recordT->itemTs.end())
        {
            typeCtx.resT(resT);
            return checkResT(it->second, ctx);
        }

        throw error::ErrorUnexpectedFieldAccess{recordT, label, ctx};
    }

    std::any visitInl(stellaParser::InlContext* ctx) override
    {
        if (auto const* resT = typeCtx.resT())
        {
            auto const* sumT = dynamic_cast<type::Sum const*>(resT);
            if (!sumT) { throw error::ErrorUnexpectedInjection{resT, ctx}; }
            typeCtx.resT(sumT->inl);
            ctx->expr_->accept(this);
            return resT;
        }

        auto const* inner = infer(ctx->expr_);
        if (!typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousSumType{ctx}; }
        return static_cast<stella_type_t>(new type::Sum{inner, new type::Bottom()});
    }

    std::any visitInr(stellaParser::InrContext* ctx) override
    {
        if (auto const* resT = typeCtx.resT())
        {
            auto const* sumT = dynamic_cast<type::Sum const*>(resT);
            if (!sumT) { throw error::ErrorUnexpectedInjection{resT, ctx}; }
            typeCtx.resT(sumT->inr);
            ctx->expr_->accept(this);
            return resT;
        }

        auto const* inner = infer(ctx->expr_);
        if (!typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousSumType{ctx}; }
        return static_cast<stella_type_t>(new type::Sum{new type::Bottom(), inner});
    }

    std::any visitVariant(stellaParser::VariantContext* ctx) override
    {
        if (auto const* resT = typeCtx.resT())
        {
            auto const* variantT = dynamic_cast<type::Variant const*>(resT);
            if (!variantT) { throw error::ErrorUnexpectedVariant{resT, ctx}; }

            auto const label = ctx->label->getText();
            if (auto const it = variantT->itemTs.find(label); it != variantT->itemTs.end())
            {
                if (it->second && !ctx->rhs) { throw error::ErrorMissingDataForLabel{label, it->second, ctx}; }
                if (!it->second && ctx->rhs) { throw error::ErrorUnexpectedDataForNullaryLabel{label, ctx}; }
                if (it->second) { typeCtx.resT(it->second); }
                if (ctx->rhs) { ctx->rhs->accept(this); }
                return resT;
            }

            throw error::ErrorUnexpectedVariantLabel{label, variantT, ctx};
        }

        if (!typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousVariantType{ctx}; }

        std::map<std::string, stella_type_t> itemTs;
        itemTs.emplace(ctx->label->getText(), ctx->rhs ? infer(ctx->rhs) : nullptr);
        return static_cast<stella_type_t>(new type::Variant{std::move(itemTs)});
    }

    std::any visitMatch(stellaParser::MatchContext* ctx) override
    {
        if (ctx->cases.empty()) { throw error::ErrorIllegalEmptyMatching{ctx}; }

        auto const* resT = typeCtx.resT();
        auto const* scrutineeT = infer(ctx->expr_);
        matchedType = scrutineeT;
        resetExhaustivePatterns(scrutineeT);

        stella_type_t resultT = resT;
        for (auto* case_ : ctx->cases)
        {
            typeCtx.up(case_->getText());
            bindPattern(case_->pattern_, scrutineeT);

            stella_type_t currentCaseT{};
            if (resT)
            {
                typeCtx.resT(resT);
                currentCaseT = std::any_cast<stella_type_t>(case_->expr_->accept(this));
            }
            else
            {
                currentCaseT = infer(case_->expr_);
                resultT = resultT ? joinOrThrow(resultT, currentCaseT, case_->expr_) : currentCaseT;
            }
            (void)currentCaseT;

            typeCtx.down();
        }

        if (!exhaustivePatterns.empty())
        {
            exhaustivePatterns.clear();
            throw error::ErrorNonExhaustiveMatchPatterns{ctx};
        }

        return resultT ? checkResT(resultT, ctx) : resultT;
    }

    std::any visitPatternInl(stellaParser::PatternInlContext* ctx) override
    {
        exhaustivePatterns.erase("inl");
        auto const* sumT = dynamic_cast<type::Sum const*>(matchedType);
        if (!sumT) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        bindPattern(ctx->pattern_, sumT->inl);
        return sumT->inl;
    }

    std::any visitPatternInr(stellaParser::PatternInrContext* ctx) override
    {
        exhaustivePatterns.erase("inr");
        auto const* sumT = dynamic_cast<type::Sum const*>(matchedType);
        if (!sumT) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        bindPattern(ctx->pattern_, sumT->inr);
        return sumT->inr;
    }

    std::any visitPatternVariant(stellaParser::PatternVariantContext* ctx) override
    {
        auto const* variantT = dynamic_cast<type::Variant const*>(matchedType);
        if (!variantT) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }

        auto const label = ctx->label->getText();
        auto const it = variantT->itemTs.find(label);
        if (it == variantT->itemTs.end()) { throw error::ErrorUnexpectedPatternForType{variantT, ctx}; }

        if (!it->second && ctx->pattern_) { throw error::ErrorUnexpectedNonNullaryVariantPattern{label, variantT, ctx}; }
        if (it->second && !ctx->pattern_) { throw error::ErrorUnexpectedNullaryVariantPattern{label, variantT, ctx}; }

        exhaustivePatterns.erase(label);
        if (ctx->pattern_) { bindPattern(ctx->pattern_, it->second); }
        return it->second;
    }

    std::any visitPatternVar(stellaParser::PatternVarContext* ctx) override
    {
        typeCtx.store(ctx->name->getText(), matchedType);
        return matchedType;
    }

    std::any visitParenthesisedPattern(stellaParser::ParenthesisedPatternContext* ctx) override
    {
        return ctx->pattern_->accept(this);
    }

    std::any visitPatternAsc(stellaParser::PatternAscContext* ctx) override
    {
        auto const* annotated = type::ast_type(ctx->type_);
        if (!type::is_subtype(matchedType, annotated, typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedPatternForType{matchedType, ctx};
        }

        auto const* previous = matchedType;
        matchedType = annotated;
        auto const res = ctx->pattern_->accept(this);
        matchedType = previous;
        return res;
    }

    std::any visitPatternCastAs(stellaParser::PatternCastAsContext* ctx) override
    {
        auto const* castT = type::ast_type(ctx->type_);
        if (!type::is_subtype(castT, matchedType, typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedSubtype{matchedType, castT, ctx};
        }

        auto const* previous = matchedType;
        matchedType = castT;
        auto const res = ctx->pattern_->accept(this);
        matchedType = previous;
        return res;
    }

    std::any visitPatternTuple(stellaParser::PatternTupleContext* ctx) override
    {
        auto const* tupleT = dynamic_cast<type::Tuple const*>(matchedType);
        if (!tupleT || tupleT->itemTs.size() != ctx->patterns.size()) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }

        for (size_t i = 0; i < ctx->patterns.size(); ++i) { bindPattern(ctx->patterns[i], tupleT->itemTs[i]); }
        return matchedType;
    }

    std::any visitPatternRecord(stellaParser::PatternRecordContext* ctx) override
    {
        auto const* recordT = dynamic_cast<type::Record const*>(matchedType);
        if (!recordT) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }

        for (auto* pattern : ctx->patterns)
        {
            auto const label = pattern->label->getText();
            auto const it = recordT->itemTs.find(label);
            if (it == recordT->itemTs.end()) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
            bindPattern(pattern->pattern_, it->second);
        }
        return matchedType;
    }

    std::any visitPatternList(stellaParser::PatternListContext* ctx) override
    {
        auto const* listT = dynamic_cast<type::List const*>(matchedType);
        if (!listT) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        for (auto* pattern : ctx->patterns) { bindPattern(pattern, listT->itemT); }
        return matchedType;
    }

    std::any visitPatternCons(stellaParser::PatternConsContext* ctx) override
    {
        auto const* listT = dynamic_cast<type::List const*>(matchedType);
        if (!listT) { throw error::ErrorUnexpectedPatternForType{matchedType, ctx}; }
        bindPattern(ctx->head, listT->itemT);
        bindPattern(ctx->tail, listT);
        return matchedType;
    }

    std::any visitPatternInt(stellaParser::PatternIntContext* ctx) override
    {
        if (!type::is_subtype(new type::Nat(), matchedType, typeCtx.structuralSubtypingEnabled())
            && !type::is_subtype(matchedType, new type::Nat(), typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedPatternForType{matchedType, ctx};
        }
        return new type::Nat();
    }

    std::any visitPatternTrue(stellaParser::PatternTrueContext* ctx) override
    {
        if (!type::is_subtype(new type::Bool(), matchedType, typeCtx.structuralSubtypingEnabled())
            && !type::is_subtype(matchedType, new type::Bool(), typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedPatternForType{matchedType, ctx};
        }
        return new type::Bool();
    }

    std::any visitPatternFalse(stellaParser::PatternFalseContext* ctx) override
    {
        if (!type::is_subtype(new type::Bool(), matchedType, typeCtx.structuralSubtypingEnabled())
            && !type::is_subtype(matchedType, new type::Bool(), typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedPatternForType{matchedType, ctx};
        }
        return new type::Bool();
    }

    std::any visitPatternUnit(stellaParser::PatternUnitContext* ctx) override
    {
        if (!type::is_subtype(new type::Unit(), matchedType, typeCtx.structuralSubtypingEnabled())
            && !type::is_subtype(matchedType, new type::Unit(), typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedPatternForType{matchedType, ctx};
        }
        return new type::Unit();
    }

    std::any visitPatternSucc(stellaParser::PatternSuccContext* ctx) override
    {
        auto const* previous = matchedType;
        matchedType = new type::Nat();
        auto const res = ctx->pattern_->accept(this);
        matchedType = previous;
        return res;
    }

    std::any visitConsList(stellaParser::ConsListContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* expectedList = dynamic_cast<type::List const*>(resT);
        if (resT && !expectedList) { throw error::ErrorUnexpectedList{resT, ctx}; }

        if (expectedList) { typeCtx.resT(expectedList->itemT); }
        auto const* headT = infer(ctx->head);

        auto const* listT = new type::List{headT};
        typeCtx.resT(listT);
        ctx->tail->accept(this);

        typeCtx.resT(resT);
        return checkResT(listT, ctx);
    }

    std::any visitList(stellaParser::ListContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* expectedList = dynamic_cast<type::List const*>(resT);
        if (resT && !expectedList) { throw error::ErrorUnexpectedList{resT, ctx}; }

        if (ctx->exprs.empty())
        {
            if (expectedList) { return static_cast<stella_type_t>(expectedList); }
            if (!typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousListType{ctx}; }
            return static_cast<stella_type_t>(new type::List{new type::Bottom()});
        }

        if (expectedList) { typeCtx.resT(expectedList->itemT); }
        auto const* itemT = infer(ctx->exprs[0]);
        for (size_t i = 1; i < ctx->exprs.size(); ++i)
        {
            typeCtx.resT(itemT);
            ctx->exprs[i]->accept(this);
        }

        typeCtx.resT(resT);
        return checkResT(new type::List{itemT}, ctx);
    }

    std::any visitHead(stellaParser::HeadContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* listExprT = infer(ctx->list);
        auto const* listT = dynamic_cast<type::List const*>(listExprT);
        if (!listT) { throw error::ErrorNotAList{listExprT, ctx}; }
        typeCtx.resT(resT);
        return checkResT(listT->itemT, ctx);
    }

    std::any visitTail(stellaParser::TailContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* listExprT = infer(ctx->list);
        auto const* listT = dynamic_cast<type::List const*>(listExprT);
        if (!listT) { throw error::ErrorNotAList{listExprT, ctx}; }
        typeCtx.resT(resT);
        return checkResT(new type::List{listT->itemT}, ctx);
    }

    std::any visitIsEmpty(stellaParser::IsEmptyContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* listExprT = infer(ctx->list);
        auto const* listT = dynamic_cast<type::List const*>(listExprT);
        if (!listT) { throw error::ErrorNotAList{listExprT, ctx}; }
        typeCtx.resT(resT);
        return checkResT(new type::Bool(), ctx);
    }

    std::any visitTypeAsc(stellaParser::TypeAscContext* ctx) override
    {
        auto const* ascT = type::ast_type(ctx->type_);
        auto const* expected = typeCtx.resT();
        typeCtx.resT(ascT);
        ctx->expr_->accept(this);
        typeCtx.resT(expected);
        return checkResT(ascT, ctx);
    }

    std::any visitTypeCast(stellaParser::TypeCastContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* sourceT = infer(ctx->expr_);
        auto const* targetT = type::ast_type(ctx->type_);
        if (!type::is_castable(sourceT, targetT, typeCtx.structuralSubtypingEnabled()))
        {
            throw error::ErrorUnexpectedSubtype{targetT, sourceT, ctx};
        }
        typeCtx.resT(resT);
        return checkResT(targetT, ctx);
    }

    std::any visitSequence(stellaParser::SequenceContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        typeCtx.resT(new type::Unit());
        ctx->expr1->accept(this);
        typeCtx.resT(resT);
        return ctx->expr2->accept(this);
    }

    std::any visitRef(stellaParser::RefContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* expectedRef = dynamic_cast<type::Ref const*>(resT);
        if (resT && !expectedRef) { throw error::ErrorUnexpectedReference{resT, ctx}; }

        if (expectedRef)
        {
            typeCtx.resT(expectedRef->itemT);
            ctx->expr_->accept(this);
            return static_cast<stella_type_t>(expectedRef);
        }

        return static_cast<stella_type_t>(new type::Ref{infer(ctx->expr_)});
    }

    std::any visitConstMemory(stellaParser::ConstMemoryContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const address = ctx->mem->getText();
        if (!resT)
        {
            if (!typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousReferenceType{ctx}; }
            auto const* refT = new type::Ref{new type::Bottom()};
            typeCtx.rememberMemoryAddress(address, refT);
            return static_cast<stella_type_t>(refT);
        }

        auto const* refT = dynamic_cast<type::Ref const*>(resT);
        if (!refT) { throw error::ErrorUnexpectedMemoryAddress{resT, ctx}; }
        typeCtx.rememberMemoryAddress(address, refT);
        return static_cast<stella_type_t>(refT);
    }

    std::any visitDeref(stellaParser::DerefContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        if (resT && dynamic_cast<stellaParser::ConstMemoryContext*>(ctx->expr_))
        {
            typeCtx.resT(new type::Ref{resT});
        }
        auto const* exprT = infer(ctx->expr_);
        auto const* refT = dynamic_cast<type::Ref const*>(exprT);
        if (!refT) { throw error::ErrorNotAReference{exprT, ctx}; }
        typeCtx.resT(resT);
        return checkResT(refT->itemT, ctx);
    }

    std::any visitAssign(stellaParser::AssignContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* lhsT = infer(ctx->lhs);
        auto const* refT = dynamic_cast<type::Ref const*>(lhsT);
        if (!refT) { throw error::ErrorNotAReference{lhsT, ctx}; }

        typeCtx.resT(refT->itemT);
        ctx->rhs->accept(this);
        typeCtx.resT(resT);
        return checkResT(new type::Unit(), ctx);
    }

    std::any visitPanic(stellaParser::PanicContext* ctx) override
    {
        auto const* expected = typeCtx.resT();
        if (!expected && !typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousPanicType{ctx}; }
        typeCtx.resT(expected);
        return checkResT(new type::Bottom(), ctx);
    }

    std::any visitThrow(stellaParser::ThrowContext* ctx) override
    {
        auto const* expected = typeCtx.resT();
        auto const* exprExpected = declaredExceptionType();
        if (!exprExpected) { throw error::ErrorExceptionTypeNotDeclared{}; }

        typeCtx.resT(exprExpected);
        ctx->expr_->accept(this);

        if (!expected && !typeCtx.ambiguousAsBottomEnabled()) { throw error::ErrorAmbiguousThrowType{ctx}; }
        typeCtx.resT(expected);
        return checkResT(new type::Bottom(), ctx);
    }

    std::any visitTryWith(stellaParser::TryWithContext* ctx) override
    {
        if (!declaredExceptionType()) { throw error::ErrorExceptionTypeNotDeclared{}; }
        auto const* resT = typeCtx.resT();
        if (resT)
        {
            typeCtx.resT(resT);
            ctx->tryExpr->accept(this);
            typeCtx.resT(resT);
            ctx->fallbackExpr->accept(this);
            return static_cast<stella_type_t>(resT);
        }

        auto const* tryT = infer(ctx->tryExpr);
        auto const* fallbackT = infer(ctx->fallbackExpr);
        return joinOrThrow(tryT, fallbackT, ctx);
    }

    std::any visitTryCatch(stellaParser::TryCatchContext* ctx) override
    {
        auto const* excT = declaredExceptionType();
        if (!excT) { throw error::ErrorExceptionTypeNotDeclared{}; }

        auto const* resT = typeCtx.resT();
        auto const* tryT = infer(ctx->tryExpr);

        typeCtx.up(ctx->getText());
        bindPattern(ctx->pat, excT);

        stella_type_t catchT{};
        if (resT)
        {
            typeCtx.resT(resT);
            catchT = std::any_cast<stella_type_t>(ctx->fallbackExpr->accept(this));
        }
        else
        {
            catchT = infer(ctx->fallbackExpr);
        }
        typeCtx.down();

        if (resT) { return static_cast<stella_type_t>(resT); }
        return joinOrThrow(tryT, catchT, ctx);
    }

    std::any visitTryCastAs(stellaParser::TryCastAsContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* tryT = infer(ctx->tryExpr);
        auto const* castT = type::ast_type(ctx->type_);

        typeCtx.up(ctx->getText());
        bindPattern(ctx->pattern_, castT);

        stella_type_t successT{};
        stella_type_t fallbackT{};
        if (resT)
        {
            typeCtx.resT(resT);
            successT = std::any_cast<stella_type_t>(ctx->expr_->accept(this));
            typeCtx.resT(resT);
            fallbackT = std::any_cast<stella_type_t>(ctx->fallbackExpr->accept(this));
            typeCtx.down();
            return static_cast<stella_type_t>(resT);
        }

        successT = infer(ctx->expr_);
        typeCtx.down();
        fallbackT = infer(ctx->fallbackExpr);
        return joinOrThrow(successT, fallbackT, ctx);
    }

    std::any visitFix(stellaParser::FixContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        auto const* expected = new type::Func{{resT}, resT};
        if (resT) { typeCtx.resT(expected); }

        auto const* exprT = infer(ctx->expr_);
        auto const* fnT = dynamic_cast<type::Func const*>(exprT);
        if (!fnT) { throw error::ErrorNotAFunction{exprT, ctx}; }
        if (fnT->paramTs.size() != 1) { throw error::ErrorIncorrectNumberOfArgs{expected, ctx}; }
        if (!type::same_types(fnT->paramTs[0], fnT->resT)) { throw error::ErrorUnexpectedTypeForExpr{expected, exprT, ctx}; }

        typeCtx.resT(resT);
        return checkResT(fnT->resT, ctx);
    }

    std::any visitLet(stellaParser::LetContext* ctx) override
    {
        auto const* resT = typeCtx.resT();
        std::vector<std::pair<stellaParser::PatternContext*, stella_type_t>> bindings;
        bindings.reserve(ctx->patternBindings.size());
        for (auto* binding : ctx->patternBindings) { bindings.emplace_back(binding->pat, infer(binding->rhs)); }

        typeCtx.up(ctx->getText());
        for (auto const& [pattern, boundT] : bindings) { bindPattern(pattern, boundT); }

        if (resT) { typeCtx.resT(resT); }
        auto const* bodyT = infer(ctx->body);
        typeCtx.down();

        typeCtx.resT(resT);
        return checkResT(bodyT, ctx);
    }

private:
    static constexpr auto MAIN = "main";
    static constexpr auto GLOBAL_LEVEL_NAME = "GLOBAL";

    StellaTypeCheckerContext& typeCtx;
    stella_type_t matchedType{};
    std::set<std::string> exhaustivePatterns;

    void collectExtensions(stellaParser::ProgramContext* ctx)
    {
        for (auto* ext : ctx->extensions)
        {
            auto* concrete = dynamic_cast<stellaParser::AnExtensionContext*>(ext);
            if (!concrete) { continue; }
            for (auto* name : concrete->ExtensionName()) { typeCtx.enableExtension(name->getText()); }
        }
    }

    void bindParameters(auto const& params, type::Func const* fnT)
    {
        std::set<std::string> seenParams;
        for (size_t i = 0; i < params.size(); ++i)
        {
            auto const pname = params[i]->name->getText();
            if (!seenParams.insert(pname).second) { throw error::ErrorDuplicateFunctionParameter{pname}; }
            typeCtx.store(pname, fnT->paramTs[i]);
        }
    }

    stella_type_t infer(stellaParser::ExprContext* ctx)
    {
        return std::any_cast<stella_type_t>(ctx->accept(this));
    }

    stella_type_t checkResT(stella_type_t real, stellaParser::ExprContext* ctx)
    {
        if (auto const* expected = typeCtx.resT()) { typeMatch(expected, real, ctx); }
        return real;
    }

    void typeMatch(stella_type_t expected, stella_type_t real, stellaParser::ExprContext* ctx) const
    {
        if (type::same_types(expected, real)) { return; }
        if (typeCtx.structuralSubtypingEnabled())
        {
            if (auto const* expectedRecord = dynamic_cast<type::Record const*>(expected))
            {
                if (auto const* realRecord = dynamic_cast<type::Record const*>(real))
                {
                    for (auto const& [label, _] : expectedRecord->itemTs)
                    {
                        if (!realRecord->itemTs.contains(label)) { throw error::ErrorMissingRecordFields{label, expectedRecord, ctx}; }
                    }
                }
            }
        }
        if (type::is_subtype(real, expected, typeCtx.structuralSubtypingEnabled())) { return; }

        if (typeCtx.structuralSubtypingEnabled() || dynamic_cast<type::Top const*>(expected) || dynamic_cast<type::Bottom const*>(real))
        {
            throw error::ErrorUnexpectedSubtype{expected, real, ctx};
        }

        throw error::ErrorUnexpectedTypeForExpr{expected, real, ctx};
    }

    stella_type_t joinOrThrow(stella_type_t lhs, stella_type_t rhs, auto* ctx) const
    {
        if (auto const* joined = type::join_types(lhs, rhs, typeCtx.structuralSubtypingEnabled())) { return static_cast<stella_type_t>(joined); }
        throw error::ErrorUnexpectedSubtype{lhs, rhs, ctx};
    }

    stella_type_t declaredExceptionType() const
    {
        if (typeCtx.hasDeclaredExceptionType()) { return typeCtx.exceptionTypeDecl(); }
        if (auto const* open = typeCtx.openExceptionVariantType()) { return static_cast<stella_type_t>(open); }
        return nullptr;
    }

    void resetExhaustivePatterns(stella_type_t type)
    {
        exhaustivePatterns.clear();
        if (dynamic_cast<type::Bottom const*>(type)) { return; }
        if (dynamic_cast<type::Bool const*>(type))
        {
            exhaustivePatterns.emplace("true");
            exhaustivePatterns.emplace("false");
        }
        else if (auto const* sum = dynamic_cast<type::Sum const*>(type))
        {
            (void)sum;
            exhaustivePatterns.emplace("inl");
            exhaustivePatterns.emplace("inr");
        }
        else if (auto const* variant = dynamic_cast<type::Variant const*>(type))
        {
            for (auto const& [label, _] : variant->itemTs) { exhaustivePatterns.emplace(label); }
        }
    }

    void bindPattern(stellaParser::PatternContext* pattern, stella_type_t expected)
    {
        auto const* previous = matchedType;
        matchedType = expected;
        pattern->accept(this);
        matchedType = previous;
    }
};

}
