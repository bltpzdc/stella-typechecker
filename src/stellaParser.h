
// Generated from stellaParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  stellaParser : public antlr4::Parser {
public:
  enum {
    Surrogate_id_SYMB_0 = 1, Surrogate_id_SYMB_1 = 2, Surrogate_id_SYMB_2 = 3, 
    Surrogate_id_SYMB_3 = 4, Surrogate_id_SYMB_4 = 5, Surrogate_id_SYMB_5 = 6, 
    Surrogate_id_SYMB_6 = 7, Surrogate_id_SYMB_7 = 8, Surrogate_id_SYMB_8 = 9, 
    Surrogate_id_SYMB_9 = 10, Surrogate_id_SYMB_10 = 11, Surrogate_id_SYMB_11 = 12, 
    Surrogate_id_SYMB_12 = 13, Surrogate_id_SYMB_13 = 14, Surrogate_id_SYMB_14 = 15, 
    Surrogate_id_SYMB_15 = 16, Surrogate_id_SYMB_16 = 17, Surrogate_id_SYMB_17 = 18, 
    Surrogate_id_SYMB_18 = 19, Surrogate_id_SYMB_19 = 20, Surrogate_id_SYMB_20 = 21, 
    Surrogate_id_SYMB_21 = 22, Surrogate_id_SYMB_22 = 23, Surrogate_id_SYMB_23 = 24, 
    Surrogate_id_SYMB_24 = 25, Surrogate_id_SYMB_25 = 26, Surrogate_id_SYMB_26 = 27, 
    Surrogate_id_SYMB_27 = 28, Surrogate_id_SYMB_28 = 29, Surrogate_id_SYMB_29 = 30, 
    Surrogate_id_SYMB_30 = 31, Surrogate_id_SYMB_31 = 32, Surrogate_id_SYMB_32 = 33, 
    Surrogate_id_SYMB_33 = 34, Surrogate_id_SYMB_34 = 35, Surrogate_id_SYMB_35 = 36, 
    Surrogate_id_SYMB_36 = 37, Surrogate_id_SYMB_37 = 38, Surrogate_id_SYMB_38 = 39, 
    Surrogate_id_SYMB_39 = 40, Surrogate_id_SYMB_40 = 41, Surrogate_id_SYMB_41 = 42, 
    Surrogate_id_SYMB_42 = 43, Surrogate_id_SYMB_43 = 44, Surrogate_id_SYMB_44 = 45, 
    Surrogate_id_SYMB_45 = 46, Surrogate_id_SYMB_46 = 47, Surrogate_id_SYMB_47 = 48, 
    Surrogate_id_SYMB_48 = 49, Surrogate_id_SYMB_49 = 50, Surrogate_id_SYMB_50 = 51, 
    Surrogate_id_SYMB_51 = 52, Surrogate_id_SYMB_52 = 53, Surrogate_id_SYMB_53 = 54, 
    Surrogate_id_SYMB_54 = 55, Surrogate_id_SYMB_55 = 56, Surrogate_id_SYMB_56 = 57, 
    Surrogate_id_SYMB_57 = 58, Surrogate_id_SYMB_58 = 59, Surrogate_id_SYMB_59 = 60, 
    Surrogate_id_SYMB_60 = 61, Surrogate_id_SYMB_61 = 62, Surrogate_id_SYMB_62 = 63, 
    Surrogate_id_SYMB_63 = 64, Surrogate_id_SYMB_64 = 65, Surrogate_id_SYMB_65 = 66, 
    EXCEPTION = 67, VARIANT = 68, CAST = 69, ASSIGN = 70, REF_TYPE = 71, 
    REFERENCE = 72, PANIC = 73, THROW = 74, TRY = 75, CATCH = 76, TOP_TYPE = 77, 
    BOTTOM_TYPE = 78, AUTO_TYPE = 79, GENERIC = 80, FORALL = 81, COMMENT_antlr_builtin = 82, 
    MULTICOMMENT_antlr_builtin = 83, StellaIdent = 84, ExtensionName = 85, 
    MemoryAddress = 86, INTEGER = 87, WS = 88, ErrorToken = 89
  };

  enum {
    RuleStart_Program = 0, RuleStart_Expr = 1, RuleStart_Type = 2, RuleProgram = 3, 
    RuleLanguageDecl = 4, RuleExtension = 5, RuleDecl = 6, RuleAnnotation = 7, 
    RuleParamDecl = 8, RuleExpr = 9, RulePatternBinding = 10, RuleBinding = 11, 
    RuleMatchCase = 12, RulePattern = 13, RuleLabelledPattern = 14, RuleStellatype = 15, 
    RuleRecordFieldType = 16, RuleVariantFieldType = 17
  };

  explicit stellaParser(antlr4::TokenStream *input);

  stellaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~stellaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Start_ProgramContext;
  class Start_ExprContext;
  class Start_TypeContext;
  class ProgramContext;
  class LanguageDeclContext;
  class ExtensionContext;
  class DeclContext;
  class AnnotationContext;
  class ParamDeclContext;
  class ExprContext;
  class PatternBindingContext;
  class BindingContext;
  class MatchCaseContext;
  class PatternContext;
  class LabelledPatternContext;
  class StellatypeContext;
  class RecordFieldTypeContext;
  class VariantFieldTypeContext; 

  class  Start_ProgramContext : public antlr4::ParserRuleContext {
  public:
    stellaParser::ProgramContext *x = nullptr;
    Start_ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    ProgramContext *program();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_ProgramContext* start_Program();

  class  Start_ExprContext : public antlr4::ParserRuleContext {
  public:
    stellaParser::ExprContext *x = nullptr;
    Start_ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_ExprContext* start_Expr();

  class  Start_TypeContext : public antlr4::ParserRuleContext {
  public:
    stellaParser::StellatypeContext *x = nullptr;
    Start_TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    StellatypeContext *stellatype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_TypeContext* start_Type();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    stellaParser::ExtensionContext *extensionContext = nullptr;
    std::vector<ExtensionContext *> extensions;
    stellaParser::DeclContext *declContext = nullptr;
    std::vector<DeclContext *> decls;
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LanguageDeclContext *languageDecl();
    std::vector<ExtensionContext *> extension();
    ExtensionContext* extension(size_t i);
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  LanguageDeclContext : public antlr4::ParserRuleContext {
  public:
    LanguageDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LanguageDeclContext() = default;
    void copyFrom(LanguageDeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LanguageCoreContext : public LanguageDeclContext {
  public:
    LanguageCoreContext(LanguageDeclContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_50();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_38();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_1();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LanguageDeclContext* languageDecl();

  class  ExtensionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExtensionContext() = default;
    void copyFrom(ExtensionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AnExtensionContext : public ExtensionContext {
  public:
    AnExtensionContext(ExtensionContext *ctx);

    antlr4::Token *extensionnameToken = nullptr;
    std::vector<antlr4::Token *> extensionNames;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_40();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_64();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_1();
    std::vector<antlr4::tree::TerminalNode *> ExtensionName();
    antlr4::tree::TerminalNode* ExtensionName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExtensionContext* extension();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclContext() = default;
    void copyFrom(DeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclTypeAliasContext : public DeclContext {
  public:
    DeclTypeAliasContext(DeclContext *ctx);

    antlr4::Token *name = nullptr;
    stellaParser::StellatypeContext *atype = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_61();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    antlr4::tree::TerminalNode *StellaIdent();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclExceptionTypeContext : public DeclContext {
  public:
    DeclExceptionTypeContext(DeclContext *ctx);

    stellaParser::StellatypeContext *exceptionType = nullptr;
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_61();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclFunContext : public DeclContext {
  public:
    DeclFunContext(DeclContext *ctx);

    stellaParser::AnnotationContext *annotationContext = nullptr;
    std::vector<AnnotationContext *> annotations;
    antlr4::Token *name = nullptr;
    stellaParser::ParamDeclContext *paramDeclContext = nullptr;
    std::vector<ParamDeclContext *> paramDecls;
    stellaParser::StellatypeContext *returnType = nullptr;
    stellaParser::StellatypeContext *stellatypeContext = nullptr;
    std::vector<StellatypeContext *> throwTypes;
    stellaParser::DeclContext *declContext = nullptr;
    std::vector<DeclContext *> localDecls;
    stellaParser::ExprContext *returnExpr = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_43();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_56();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    antlr4::tree::TerminalNode *StellaIdent();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_8();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_59();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ParamDeclContext *> paramDecl();
    ParamDeclContext* paramDecl(size_t i);
    std::vector<StellatypeContext *> stellatype();
    StellatypeContext* stellatype(size_t i);
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclExceptionVariantContext : public DeclContext {
  public:
    DeclExceptionVariantContext(DeclContext *ctx);

    antlr4::Token *name = nullptr;
    stellaParser::StellatypeContext *variantType = nullptr;
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *VARIANT();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_7();
    antlr4::tree::TerminalNode *StellaIdent();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclFunGenericContext : public DeclContext {
  public:
    DeclFunGenericContext(DeclContext *ctx);

    stellaParser::AnnotationContext *annotationContext = nullptr;
    std::vector<AnnotationContext *> annotations;
    antlr4::Token *name = nullptr;
    antlr4::Token *stellaidentToken = nullptr;
    std::vector<antlr4::Token *> generics;
    stellaParser::ParamDeclContext *paramDeclContext = nullptr;
    std::vector<ParamDeclContext *> paramDecls;
    stellaParser::StellatypeContext *returnType = nullptr;
    stellaParser::StellatypeContext *stellatypeContext = nullptr;
    std::vector<StellatypeContext *> throwTypes;
    stellaParser::DeclContext *declContext = nullptr;
    std::vector<DeclContext *> localDecls;
    stellaParser::ExprContext *returnExpr = nullptr;
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_43();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_56();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<antlr4::tree::TerminalNode *> StellaIdent();
    antlr4::tree::TerminalNode* StellaIdent(size_t i);
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_8();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_59();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ParamDeclContext *> paramDecl();
    ParamDeclContext* paramDecl(size_t i);
    std::vector<StellatypeContext *> stellatype();
    StellatypeContext* stellatype(size_t i);
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclContext* decl();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AnnotationContext() = default;
    void copyFrom(AnnotationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InlineAnnotationContext : public AnnotationContext {
  public:
    InlineAnnotationContext(AnnotationContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_48();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AnnotationContext* annotation();

  class  ParamDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    stellaParser::StellatypeContext *paramType = nullptr;
    ParamDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_7();
    antlr4::tree::TerminalNode *StellaIdent();
    StellatypeContext *stellatype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDeclContext* paramDecl();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FoldContext : public ExprContext {
  public:
    FoldContext(ExprContext *ctx);

    stellaParser::StellatypeContext *type_ = nullptr;
    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_44();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    StellatypeContext *stellatype();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddContext : public ExprContext {
  public:
    AddContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_21();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IsZeroContext : public ExprContext {
  public:
    IsZeroContext(ExprContext *ctx);

    stellaParser::ExprContext *n = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_30();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarContext : public ExprContext {
  public:
    VarContext(ExprContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *StellaIdent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeAbstractionContext : public ExprContext {
  public:
    TypeAbstractionContext(ExprContext *ctx);

    antlr4::Token *stellaidentToken = nullptr;
    std::vector<antlr4::Token *> generics;
    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    std::vector<antlr4::tree::TerminalNode *> StellaIdent();
    antlr4::tree::TerminalNode* StellaIdent(size_t i);
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivideContext : public ExprContext {
  public:
    DivideContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_24();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessThanContext : public ExprContext {
  public:
    LessThanContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_15();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DotRecordContext : public ExprContext {
  public:
    DotRecordContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::Token *label = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_25();
    ExprContext *expr();
    antlr4::tree::TerminalNode *StellaIdent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterThanContext : public ExprContext {
  public:
    GreaterThanContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_17();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualContext : public ExprContext {
  public:
    EqualContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_19();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThrowContext : public ExprContext {
  public:
    ThrowContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplyContext : public ExprContext {
  public:
    MultiplyContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_23();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstMemoryContext : public ExprContext {
  public:
    ConstMemoryContext(ExprContext *ctx);

    antlr4::Token *mem = nullptr;
    antlr4::tree::TerminalNode *MemoryAddress();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ListContext : public ExprContext {
  public:
    ListContext(ExprContext *ctx);

    stellaParser::ExprContext *exprContext = nullptr;
    std::vector<ExprContext *> exprs;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TryCatchContext : public ExprContext {
  public:
    TryCatchContext(ExprContext *ctx);

    stellaParser::ExprContext *tryExpr = nullptr;
    stellaParser::PatternContext *pat = nullptr;
    stellaParser::ExprContext *fallbackExpr = nullptr;
    antlr4::tree::TerminalNode *TRY();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_4(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_5();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_5(size_t i);
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_9();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TryCastAsContext : public ExprContext {
  public:
    TryCastAsContext(ExprContext *ctx);

    stellaParser::ExprContext *tryExpr = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    stellaParser::PatternContext *pattern_ = nullptr;
    stellaParser::ExprContext *expr_ = nullptr;
    stellaParser::ExprContext *fallbackExpr = nullptr;
    antlr4::tree::TerminalNode *TRY();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_4(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_5();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_5(size_t i);
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_36();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_9();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_64();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    StellatypeContext *stellatype();
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HeadContext : public ExprContext {
  public:
    HeadContext(ExprContext *ctx);

    stellaParser::ExprContext *list = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_26();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TerminatingSemicolonContext : public ExprContext {
  public:
    TerminatingSemicolonContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_1();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotEqualContext : public ExprContext {
  public:
    NotEqualContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_20();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstUnitContext : public ExprContext {
  public:
    ConstUnitContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_63();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SequenceContext : public ExprContext {
  public:
    SequenceContext(ExprContext *ctx);

    stellaParser::ExprContext *expr1 = nullptr;
    stellaParser::ExprContext *expr2 = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_1();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstFalseContext : public ExprContext {
  public:
    ConstFalseContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_41();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AbstractionContext : public ExprContext {
  public:
    AbstractionContext(ExprContext *ctx);

    stellaParser::ParamDeclContext *paramDeclContext = nullptr;
    std::vector<ParamDeclContext *> paramDecls;
    stellaParser::ExprContext *returnExpr = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_43();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_56();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    ExprContext *expr();
    std::vector<ParamDeclContext *> paramDecl();
    ParamDeclContext* paramDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstIntContext : public ExprContext {
  public:
    ConstIntContext(ExprContext *ctx);

    antlr4::Token *n = nullptr;
    antlr4::tree::TerminalNode *INTEGER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariantContext : public ExprContext {
  public:
    VariantContext(ExprContext *ctx);

    antlr4::Token *label = nullptr;
    stellaParser::ExprContext *rhs = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_11();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_12();
    antlr4::tree::TerminalNode *StellaIdent();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstTrueContext : public ExprContext {
  public:
    ConstTrueContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_60();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubtractContext : public ExprContext {
  public:
    SubtractContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_22();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeCastContext : public ExprContext {
  public:
    TypeCastContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_36();
    ExprContext *expr();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfContext : public ExprContext {
  public:
    IfContext(ExprContext *ctx);

    stellaParser::ExprContext *condition = nullptr;
    stellaParser::ExprContext *thenExpr = nullptr;
    stellaParser::ExprContext *elseExpr = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_45();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_58();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_39();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ApplicationContext : public ExprContext {
  public:
    ApplicationContext(ExprContext *ctx);

    stellaParser::ExprContext *fun = nullptr;
    stellaParser::ExprContext *exprContext = nullptr;
    std::vector<ExprContext *> args;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DerefContext : public ExprContext {
  public:
    DerefContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_23();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IsEmptyContext : public ExprContext {
  public:
    IsEmptyContext(ExprContext *ctx);

    stellaParser::ExprContext *list = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_27();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PanicContext : public ExprContext {
  public:
    PanicContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *PANIC();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessThanOrEqualContext : public ExprContext {
  public:
    LessThanOrEqualContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_16();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SuccContext : public ExprContext {
  public:
    SuccContext(ExprContext *ctx);

    stellaParser::ExprContext *n = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_57();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlContext : public ExprContext {
  public:
    InlContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_47();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterThanOrEqualContext : public ExprContext {
  public:
    GreaterThanOrEqualContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_18();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InrContext : public ExprContext {
  public:
    InrContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_49();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MatchContext : public ExprContext {
  public:
    MatchContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    stellaParser::MatchCaseContext *matchCaseContext = nullptr;
    std::vector<MatchCaseContext *> cases;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_53();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    ExprContext *expr();
    std::vector<MatchCaseContext *> matchCase();
    MatchCaseContext* matchCase(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_10();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_10(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicNotContext : public ExprContext {
  public:
    LogicNotContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_54();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesisedExprContext : public ExprContext {
  public:
    ParenthesisedExprContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TailContext : public ExprContext {
  public:
    TailContext(ExprContext *ctx);

    stellaParser::ExprContext *list = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_28();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RecordContext : public ExprContext {
  public:
    RecordContext(ExprContext *ctx);

    stellaParser::BindingContext *bindingContext = nullptr;
    std::vector<BindingContext *> bindings;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<BindingContext *> binding();
    BindingContext* binding(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicAndContext : public ExprContext {
  public:
    LogicAndContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_35();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeApplicationContext : public ExprContext {
  public:
    TypeApplicationContext(ExprContext *ctx);

    stellaParser::ExprContext *fun = nullptr;
    stellaParser::StellatypeContext *stellatypeContext = nullptr;
    std::vector<StellatypeContext *> types;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    ExprContext *expr();
    std::vector<StellatypeContext *> stellatype();
    StellatypeContext* stellatype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LetRecContext : public ExprContext {
  public:
    LetRecContext(ExprContext *ctx);

    stellaParser::PatternBindingContext *patternBindingContext = nullptr;
    std::vector<PatternBindingContext *> patternBindings;
    stellaParser::ExprContext *body = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_52();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_46();
    std::vector<PatternBindingContext *> patternBinding();
    PatternBindingContext* patternBinding(size_t i);
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicOrContext : public ExprContext {
  public:
    LogicOrContext(ExprContext *ctx);

    stellaParser::ExprContext *left = nullptr;
    stellaParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_55();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TryWithContext : public ExprContext {
  public:
    TryWithContext(ExprContext *ctx);

    stellaParser::ExprContext *tryExpr = nullptr;
    stellaParser::ExprContext *fallbackExpr = nullptr;
    antlr4::tree::TerminalNode *TRY();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_4(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_5();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_5(size_t i);
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_64();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredContext : public ExprContext {
  public:
    PredContext(ExprContext *ctx);

    stellaParser::ExprContext *n = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_29();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeAscContext : public ExprContext {
  public:
    TypeAscContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_36();
    ExprContext *expr();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NatRecContext : public ExprContext {
  public:
    NatRecContext(ExprContext *ctx);

    stellaParser::ExprContext *n = nullptr;
    stellaParser::ExprContext *initial = nullptr;
    stellaParser::ExprContext *step = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_31();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnfoldContext : public ExprContext {
  public:
    UnfoldContext(ExprContext *ctx);

    stellaParser::StellatypeContext *type_ = nullptr;
    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_62();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    StellatypeContext *stellatype();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RefContext : public ExprContext {
  public:
    RefContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DotTupleContext : public ExprContext {
  public:
    DotTupleContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::Token *index = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_25();
    ExprContext *expr();
    antlr4::tree::TerminalNode *INTEGER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FixContext : public ExprContext {
  public:
    FixContext(ExprContext *ctx);

    stellaParser::ExprContext *expr_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_42();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LetContext : public ExprContext {
  public:
    LetContext(ExprContext *ctx);

    stellaParser::PatternBindingContext *patternBindingContext = nullptr;
    std::vector<PatternBindingContext *> patternBindings;
    stellaParser::ExprContext *body = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_51();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_46();
    std::vector<PatternBindingContext *> patternBinding();
    PatternBindingContext* patternBinding(size_t i);
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public ExprContext {
  public:
    AssignContext(ExprContext *ctx);

    stellaParser::ExprContext *lhs = nullptr;
    stellaParser::ExprContext *rhs = nullptr;
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TupleContext : public ExprContext {
  public:
    TupleContext(ExprContext *ctx);

    stellaParser::ExprContext *exprContext = nullptr;
    std::vector<ExprContext *> exprs;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConsListContext : public ExprContext {
  public:
    ConsListContext(ExprContext *ctx);

    stellaParser::ExprContext *head = nullptr;
    stellaParser::ExprContext *tail = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_37();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  PatternBindingContext : public antlr4::ParserRuleContext {
  public:
    stellaParser::PatternContext *pat = nullptr;
    stellaParser::ExprContext *rhs = nullptr;
    PatternBindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    PatternContext *pattern();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternBindingContext* patternBinding();

  class  BindingContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    stellaParser::ExprContext *rhs = nullptr;
    BindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    antlr4::tree::TerminalNode *StellaIdent();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BindingContext* binding();

  class  MatchCaseContext : public antlr4::ParserRuleContext {
  public:
    stellaParser::PatternContext *pattern_ = nullptr;
    stellaParser::ExprContext *expr_ = nullptr;
    MatchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_9();
    PatternContext *pattern();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchCaseContext* matchCase();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PatternContext() = default;
    void copyFrom(PatternContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PatternConsContext : public PatternContext {
  public:
    PatternConsContext(PatternContext *ctx);

    stellaParser::PatternContext *head = nullptr;
    stellaParser::PatternContext *tail = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_37();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternTupleContext : public PatternContext {
  public:
    PatternTupleContext(PatternContext *ctx);

    stellaParser::PatternContext *patternContext = nullptr;
    std::vector<PatternContext *> patterns;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternListContext : public PatternContext {
  public:
    PatternListContext(PatternContext *ctx);

    stellaParser::PatternContext *patternContext = nullptr;
    std::vector<PatternContext *> patterns;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternRecordContext : public PatternContext {
  public:
    PatternRecordContext(PatternContext *ctx);

    stellaParser::LabelledPatternContext *labelledPatternContext = nullptr;
    std::vector<LabelledPatternContext *> patterns;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<LabelledPatternContext *> labelledPattern();
    LabelledPatternContext* labelledPattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternVariantContext : public PatternContext {
  public:
    PatternVariantContext(PatternContext *ctx);

    antlr4::Token *label = nullptr;
    stellaParser::PatternContext *pattern_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_11();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_12();
    antlr4::tree::TerminalNode *StellaIdent();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternAscContext : public PatternContext {
  public:
    PatternAscContext(PatternContext *ctx);

    stellaParser::PatternContext *pattern_ = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_36();
    PatternContext *pattern();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternIntContext : public PatternContext {
  public:
    PatternIntContext(PatternContext *ctx);

    antlr4::Token *n = nullptr;
    antlr4::tree::TerminalNode *INTEGER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternInrContext : public PatternContext {
  public:
    PatternInrContext(PatternContext *ctx);

    stellaParser::PatternContext *pattern_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_49();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternTrueContext : public PatternContext {
  public:
    PatternTrueContext(PatternContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_60();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternInlContext : public PatternContext {
  public:
    PatternInlContext(PatternContext *ctx);

    stellaParser::PatternContext *pattern_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_47();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternVarContext : public PatternContext {
  public:
    PatternVarContext(PatternContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *StellaIdent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesisedPatternContext : public PatternContext {
  public:
    ParenthesisedPatternContext(PatternContext *ctx);

    stellaParser::PatternContext *pattern_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternSuccContext : public PatternContext {
  public:
    PatternSuccContext(PatternContext *ctx);

    stellaParser::PatternContext *pattern_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_57();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    PatternContext *pattern();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternFalseContext : public PatternContext {
  public:
    PatternFalseContext(PatternContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_41();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternUnitContext : public PatternContext {
  public:
    PatternUnitContext(PatternContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_63();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PatternCastAsContext : public PatternContext {
  public:
    PatternCastAsContext(PatternContext *ctx);

    stellaParser::PatternContext *pattern_ = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_36();
    PatternContext *pattern();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PatternContext* pattern();
  PatternContext* pattern(int precedence);
  class  LabelledPatternContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *label = nullptr;
    stellaParser::PatternContext *pattern_ = nullptr;
    LabelledPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_6();
    antlr4::tree::TerminalNode *StellaIdent();
    PatternContext *pattern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelledPatternContext* labelledPattern();

  class  StellatypeContext : public antlr4::ParserRuleContext {
  public:
    StellatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StellatypeContext() = default;
    void copyFrom(StellatypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeTupleContext : public StellatypeContext {
  public:
    TypeTupleContext(StellatypeContext *ctx);

    stellaParser::StellatypeContext *stellatypeContext = nullptr;
    std::vector<StellatypeContext *> types;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<StellatypeContext *> stellatype();
    StellatypeContext* stellatype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeTopContext : public StellatypeContext {
  public:
    TypeTopContext(StellatypeContext *ctx);

    antlr4::tree::TerminalNode *TOP_TYPE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeBoolContext : public StellatypeContext {
  public:
    TypeBoolContext(StellatypeContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_32();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeRefContext : public StellatypeContext {
  public:
    TypeRefContext(StellatypeContext *ctx);

    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *REF_TYPE();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeRecContext : public StellatypeContext {
  public:
    TypeRecContext(StellatypeContext *ctx);

    antlr4::Token *var = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_65();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_25();
    antlr4::tree::TerminalNode *StellaIdent();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeAutoContext : public StellatypeContext {
  public:
    TypeAutoContext(StellatypeContext *ctx);

    antlr4::tree::TerminalNode *AUTO_TYPE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeSumContext : public StellatypeContext {
  public:
    TypeSumContext(StellatypeContext *ctx);

    stellaParser::StellatypeContext *left = nullptr;
    stellaParser::StellatypeContext *right = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_21();
    std::vector<StellatypeContext *> stellatype();
    StellatypeContext* stellatype(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeVarContext : public StellatypeContext {
  public:
    TypeVarContext(StellatypeContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *StellaIdent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeVariantContext : public StellatypeContext {
  public:
    TypeVariantContext(StellatypeContext *ctx);

    stellaParser::VariantFieldTypeContext *variantFieldTypeContext = nullptr;
    std::vector<VariantFieldTypeContext *> fieldTypes;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_11();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_12();
    std::vector<VariantFieldTypeContext *> variantFieldType();
    VariantFieldTypeContext* variantFieldType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeUnitContext : public StellatypeContext {
  public:
    TypeUnitContext(StellatypeContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_34();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeNatContext : public StellatypeContext {
  public:
    TypeNatContext(StellatypeContext *ctx);

    antlr4::tree::TerminalNode *Surrogate_id_SYMB_33();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeBottomContext : public StellatypeContext {
  public:
    TypeBottomContext(StellatypeContext *ctx);

    antlr4::tree::TerminalNode *BOTTOM_TYPE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeParensContext : public StellatypeContext {
  public:
    TypeParensContext(StellatypeContext *ctx);

    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeFunContext : public StellatypeContext {
  public:
    TypeFunContext(StellatypeContext *ctx);

    stellaParser::StellatypeContext *stellatypeContext = nullptr;
    std::vector<StellatypeContext *> paramTypes;
    stellaParser::StellatypeContext *returnType = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_43();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_2();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_3();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_8();
    std::vector<StellatypeContext *> stellatype();
    StellatypeContext* stellatype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeForAllContext : public StellatypeContext {
  public:
    TypeForAllContext(StellatypeContext *ctx);

    antlr4::Token *stellaidentToken = nullptr;
    std::vector<antlr4::Token *> types;
    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_25();
    StellatypeContext *stellatype();
    std::vector<antlr4::tree::TerminalNode *> StellaIdent();
    antlr4::tree::TerminalNode* StellaIdent(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeRecordContext : public StellatypeContext {
  public:
    TypeRecordContext(StellatypeContext *ctx);

    stellaParser::RecordFieldTypeContext *recordFieldTypeContext = nullptr;
    std::vector<RecordFieldTypeContext *> fieldTypes;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_4();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_5();
    std::vector<RecordFieldTypeContext *> recordFieldType();
    RecordFieldTypeContext* recordFieldType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Surrogate_id_SYMB_0();
    antlr4::tree::TerminalNode* Surrogate_id_SYMB_0(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeListContext : public StellatypeContext {
  public:
    TypeListContext(StellatypeContext *ctx);

    stellaParser::StellatypeContext *type_ = nullptr;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_13();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_14();
    StellatypeContext *stellatype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StellatypeContext* stellatype();
  StellatypeContext* stellatype(int precedence);
  class  RecordFieldTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *label = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    RecordFieldTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_7();
    antlr4::tree::TerminalNode *StellaIdent();
    StellatypeContext *stellatype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordFieldTypeContext* recordFieldType();

  class  VariantFieldTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *label = nullptr;
    stellaParser::StellatypeContext *type_ = nullptr;
    VariantFieldTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StellaIdent();
    antlr4::tree::TerminalNode *Surrogate_id_SYMB_7();
    StellatypeContext *stellatype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariantFieldTypeContext* variantFieldType();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool patternSempred(PatternContext *_localctx, size_t predicateIndex);
  bool stellatypeSempred(StellatypeContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

