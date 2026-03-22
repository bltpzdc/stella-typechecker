
// Generated from stellaParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "stellaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by stellaParser.
 */
class  stellaParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by stellaParser.
   */
    virtual std::any visitStart_Program(stellaParser::Start_ProgramContext *context) = 0;

    virtual std::any visitStart_Expr(stellaParser::Start_ExprContext *context) = 0;

    virtual std::any visitStart_Type(stellaParser::Start_TypeContext *context) = 0;

    virtual std::any visitProgram(stellaParser::ProgramContext *context) = 0;

    virtual std::any visitLanguageCore(stellaParser::LanguageCoreContext *context) = 0;

    virtual std::any visitAnExtension(stellaParser::AnExtensionContext *context) = 0;

    virtual std::any visitDeclFun(stellaParser::DeclFunContext *context) = 0;

    virtual std::any visitDeclFunGeneric(stellaParser::DeclFunGenericContext *context) = 0;

    virtual std::any visitDeclTypeAlias(stellaParser::DeclTypeAliasContext *context) = 0;

    virtual std::any visitDeclExceptionType(stellaParser::DeclExceptionTypeContext *context) = 0;

    virtual std::any visitDeclExceptionVariant(stellaParser::DeclExceptionVariantContext *context) = 0;

    virtual std::any visitInlineAnnotation(stellaParser::InlineAnnotationContext *context) = 0;

    virtual std::any visitParamDecl(stellaParser::ParamDeclContext *context) = 0;

    virtual std::any visitFold(stellaParser::FoldContext *context) = 0;

    virtual std::any visitAdd(stellaParser::AddContext *context) = 0;

    virtual std::any visitIsZero(stellaParser::IsZeroContext *context) = 0;

    virtual std::any visitVar(stellaParser::VarContext *context) = 0;

    virtual std::any visitTypeAbstraction(stellaParser::TypeAbstractionContext *context) = 0;

    virtual std::any visitDivide(stellaParser::DivideContext *context) = 0;

    virtual std::any visitLessThan(stellaParser::LessThanContext *context) = 0;

    virtual std::any visitDotRecord(stellaParser::DotRecordContext *context) = 0;

    virtual std::any visitGreaterThan(stellaParser::GreaterThanContext *context) = 0;

    virtual std::any visitEqual(stellaParser::EqualContext *context) = 0;

    virtual std::any visitThrow(stellaParser::ThrowContext *context) = 0;

    virtual std::any visitMultiply(stellaParser::MultiplyContext *context) = 0;

    virtual std::any visitConstMemory(stellaParser::ConstMemoryContext *context) = 0;

    virtual std::any visitList(stellaParser::ListContext *context) = 0;

    virtual std::any visitTryCatch(stellaParser::TryCatchContext *context) = 0;

    virtual std::any visitTryCastAs(stellaParser::TryCastAsContext *context) = 0;

    virtual std::any visitHead(stellaParser::HeadContext *context) = 0;

    virtual std::any visitTerminatingSemicolon(stellaParser::TerminatingSemicolonContext *context) = 0;

    virtual std::any visitNotEqual(stellaParser::NotEqualContext *context) = 0;

    virtual std::any visitConstUnit(stellaParser::ConstUnitContext *context) = 0;

    virtual std::any visitSequence(stellaParser::SequenceContext *context) = 0;

    virtual std::any visitConstFalse(stellaParser::ConstFalseContext *context) = 0;

    virtual std::any visitAbstraction(stellaParser::AbstractionContext *context) = 0;

    virtual std::any visitConstInt(stellaParser::ConstIntContext *context) = 0;

    virtual std::any visitVariant(stellaParser::VariantContext *context) = 0;

    virtual std::any visitConstTrue(stellaParser::ConstTrueContext *context) = 0;

    virtual std::any visitSubtract(stellaParser::SubtractContext *context) = 0;

    virtual std::any visitTypeCast(stellaParser::TypeCastContext *context) = 0;

    virtual std::any visitIf(stellaParser::IfContext *context) = 0;

    virtual std::any visitApplication(stellaParser::ApplicationContext *context) = 0;

    virtual std::any visitDeref(stellaParser::DerefContext *context) = 0;

    virtual std::any visitIsEmpty(stellaParser::IsEmptyContext *context) = 0;

    virtual std::any visitPanic(stellaParser::PanicContext *context) = 0;

    virtual std::any visitLessThanOrEqual(stellaParser::LessThanOrEqualContext *context) = 0;

    virtual std::any visitSucc(stellaParser::SuccContext *context) = 0;

    virtual std::any visitInl(stellaParser::InlContext *context) = 0;

    virtual std::any visitGreaterThanOrEqual(stellaParser::GreaterThanOrEqualContext *context) = 0;

    virtual std::any visitInr(stellaParser::InrContext *context) = 0;

    virtual std::any visitMatch(stellaParser::MatchContext *context) = 0;

    virtual std::any visitLogicNot(stellaParser::LogicNotContext *context) = 0;

    virtual std::any visitParenthesisedExpr(stellaParser::ParenthesisedExprContext *context) = 0;

    virtual std::any visitTail(stellaParser::TailContext *context) = 0;

    virtual std::any visitRecord(stellaParser::RecordContext *context) = 0;

    virtual std::any visitLogicAnd(stellaParser::LogicAndContext *context) = 0;

    virtual std::any visitTypeApplication(stellaParser::TypeApplicationContext *context) = 0;

    virtual std::any visitLetRec(stellaParser::LetRecContext *context) = 0;

    virtual std::any visitLogicOr(stellaParser::LogicOrContext *context) = 0;

    virtual std::any visitTryWith(stellaParser::TryWithContext *context) = 0;

    virtual std::any visitPred(stellaParser::PredContext *context) = 0;

    virtual std::any visitTypeAsc(stellaParser::TypeAscContext *context) = 0;

    virtual std::any visitNatRec(stellaParser::NatRecContext *context) = 0;

    virtual std::any visitUnfold(stellaParser::UnfoldContext *context) = 0;

    virtual std::any visitRef(stellaParser::RefContext *context) = 0;

    virtual std::any visitDotTuple(stellaParser::DotTupleContext *context) = 0;

    virtual std::any visitFix(stellaParser::FixContext *context) = 0;

    virtual std::any visitLet(stellaParser::LetContext *context) = 0;

    virtual std::any visitAssign(stellaParser::AssignContext *context) = 0;

    virtual std::any visitTuple(stellaParser::TupleContext *context) = 0;

    virtual std::any visitConsList(stellaParser::ConsListContext *context) = 0;

    virtual std::any visitPatternBinding(stellaParser::PatternBindingContext *context) = 0;

    virtual std::any visitBinding(stellaParser::BindingContext *context) = 0;

    virtual std::any visitMatchCase(stellaParser::MatchCaseContext *context) = 0;

    virtual std::any visitPatternCons(stellaParser::PatternConsContext *context) = 0;

    virtual std::any visitPatternTuple(stellaParser::PatternTupleContext *context) = 0;

    virtual std::any visitPatternList(stellaParser::PatternListContext *context) = 0;

    virtual std::any visitPatternRecord(stellaParser::PatternRecordContext *context) = 0;

    virtual std::any visitPatternVariant(stellaParser::PatternVariantContext *context) = 0;

    virtual std::any visitPatternAsc(stellaParser::PatternAscContext *context) = 0;

    virtual std::any visitPatternInt(stellaParser::PatternIntContext *context) = 0;

    virtual std::any visitPatternInr(stellaParser::PatternInrContext *context) = 0;

    virtual std::any visitPatternTrue(stellaParser::PatternTrueContext *context) = 0;

    virtual std::any visitPatternInl(stellaParser::PatternInlContext *context) = 0;

    virtual std::any visitPatternVar(stellaParser::PatternVarContext *context) = 0;

    virtual std::any visitParenthesisedPattern(stellaParser::ParenthesisedPatternContext *context) = 0;

    virtual std::any visitPatternSucc(stellaParser::PatternSuccContext *context) = 0;

    virtual std::any visitPatternFalse(stellaParser::PatternFalseContext *context) = 0;

    virtual std::any visitPatternUnit(stellaParser::PatternUnitContext *context) = 0;

    virtual std::any visitPatternCastAs(stellaParser::PatternCastAsContext *context) = 0;

    virtual std::any visitLabelledPattern(stellaParser::LabelledPatternContext *context) = 0;

    virtual std::any visitTypeTuple(stellaParser::TypeTupleContext *context) = 0;

    virtual std::any visitTypeTop(stellaParser::TypeTopContext *context) = 0;

    virtual std::any visitTypeBool(stellaParser::TypeBoolContext *context) = 0;

    virtual std::any visitTypeRef(stellaParser::TypeRefContext *context) = 0;

    virtual std::any visitTypeRec(stellaParser::TypeRecContext *context) = 0;

    virtual std::any visitTypeAuto(stellaParser::TypeAutoContext *context) = 0;

    virtual std::any visitTypeSum(stellaParser::TypeSumContext *context) = 0;

    virtual std::any visitTypeVar(stellaParser::TypeVarContext *context) = 0;

    virtual std::any visitTypeVariant(stellaParser::TypeVariantContext *context) = 0;

    virtual std::any visitTypeUnit(stellaParser::TypeUnitContext *context) = 0;

    virtual std::any visitTypeNat(stellaParser::TypeNatContext *context) = 0;

    virtual std::any visitTypeBottom(stellaParser::TypeBottomContext *context) = 0;

    virtual std::any visitTypeParens(stellaParser::TypeParensContext *context) = 0;

    virtual std::any visitTypeFun(stellaParser::TypeFunContext *context) = 0;

    virtual std::any visitTypeForAll(stellaParser::TypeForAllContext *context) = 0;

    virtual std::any visitTypeRecord(stellaParser::TypeRecordContext *context) = 0;

    virtual std::any visitTypeList(stellaParser::TypeListContext *context) = 0;

    virtual std::any visitRecordFieldType(stellaParser::RecordFieldTypeContext *context) = 0;

    virtual std::any visitVariantFieldType(stellaParser::VariantFieldTypeContext *context) = 0;


};

