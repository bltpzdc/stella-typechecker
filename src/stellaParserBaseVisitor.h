
// Generated from stellaParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "stellaParserVisitor.h"


/**
 * This class provides an empty implementation of stellaParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  stellaParserBaseVisitor : public stellaParserVisitor {
public:

  virtual std::any visitStart_Program(stellaParser::Start_ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStart_Expr(stellaParser::Start_ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStart_Type(stellaParser::Start_TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram(stellaParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLanguageCore(stellaParser::LanguageCoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnExtension(stellaParser::AnExtensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclFun(stellaParser::DeclFunContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclFunGeneric(stellaParser::DeclFunGenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclTypeAlias(stellaParser::DeclTypeAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclExceptionType(stellaParser::DeclExceptionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclExceptionVariant(stellaParser::DeclExceptionVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineAnnotation(stellaParser::InlineAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamDecl(stellaParser::ParamDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFold(stellaParser::FoldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(stellaParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsZero(stellaParser::IsZeroContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar(stellaParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeAbstraction(stellaParser::TypeAbstractionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivide(stellaParser::DivideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLessThan(stellaParser::LessThanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDotRecord(stellaParser::DotRecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGreaterThan(stellaParser::GreaterThanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqual(stellaParser::EqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow(stellaParser::ThrowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiply(stellaParser::MultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstMemory(stellaParser::ConstMemoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList(stellaParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryCatch(stellaParser::TryCatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryCastAs(stellaParser::TryCastAsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHead(stellaParser::HeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerminatingSemicolon(stellaParser::TerminatingSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotEqual(stellaParser::NotEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstUnit(stellaParser::ConstUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence(stellaParser::SequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstFalse(stellaParser::ConstFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstraction(stellaParser::AbstractionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstInt(stellaParser::ConstIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariant(stellaParser::VariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstTrue(stellaParser::ConstTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtract(stellaParser::SubtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeCast(stellaParser::TypeCastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(stellaParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitApplication(stellaParser::ApplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeref(stellaParser::DerefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsEmpty(stellaParser::IsEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPanic(stellaParser::PanicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLessThanOrEqual(stellaParser::LessThanOrEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSucc(stellaParser::SuccContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInl(stellaParser::InlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGreaterThanOrEqual(stellaParser::GreaterThanOrEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInr(stellaParser::InrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatch(stellaParser::MatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicNot(stellaParser::LogicNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesisedExpr(stellaParser::ParenthesisedExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTail(stellaParser::TailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecord(stellaParser::RecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicAnd(stellaParser::LogicAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeApplication(stellaParser::TypeApplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLetRec(stellaParser::LetRecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicOr(stellaParser::LogicOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryWith(stellaParser::TryWithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPred(stellaParser::PredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeAsc(stellaParser::TypeAscContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNatRec(stellaParser::NatRecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnfold(stellaParser::UnfoldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRef(stellaParser::RefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDotTuple(stellaParser::DotTupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFix(stellaParser::FixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLet(stellaParser::LetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(stellaParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple(stellaParser::TupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConsList(stellaParser::ConsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternBinding(stellaParser::PatternBindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinding(stellaParser::BindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchCase(stellaParser::MatchCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternCons(stellaParser::PatternConsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternTuple(stellaParser::PatternTupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternList(stellaParser::PatternListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternRecord(stellaParser::PatternRecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternVariant(stellaParser::PatternVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternAsc(stellaParser::PatternAscContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternInt(stellaParser::PatternIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternInr(stellaParser::PatternInrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternTrue(stellaParser::PatternTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternInl(stellaParser::PatternInlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternVar(stellaParser::PatternVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesisedPattern(stellaParser::ParenthesisedPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternSucc(stellaParser::PatternSuccContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternFalse(stellaParser::PatternFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternUnit(stellaParser::PatternUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternCastAs(stellaParser::PatternCastAsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabelledPattern(stellaParser::LabelledPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeTuple(stellaParser::TypeTupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeTop(stellaParser::TypeTopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeBool(stellaParser::TypeBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeRef(stellaParser::TypeRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeRec(stellaParser::TypeRecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeAuto(stellaParser::TypeAutoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSum(stellaParser::TypeSumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeVar(stellaParser::TypeVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeVariant(stellaParser::TypeVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeUnit(stellaParser::TypeUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeNat(stellaParser::TypeNatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeBottom(stellaParser::TypeBottomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParens(stellaParser::TypeParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeFun(stellaParser::TypeFunContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeForAll(stellaParser::TypeForAllContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeRecord(stellaParser::TypeRecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeList(stellaParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordFieldType(stellaParser::RecordFieldTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariantFieldType(stellaParser::VariantFieldTypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

