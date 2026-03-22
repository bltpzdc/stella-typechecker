
// Generated from stellaParser.g4 by ANTLR 4.13.1


#include "stellaParserVisitor.h"

#include "stellaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct StellaParserStaticData final {
  StellaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  StellaParserStaticData(const StellaParserStaticData&) = delete;
  StellaParserStaticData(StellaParserStaticData&&) = delete;
  StellaParserStaticData& operator=(const StellaParserStaticData&) = delete;
  StellaParserStaticData& operator=(StellaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag stellaparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
StellaParserStaticData *stellaparserParserStaticData = nullptr;

void stellaparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (stellaparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(stellaparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<StellaParserStaticData>(
    std::vector<std::string>{
      "start_Program", "start_Expr", "start_Type", "program", "languageDecl", 
      "extension", "decl", "annotation", "paramDecl", "expr", "patternBinding", 
      "binding", "matchCase", "pattern", "labelledPattern", "stellatype", 
      "recordFieldType", "variantFieldType"
    },
    std::vector<std::string>{
      "", "','", "';'", "'('", "')'", "'{'", "'}'", "'='", "':'", "'->'", 
      "'=>'", "'|'", "'<|'", "'|>'", "'['", "']'", "'<'", "'<='", "'>'", 
      "'>='", "'=='", "'!='", "'+'", "'-'", "'*'", "'/'", "'.'", "'List::head'", 
      "'List::isempty'", "'List::tail'", "'Nat::pred'", "'Nat::iszero'", 
      "'Nat::rec'", "'Bool'", "'Nat'", "'Unit'", "'and'", "'as'", "'cons'", 
      "'core'", "'else'", "'extend'", "'false'", "'fix'", "'fn'", "'fold'", 
      "'if'", "'in'", "'inl'", "'inline'", "'inr'", "'language'", "'let'", 
      "'letrec'", "'match'", "'not'", "'or'", "'return'", "'succ'", "'then'", 
      "'throws'", "'true'", "'type'", "'unfold'", "'unit'", "'with'", "'\\u00B5'", 
      "'exception'", "'variant'", "'cast'", "':='", "'&'", "'new'", "'panic!'", 
      "'throw'", "'try'", "'catch'", "'Top'", "'Bot'", "'auto'", "'generic'", 
      "'forall'"
    },
    std::vector<std::string>{
      "", "Surrogate_id_SYMB_0", "Surrogate_id_SYMB_1", "Surrogate_id_SYMB_2", 
      "Surrogate_id_SYMB_3", "Surrogate_id_SYMB_4", "Surrogate_id_SYMB_5", 
      "Surrogate_id_SYMB_6", "Surrogate_id_SYMB_7", "Surrogate_id_SYMB_8", 
      "Surrogate_id_SYMB_9", "Surrogate_id_SYMB_10", "Surrogate_id_SYMB_11", 
      "Surrogate_id_SYMB_12", "Surrogate_id_SYMB_13", "Surrogate_id_SYMB_14", 
      "Surrogate_id_SYMB_15", "Surrogate_id_SYMB_16", "Surrogate_id_SYMB_17", 
      "Surrogate_id_SYMB_18", "Surrogate_id_SYMB_19", "Surrogate_id_SYMB_20", 
      "Surrogate_id_SYMB_21", "Surrogate_id_SYMB_22", "Surrogate_id_SYMB_23", 
      "Surrogate_id_SYMB_24", "Surrogate_id_SYMB_25", "Surrogate_id_SYMB_26", 
      "Surrogate_id_SYMB_27", "Surrogate_id_SYMB_28", "Surrogate_id_SYMB_29", 
      "Surrogate_id_SYMB_30", "Surrogate_id_SYMB_31", "Surrogate_id_SYMB_32", 
      "Surrogate_id_SYMB_33", "Surrogate_id_SYMB_34", "Surrogate_id_SYMB_35", 
      "Surrogate_id_SYMB_36", "Surrogate_id_SYMB_37", "Surrogate_id_SYMB_38", 
      "Surrogate_id_SYMB_39", "Surrogate_id_SYMB_40", "Surrogate_id_SYMB_41", 
      "Surrogate_id_SYMB_42", "Surrogate_id_SYMB_43", "Surrogate_id_SYMB_44", 
      "Surrogate_id_SYMB_45", "Surrogate_id_SYMB_46", "Surrogate_id_SYMB_47", 
      "Surrogate_id_SYMB_48", "Surrogate_id_SYMB_49", "Surrogate_id_SYMB_50", 
      "Surrogate_id_SYMB_51", "Surrogate_id_SYMB_52", "Surrogate_id_SYMB_53", 
      "Surrogate_id_SYMB_54", "Surrogate_id_SYMB_55", "Surrogate_id_SYMB_56", 
      "Surrogate_id_SYMB_57", "Surrogate_id_SYMB_58", "Surrogate_id_SYMB_59", 
      "Surrogate_id_SYMB_60", "Surrogate_id_SYMB_61", "Surrogate_id_SYMB_62", 
      "Surrogate_id_SYMB_63", "Surrogate_id_SYMB_64", "Surrogate_id_SYMB_65", 
      "EXCEPTION", "VARIANT", "CAST", "ASSIGN", "REF_TYPE", "REFERENCE", 
      "PANIC", "THROW", "TRY", "CATCH", "TOP_TYPE", "BOTTOM_TYPE", "AUTO_TYPE", 
      "GENERIC", "FORALL", "COMMENT_antlr_builtin", "MULTICOMMENT_antlr_builtin", 
      "StellaIdent", "ExtensionName", "MemoryAddress", "INTEGER", "WS", 
      "ErrorToken"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,89,750,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,3,1,3,5,3,48,8,3,10,3,12,3,51,9,3,1,3,5,3,54,8,3,10,3,12,3,57,9,3,1,
  	4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,5,5,68,8,5,10,5,12,5,71,9,5,1,5,1,5,
  	1,6,5,6,76,8,6,10,6,12,6,79,9,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,87,8,6,10,
  	6,12,6,90,9,6,3,6,92,8,6,1,6,1,6,1,6,3,6,97,8,6,1,6,1,6,1,6,1,6,5,6,103,
  	8,6,10,6,12,6,106,9,6,3,6,108,8,6,1,6,1,6,5,6,112,8,6,10,6,12,6,115,9,
  	6,1,6,1,6,1,6,1,6,1,6,5,6,122,8,6,10,6,12,6,125,9,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,5,6,134,8,6,10,6,12,6,137,9,6,1,6,1,6,1,6,1,6,1,6,5,6,144,8,
  	6,10,6,12,6,147,9,6,3,6,149,8,6,1,6,1,6,1,6,3,6,154,8,6,1,6,1,6,1,6,1,
  	6,5,6,160,8,6,10,6,12,6,163,9,6,3,6,165,8,6,1,6,1,6,5,6,169,8,6,10,6,
  	12,6,172,9,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,3,6,191,8,6,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,339,8,9,10,9,12,9,
  	342,9,9,3,9,344,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,356,8,
  	9,10,9,12,9,359,9,9,3,9,361,8,9,1,9,1,9,1,9,1,9,1,9,5,9,368,8,9,10,9,
  	12,9,371,9,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,379,8,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,5,9,388,8,9,10,9,12,9,391,9,9,3,9,393,8,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,5,9,401,8,9,10,9,12,9,404,9,9,3,9,406,8,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,5,9,420,8,9,10,9,12,9,423,9,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,5,9,432,8,9,10,9,12,9,435,9,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,5,9,445,8,9,10,9,12,9,448,9,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,456,8,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,5,9,511,8,9,10,9,12,9,514,9,9,3,9,516,8,9,1,9,1,9,1,9,1,9,1,9,1,9,5,
  	9,524,8,9,10,9,12,9,527,9,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,5,9,540,8,9,10,9,12,9,543,9,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,3,13,562,8,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,5,
  	13,579,8,13,10,13,12,13,582,9,13,3,13,584,8,13,1,13,1,13,1,13,1,13,1,
  	13,5,13,591,8,13,10,13,12,13,594,9,13,3,13,596,8,13,1,13,1,13,1,13,1,
  	13,1,13,5,13,603,8,13,10,13,12,13,606,9,13,3,13,608,8,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,3,13,632,8,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,5,13,641,8,13,10,13,12,13,644,9,13,1,14,1,14,1,14,1,14,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,660,8,15,10,15,12,15,
  	663,9,15,3,15,665,8,15,1,15,1,15,1,15,1,15,1,15,5,15,672,8,15,10,15,12,
  	15,675,9,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,687,
  	8,15,10,15,12,15,690,9,15,3,15,692,8,15,1,15,1,15,1,15,1,15,1,15,5,15,
  	699,8,15,10,15,12,15,702,9,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,710,
  	8,15,10,15,12,15,713,9,15,3,15,715,8,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,731,8,15,1,15,1,15,1,15,
  	5,15,736,8,15,10,15,12,15,739,9,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,
  	3,17,748,8,17,1,17,0,3,18,26,30,18,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,0,0,874,0,36,1,0,0,0,2,39,1,0,0,0,4,42,1,0,0,0,6,45,1,
  	0,0,0,8,58,1,0,0,0,10,62,1,0,0,0,12,190,1,0,0,0,14,192,1,0,0,0,16,194,
  	1,0,0,0,18,455,1,0,0,0,20,544,1,0,0,0,22,548,1,0,0,0,24,552,1,0,0,0,26,
  	631,1,0,0,0,28,645,1,0,0,0,30,730,1,0,0,0,32,740,1,0,0,0,34,744,1,0,0,
  	0,36,37,3,6,3,0,37,38,5,0,0,1,38,1,1,0,0,0,39,40,3,18,9,0,40,41,5,0,0,
  	1,41,3,1,0,0,0,42,43,3,30,15,0,43,44,5,0,0,1,44,5,1,0,0,0,45,49,3,8,4,
  	0,46,48,3,10,5,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,
  	0,0,50,55,1,0,0,0,51,49,1,0,0,0,52,54,3,12,6,0,53,52,1,0,0,0,54,57,1,
  	0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,7,1,0,0,0,57,55,1,0,0,0,58,59,5,
  	51,0,0,59,60,5,39,0,0,60,61,5,2,0,0,61,9,1,0,0,0,62,63,5,41,0,0,63,64,
  	5,65,0,0,64,69,5,85,0,0,65,66,5,1,0,0,66,68,5,85,0,0,67,65,1,0,0,0,68,
  	71,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,72,1,0,0,0,71,69,1,0,0,0,72,
  	73,5,2,0,0,73,11,1,0,0,0,74,76,3,14,7,0,75,74,1,0,0,0,76,79,1,0,0,0,77,
  	75,1,0,0,0,77,78,1,0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,81,5,44,0,0,81,
  	82,5,84,0,0,82,91,5,3,0,0,83,88,3,16,8,0,84,85,5,1,0,0,85,87,3,16,8,0,
  	86,84,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,92,1,0,0,0,
  	90,88,1,0,0,0,91,83,1,0,0,0,91,92,1,0,0,0,92,93,1,0,0,0,93,96,5,4,0,0,
  	94,95,5,9,0,0,95,97,3,30,15,0,96,94,1,0,0,0,96,97,1,0,0,0,97,107,1,0,
  	0,0,98,99,5,60,0,0,99,104,3,30,15,0,100,101,5,1,0,0,101,103,3,30,15,0,
  	102,100,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,108,
  	1,0,0,0,106,104,1,0,0,0,107,98,1,0,0,0,107,108,1,0,0,0,108,109,1,0,0,
  	0,109,113,5,5,0,0,110,112,3,12,6,0,111,110,1,0,0,0,112,115,1,0,0,0,113,
  	111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,0,115,113,1,0,0,0,116,117,5,
  	57,0,0,117,118,3,18,9,0,118,119,5,6,0,0,119,191,1,0,0,0,120,122,3,14,
  	7,0,121,120,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,
  	126,1,0,0,0,125,123,1,0,0,0,126,127,5,80,0,0,127,128,5,44,0,0,128,129,
  	5,84,0,0,129,130,5,14,0,0,130,135,5,84,0,0,131,132,5,1,0,0,132,134,5,
  	84,0,0,133,131,1,0,0,0,134,137,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,
  	0,136,138,1,0,0,0,137,135,1,0,0,0,138,139,5,15,0,0,139,148,5,3,0,0,140,
  	145,3,16,8,0,141,142,5,1,0,0,142,144,3,16,8,0,143,141,1,0,0,0,144,147,
  	1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,
  	0,148,140,1,0,0,0,148,149,1,0,0,0,149,150,1,0,0,0,150,153,5,4,0,0,151,
  	152,5,9,0,0,152,154,3,30,15,0,153,151,1,0,0,0,153,154,1,0,0,0,154,164,
  	1,0,0,0,155,156,5,60,0,0,156,161,3,30,15,0,157,158,5,1,0,0,158,160,3,
  	30,15,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,161,162,1,0,0,
  	0,162,165,1,0,0,0,163,161,1,0,0,0,164,155,1,0,0,0,164,165,1,0,0,0,165,
  	166,1,0,0,0,166,170,5,5,0,0,167,169,3,12,6,0,168,167,1,0,0,0,169,172,
  	1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,172,170,1,0,0,
  	0,173,174,5,57,0,0,174,175,3,18,9,0,175,176,5,6,0,0,176,191,1,0,0,0,177,
  	178,5,62,0,0,178,179,5,84,0,0,179,180,5,7,0,0,180,191,3,30,15,0,181,182,
  	5,67,0,0,182,183,5,62,0,0,183,184,5,7,0,0,184,191,3,30,15,0,185,186,5,
  	67,0,0,186,187,5,68,0,0,187,188,5,84,0,0,188,189,5,8,0,0,189,191,3,30,
  	15,0,190,77,1,0,0,0,190,123,1,0,0,0,190,177,1,0,0,0,190,181,1,0,0,0,190,
  	185,1,0,0,0,191,13,1,0,0,0,192,193,5,49,0,0,193,15,1,0,0,0,194,195,5,
  	84,0,0,195,196,5,8,0,0,196,197,3,30,15,0,197,17,1,0,0,0,198,199,6,9,-1,
  	0,199,456,5,61,0,0,200,456,5,42,0,0,201,456,5,64,0,0,202,456,5,87,0,0,
  	203,456,5,86,0,0,204,456,5,84,0,0,205,456,5,73,0,0,206,207,5,74,0,0,207,
  	208,5,3,0,0,208,209,3,18,9,0,209,210,5,4,0,0,210,456,1,0,0,0,211,212,
  	5,75,0,0,212,213,5,5,0,0,213,214,3,18,9,0,214,215,5,6,0,0,215,216,5,76,
  	0,0,216,217,5,5,0,0,217,218,3,26,13,0,218,219,5,10,0,0,219,220,3,18,9,
  	0,220,221,5,6,0,0,221,456,1,0,0,0,222,223,5,75,0,0,223,224,5,5,0,0,224,
  	225,3,18,9,0,225,226,5,6,0,0,226,227,5,69,0,0,227,228,5,37,0,0,228,229,
  	3,30,15,0,229,230,5,5,0,0,230,231,3,26,13,0,231,232,5,10,0,0,232,233,
  	3,18,9,0,233,234,5,6,0,0,234,235,5,65,0,0,235,236,5,5,0,0,236,237,3,18,
  	9,0,237,238,5,6,0,0,238,456,1,0,0,0,239,240,5,75,0,0,240,241,5,5,0,0,
  	241,242,3,18,9,0,242,243,5,6,0,0,243,244,5,65,0,0,244,245,5,5,0,0,245,
  	246,3,18,9,0,246,247,5,6,0,0,247,456,1,0,0,0,248,249,5,48,0,0,249,250,
  	5,3,0,0,250,251,3,18,9,0,251,252,5,4,0,0,252,456,1,0,0,0,253,254,5,50,
  	0,0,254,255,5,3,0,0,255,256,3,18,9,0,256,257,5,4,0,0,257,456,1,0,0,0,
  	258,259,5,38,0,0,259,260,5,3,0,0,260,261,3,18,9,0,261,262,5,1,0,0,262,
  	263,3,18,9,0,263,264,5,4,0,0,264,456,1,0,0,0,265,266,5,27,0,0,266,267,
  	5,3,0,0,267,268,3,18,9,0,268,269,5,4,0,0,269,456,1,0,0,0,270,271,5,28,
  	0,0,271,272,5,3,0,0,272,273,3,18,9,0,273,274,5,4,0,0,274,456,1,0,0,0,
  	275,276,5,29,0,0,276,277,5,3,0,0,277,278,3,18,9,0,278,279,5,4,0,0,279,
  	456,1,0,0,0,280,281,5,58,0,0,281,282,5,3,0,0,282,283,3,18,9,0,283,284,
  	5,4,0,0,284,456,1,0,0,0,285,286,5,55,0,0,286,287,5,3,0,0,287,288,3,18,
  	9,0,288,289,5,4,0,0,289,456,1,0,0,0,290,291,5,30,0,0,291,292,5,3,0,0,
  	292,293,3,18,9,0,293,294,5,4,0,0,294,456,1,0,0,0,295,296,5,31,0,0,296,
  	297,5,3,0,0,297,298,3,18,9,0,298,299,5,4,0,0,299,456,1,0,0,0,300,301,
  	5,43,0,0,301,302,5,3,0,0,302,303,3,18,9,0,303,304,5,4,0,0,304,456,1,0,
  	0,0,305,306,5,32,0,0,306,307,5,3,0,0,307,308,3,18,9,0,308,309,5,1,0,0,
  	309,310,3,18,9,0,310,311,5,1,0,0,311,312,3,18,9,0,312,313,5,4,0,0,313,
  	456,1,0,0,0,314,315,5,45,0,0,315,316,5,14,0,0,316,317,3,30,15,0,317,318,
  	5,15,0,0,318,319,3,18,9,34,319,456,1,0,0,0,320,321,5,63,0,0,321,322,5,
  	14,0,0,322,323,3,30,15,0,323,324,5,15,0,0,324,325,3,18,9,33,325,456,1,
  	0,0,0,326,327,5,72,0,0,327,328,5,3,0,0,328,329,3,18,9,0,329,330,5,4,0,
  	0,330,456,1,0,0,0,331,332,5,24,0,0,332,456,3,18,9,26,333,334,5,44,0,0,
  	334,343,5,3,0,0,335,340,3,16,8,0,336,337,5,1,0,0,337,339,3,16,8,0,338,
  	336,1,0,0,0,339,342,1,0,0,0,340,338,1,0,0,0,340,341,1,0,0,0,341,344,1,
  	0,0,0,342,340,1,0,0,0,343,335,1,0,0,0,343,344,1,0,0,0,344,345,1,0,0,0,
  	345,346,5,4,0,0,346,347,5,5,0,0,347,348,5,57,0,0,348,349,3,18,9,0,349,
  	350,5,6,0,0,350,456,1,0,0,0,351,360,5,5,0,0,352,357,3,18,9,0,353,354,
  	5,1,0,0,354,356,3,18,9,0,355,353,1,0,0,0,356,359,1,0,0,0,357,355,1,0,
  	0,0,357,358,1,0,0,0,358,361,1,0,0,0,359,357,1,0,0,0,360,352,1,0,0,0,360,
  	361,1,0,0,0,361,362,1,0,0,0,362,456,5,6,0,0,363,364,5,5,0,0,364,369,3,
  	22,11,0,365,366,5,1,0,0,366,368,3,22,11,0,367,365,1,0,0,0,368,371,1,0,
  	0,0,369,367,1,0,0,0,369,370,1,0,0,0,370,372,1,0,0,0,371,369,1,0,0,0,372,
  	373,5,6,0,0,373,456,1,0,0,0,374,375,5,12,0,0,375,378,5,84,0,0,376,377,
  	5,7,0,0,377,379,3,18,9,0,378,376,1,0,0,0,378,379,1,0,0,0,379,380,1,0,
  	0,0,380,456,5,13,0,0,381,382,5,54,0,0,382,383,3,18,9,0,383,392,5,5,0,
  	0,384,389,3,24,12,0,385,386,5,11,0,0,386,388,3,24,12,0,387,385,1,0,0,
  	0,388,391,1,0,0,0,389,387,1,0,0,0,389,390,1,0,0,0,390,393,1,0,0,0,391,
  	389,1,0,0,0,392,384,1,0,0,0,392,393,1,0,0,0,393,394,1,0,0,0,394,395,5,
  	6,0,0,395,456,1,0,0,0,396,405,5,14,0,0,397,402,3,18,9,0,398,399,5,1,0,
  	0,399,401,3,18,9,0,400,398,1,0,0,0,401,404,1,0,0,0,402,400,1,0,0,0,402,
  	403,1,0,0,0,403,406,1,0,0,0,404,402,1,0,0,0,405,397,1,0,0,0,405,406,1,
  	0,0,0,406,407,1,0,0,0,407,456,5,15,0,0,408,409,5,46,0,0,409,410,3,18,
  	9,0,410,411,5,59,0,0,411,412,3,18,9,0,412,413,5,40,0,0,413,414,3,18,9,
  	7,414,456,1,0,0,0,415,416,5,52,0,0,416,421,3,20,10,0,417,418,5,1,0,0,
  	418,420,3,20,10,0,419,417,1,0,0,0,420,423,1,0,0,0,421,419,1,0,0,0,421,
  	422,1,0,0,0,422,424,1,0,0,0,423,421,1,0,0,0,424,425,5,47,0,0,425,426,
  	3,18,9,5,426,456,1,0,0,0,427,428,5,53,0,0,428,433,3,20,10,0,429,430,5,
  	1,0,0,430,432,3,20,10,0,431,429,1,0,0,0,432,435,1,0,0,0,433,431,1,0,0,
  	0,433,434,1,0,0,0,434,436,1,0,0,0,435,433,1,0,0,0,436,437,5,47,0,0,437,
  	438,3,18,9,4,438,456,1,0,0,0,439,440,5,80,0,0,440,441,5,14,0,0,441,446,
  	5,84,0,0,442,443,5,1,0,0,443,445,5,84,0,0,444,442,1,0,0,0,445,448,1,0,
  	0,0,446,444,1,0,0,0,446,447,1,0,0,0,447,449,1,0,0,0,448,446,1,0,0,0,449,
  	450,5,15,0,0,450,456,3,18,9,3,451,452,5,3,0,0,452,453,3,18,9,0,453,454,
  	5,4,0,0,454,456,1,0,0,0,455,198,1,0,0,0,455,200,1,0,0,0,455,201,1,0,0,
  	0,455,202,1,0,0,0,455,203,1,0,0,0,455,204,1,0,0,0,455,205,1,0,0,0,455,
  	206,1,0,0,0,455,211,1,0,0,0,455,222,1,0,0,0,455,239,1,0,0,0,455,248,1,
  	0,0,0,455,253,1,0,0,0,455,258,1,0,0,0,455,265,1,0,0,0,455,270,1,0,0,0,
  	455,275,1,0,0,0,455,280,1,0,0,0,455,285,1,0,0,0,455,290,1,0,0,0,455,295,
  	1,0,0,0,455,300,1,0,0,0,455,305,1,0,0,0,455,314,1,0,0,0,455,320,1,0,0,
  	0,455,326,1,0,0,0,455,331,1,0,0,0,455,333,1,0,0,0,455,351,1,0,0,0,455,
  	363,1,0,0,0,455,374,1,0,0,0,455,381,1,0,0,0,455,396,1,0,0,0,455,408,1,
  	0,0,0,455,415,1,0,0,0,455,427,1,0,0,0,455,439,1,0,0,0,455,451,1,0,0,0,
  	456,541,1,0,0,0,457,458,10,30,0,0,458,459,5,24,0,0,459,540,3,18,9,31,
  	460,461,10,29,0,0,461,462,5,25,0,0,462,540,3,18,9,30,463,464,10,28,0,
  	0,464,465,5,36,0,0,465,540,3,18,9,29,466,467,10,25,0,0,467,468,5,22,0,
  	0,468,540,3,18,9,26,469,470,10,24,0,0,470,471,5,23,0,0,471,540,3,18,9,
  	25,472,473,10,23,0,0,473,474,5,56,0,0,474,540,3,18,9,24,475,476,10,14,
  	0,0,476,477,5,16,0,0,477,540,3,18,9,15,478,479,10,13,0,0,479,480,5,17,
  	0,0,480,540,3,18,9,14,481,482,10,12,0,0,482,483,5,18,0,0,483,540,3,18,
  	9,13,484,485,10,11,0,0,485,486,5,19,0,0,486,540,3,18,9,12,487,488,10,
  	10,0,0,488,489,5,20,0,0,489,540,3,18,9,11,490,491,10,9,0,0,491,492,5,
  	21,0,0,492,540,3,18,9,10,493,494,10,8,0,0,494,495,5,70,0,0,495,540,3,
  	18,9,9,496,497,10,6,0,0,497,498,5,2,0,0,498,540,3,18,9,7,499,500,10,59,
  	0,0,500,501,5,26,0,0,501,540,5,84,0,0,502,503,10,58,0,0,503,504,5,26,
  	0,0,504,540,5,87,0,0,505,506,10,32,0,0,506,515,5,3,0,0,507,512,3,18,9,
  	0,508,509,5,1,0,0,509,511,3,18,9,0,510,508,1,0,0,0,511,514,1,0,0,0,512,
  	510,1,0,0,0,512,513,1,0,0,0,513,516,1,0,0,0,514,512,1,0,0,0,515,507,1,
  	0,0,0,515,516,1,0,0,0,516,517,1,0,0,0,517,540,5,4,0,0,518,519,10,31,0,
  	0,519,520,5,14,0,0,520,525,3,30,15,0,521,522,5,1,0,0,522,524,3,30,15,
  	0,523,521,1,0,0,0,524,527,1,0,0,0,525,523,1,0,0,0,525,526,1,0,0,0,526,
  	528,1,0,0,0,527,525,1,0,0,0,528,529,5,15,0,0,529,540,1,0,0,0,530,531,
  	10,22,0,0,531,532,5,37,0,0,532,540,3,30,15,0,533,534,10,21,0,0,534,535,
  	5,69,0,0,535,536,5,37,0,0,536,540,3,30,15,0,537,538,10,1,0,0,538,540,
  	5,2,0,0,539,457,1,0,0,0,539,460,1,0,0,0,539,463,1,0,0,0,539,466,1,0,0,
  	0,539,469,1,0,0,0,539,472,1,0,0,0,539,475,1,0,0,0,539,478,1,0,0,0,539,
  	481,1,0,0,0,539,484,1,0,0,0,539,487,1,0,0,0,539,490,1,0,0,0,539,493,1,
  	0,0,0,539,496,1,0,0,0,539,499,1,0,0,0,539,502,1,0,0,0,539,505,1,0,0,0,
  	539,518,1,0,0,0,539,530,1,0,0,0,539,533,1,0,0,0,539,537,1,0,0,0,540,543,
  	1,0,0,0,541,539,1,0,0,0,541,542,1,0,0,0,542,19,1,0,0,0,543,541,1,0,0,
  	0,544,545,3,26,13,0,545,546,5,7,0,0,546,547,3,18,9,0,547,21,1,0,0,0,548,
  	549,5,84,0,0,549,550,5,7,0,0,550,551,3,18,9,0,551,23,1,0,0,0,552,553,
  	3,26,13,0,553,554,5,10,0,0,554,555,3,18,9,0,555,25,1,0,0,0,556,557,6,
  	13,-1,0,557,558,5,12,0,0,558,561,5,84,0,0,559,560,5,7,0,0,560,562,3,26,
  	13,0,561,559,1,0,0,0,561,562,1,0,0,0,562,563,1,0,0,0,563,632,5,13,0,0,
  	564,565,5,48,0,0,565,566,5,3,0,0,566,567,3,26,13,0,567,568,5,4,0,0,568,
  	632,1,0,0,0,569,570,5,50,0,0,570,571,5,3,0,0,571,572,3,26,13,0,572,573,
  	5,4,0,0,573,632,1,0,0,0,574,583,5,5,0,0,575,580,3,26,13,0,576,577,5,1,
  	0,0,577,579,3,26,13,0,578,576,1,0,0,0,579,582,1,0,0,0,580,578,1,0,0,0,
  	580,581,1,0,0,0,581,584,1,0,0,0,582,580,1,0,0,0,583,575,1,0,0,0,583,584,
  	1,0,0,0,584,585,1,0,0,0,585,632,5,6,0,0,586,595,5,5,0,0,587,592,3,28,
  	14,0,588,589,5,1,0,0,589,591,3,28,14,0,590,588,1,0,0,0,591,594,1,0,0,
  	0,592,590,1,0,0,0,592,593,1,0,0,0,593,596,1,0,0,0,594,592,1,0,0,0,595,
  	587,1,0,0,0,595,596,1,0,0,0,596,597,1,0,0,0,597,632,5,6,0,0,598,607,5,
  	14,0,0,599,604,3,26,13,0,600,601,5,1,0,0,601,603,3,26,13,0,602,600,1,
  	0,0,0,603,606,1,0,0,0,604,602,1,0,0,0,604,605,1,0,0,0,605,608,1,0,0,0,
  	606,604,1,0,0,0,607,599,1,0,0,0,607,608,1,0,0,0,608,609,1,0,0,0,609,632,
  	5,15,0,0,610,611,5,38,0,0,611,612,5,3,0,0,612,613,3,26,13,0,613,614,5,
  	1,0,0,614,615,3,26,13,0,615,616,5,4,0,0,616,632,1,0,0,0,617,632,5,42,
  	0,0,618,632,5,61,0,0,619,632,5,64,0,0,620,632,5,87,0,0,621,622,5,58,0,
  	0,622,623,5,3,0,0,623,624,3,26,13,0,624,625,5,4,0,0,625,632,1,0,0,0,626,
  	632,5,84,0,0,627,628,5,3,0,0,628,629,3,26,13,0,629,630,5,4,0,0,630,632,
  	1,0,0,0,631,556,1,0,0,0,631,564,1,0,0,0,631,569,1,0,0,0,631,574,1,0,0,
  	0,631,586,1,0,0,0,631,598,1,0,0,0,631,610,1,0,0,0,631,617,1,0,0,0,631,
  	618,1,0,0,0,631,619,1,0,0,0,631,620,1,0,0,0,631,621,1,0,0,0,631,626,1,
  	0,0,0,631,627,1,0,0,0,632,642,1,0,0,0,633,634,10,3,0,0,634,635,5,37,0,
  	0,635,641,3,30,15,0,636,637,10,2,0,0,637,638,5,69,0,0,638,639,5,37,0,
  	0,639,641,3,30,15,0,640,633,1,0,0,0,640,636,1,0,0,0,641,644,1,0,0,0,642,
  	640,1,0,0,0,642,643,1,0,0,0,643,27,1,0,0,0,644,642,1,0,0,0,645,646,5,
  	84,0,0,646,647,5,7,0,0,647,648,3,26,13,0,648,29,1,0,0,0,649,650,6,15,
  	-1,0,650,731,5,33,0,0,651,731,5,34,0,0,652,653,5,71,0,0,653,731,3,30,
  	15,15,654,655,5,44,0,0,655,664,5,3,0,0,656,661,3,30,15,0,657,658,5,1,
  	0,0,658,660,3,30,15,0,659,657,1,0,0,0,660,663,1,0,0,0,661,659,1,0,0,0,
  	661,662,1,0,0,0,662,665,1,0,0,0,663,661,1,0,0,0,664,656,1,0,0,0,664,665,
  	1,0,0,0,665,666,1,0,0,0,666,667,5,4,0,0,667,668,5,9,0,0,668,731,3,30,
  	15,13,669,673,5,81,0,0,670,672,5,84,0,0,671,670,1,0,0,0,672,675,1,0,0,
  	0,673,671,1,0,0,0,673,674,1,0,0,0,674,676,1,0,0,0,675,673,1,0,0,0,676,
  	677,5,26,0,0,677,731,3,30,15,12,678,679,5,66,0,0,679,680,5,84,0,0,680,
  	681,5,26,0,0,681,731,3,30,15,11,682,691,5,5,0,0,683,688,3,30,15,0,684,
  	685,5,1,0,0,685,687,3,30,15,0,686,684,1,0,0,0,687,690,1,0,0,0,688,686,
  	1,0,0,0,688,689,1,0,0,0,689,692,1,0,0,0,690,688,1,0,0,0,691,683,1,0,0,
  	0,691,692,1,0,0,0,692,693,1,0,0,0,693,731,5,6,0,0,694,695,5,5,0,0,695,
  	700,3,32,16,0,696,697,5,1,0,0,697,699,3,32,16,0,698,696,1,0,0,0,699,702,
  	1,0,0,0,700,698,1,0,0,0,700,701,1,0,0,0,701,703,1,0,0,0,702,700,1,0,0,
  	0,703,704,5,6,0,0,704,731,1,0,0,0,705,714,5,12,0,0,706,711,3,34,17,0,
  	707,708,5,1,0,0,708,710,3,34,17,0,709,707,1,0,0,0,710,713,1,0,0,0,711,
  	709,1,0,0,0,711,712,1,0,0,0,712,715,1,0,0,0,713,711,1,0,0,0,714,706,1,
  	0,0,0,714,715,1,0,0,0,715,716,1,0,0,0,716,731,5,13,0,0,717,718,5,14,0,
  	0,718,719,3,30,15,0,719,720,5,15,0,0,720,731,1,0,0,0,721,731,5,35,0,0,
  	722,731,5,77,0,0,723,731,5,78,0,0,724,731,5,79,0,0,725,731,5,84,0,0,726,
  	727,5,3,0,0,727,728,3,30,15,0,728,729,5,4,0,0,729,731,1,0,0,0,730,649,
  	1,0,0,0,730,651,1,0,0,0,730,652,1,0,0,0,730,654,1,0,0,0,730,669,1,0,0,
  	0,730,678,1,0,0,0,730,682,1,0,0,0,730,694,1,0,0,0,730,705,1,0,0,0,730,
  	717,1,0,0,0,730,721,1,0,0,0,730,722,1,0,0,0,730,723,1,0,0,0,730,724,1,
  	0,0,0,730,725,1,0,0,0,730,726,1,0,0,0,731,737,1,0,0,0,732,733,10,14,0,
  	0,733,734,5,22,0,0,734,736,3,30,15,15,735,732,1,0,0,0,736,739,1,0,0,0,
  	737,735,1,0,0,0,737,738,1,0,0,0,738,31,1,0,0,0,739,737,1,0,0,0,740,741,
  	5,84,0,0,741,742,5,8,0,0,742,743,3,30,15,0,743,33,1,0,0,0,744,747,5,84,
  	0,0,745,746,5,8,0,0,746,748,3,30,15,0,747,745,1,0,0,0,747,748,1,0,0,0,
  	748,35,1,0,0,0,59,49,55,69,77,88,91,96,104,107,113,123,135,145,148,153,
  	161,164,170,190,340,343,357,360,369,378,389,392,402,405,421,433,446,455,
  	512,515,525,539,541,561,580,583,592,595,604,607,631,640,642,661,664,673,
  	688,691,700,711,714,730,737,747
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  stellaparserParserStaticData = staticData.release();
}

}

stellaParser::stellaParser(TokenStream *input) : stellaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

stellaParser::stellaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  stellaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *stellaparserParserStaticData->atn, stellaparserParserStaticData->decisionToDFA, stellaparserParserStaticData->sharedContextCache, options);
}

stellaParser::~stellaParser() {
  delete _interpreter;
}

const atn::ATN& stellaParser::getATN() const {
  return *stellaparserParserStaticData->atn;
}

std::string stellaParser::getGrammarFileName() const {
  return "stellaParser.g4";
}

const std::vector<std::string>& stellaParser::getRuleNames() const {
  return stellaparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& stellaParser::getVocabulary() const {
  return stellaparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView stellaParser::getSerializedATN() const {
  return stellaparserParserStaticData->serializedATN;
}


//----------------- Start_ProgramContext ------------------------------------------------------------------

stellaParser::Start_ProgramContext::Start_ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::Start_ProgramContext::EOF() {
  return getToken(stellaParser::EOF, 0);
}

stellaParser::ProgramContext* stellaParser::Start_ProgramContext::program() {
  return getRuleContext<stellaParser::ProgramContext>(0);
}


size_t stellaParser::Start_ProgramContext::getRuleIndex() const {
  return stellaParser::RuleStart_Program;
}


std::any stellaParser::Start_ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitStart_Program(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::Start_ProgramContext* stellaParser::start_Program() {
  Start_ProgramContext *_localctx = _tracker.createInstance<Start_ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, stellaParser::RuleStart_Program);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    antlrcpp::downCast<Start_ProgramContext *>(_localctx)->x = program();
    setState(37);
    match(stellaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Start_ExprContext ------------------------------------------------------------------

stellaParser::Start_ExprContext::Start_ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::Start_ExprContext::EOF() {
  return getToken(stellaParser::EOF, 0);
}

stellaParser::ExprContext* stellaParser::Start_ExprContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}


size_t stellaParser::Start_ExprContext::getRuleIndex() const {
  return stellaParser::RuleStart_Expr;
}


std::any stellaParser::Start_ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitStart_Expr(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::Start_ExprContext* stellaParser::start_Expr() {
  Start_ExprContext *_localctx = _tracker.createInstance<Start_ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, stellaParser::RuleStart_Expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    antlrcpp::downCast<Start_ExprContext *>(_localctx)->x = expr(0);
    setState(40);
    match(stellaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Start_TypeContext ------------------------------------------------------------------

stellaParser::Start_TypeContext::Start_TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::Start_TypeContext::EOF() {
  return getToken(stellaParser::EOF, 0);
}

stellaParser::StellatypeContext* stellaParser::Start_TypeContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}


size_t stellaParser::Start_TypeContext::getRuleIndex() const {
  return stellaParser::RuleStart_Type;
}


std::any stellaParser::Start_TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitStart_Type(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::Start_TypeContext* stellaParser::start_Type() {
  Start_TypeContext *_localctx = _tracker.createInstance<Start_TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, stellaParser::RuleStart_Type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    antlrcpp::downCast<Start_TypeContext *>(_localctx)->x = stellatype(0);
    setState(43);
    match(stellaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

stellaParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

stellaParser::LanguageDeclContext* stellaParser::ProgramContext::languageDecl() {
  return getRuleContext<stellaParser::LanguageDeclContext>(0);
}

std::vector<stellaParser::ExtensionContext *> stellaParser::ProgramContext::extension() {
  return getRuleContexts<stellaParser::ExtensionContext>();
}

stellaParser::ExtensionContext* stellaParser::ProgramContext::extension(size_t i) {
  return getRuleContext<stellaParser::ExtensionContext>(i);
}

std::vector<stellaParser::DeclContext *> stellaParser::ProgramContext::decl() {
  return getRuleContexts<stellaParser::DeclContext>();
}

stellaParser::DeclContext* stellaParser::ProgramContext::decl(size_t i) {
  return getRuleContext<stellaParser::DeclContext>(i);
}


size_t stellaParser::ProgramContext::getRuleIndex() const {
  return stellaParser::RuleProgram;
}


std::any stellaParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::ProgramContext* stellaParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 6, stellaParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    languageDecl();
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == stellaParser::Surrogate_id_SYMB_40) {
      setState(46);
      antlrcpp::downCast<ProgramContext *>(_localctx)->extensionContext = extension();
      antlrcpp::downCast<ProgramContext *>(_localctx)->extensions.push_back(antlrcpp::downCast<ProgramContext *>(_localctx)->extensionContext);
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 44) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 44)) & 68728127521) != 0)) {
      setState(52);
      antlrcpp::downCast<ProgramContext *>(_localctx)->declContext = decl();
      antlrcpp::downCast<ProgramContext *>(_localctx)->decls.push_back(antlrcpp::downCast<ProgramContext *>(_localctx)->declContext);
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LanguageDeclContext ------------------------------------------------------------------

stellaParser::LanguageDeclContext::LanguageDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::LanguageDeclContext::getRuleIndex() const {
  return stellaParser::RuleLanguageDecl;
}

void stellaParser::LanguageDeclContext::copyFrom(LanguageDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LanguageCoreContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LanguageCoreContext::Surrogate_id_SYMB_50() {
  return getToken(stellaParser::Surrogate_id_SYMB_50, 0);
}

tree::TerminalNode* stellaParser::LanguageCoreContext::Surrogate_id_SYMB_38() {
  return getToken(stellaParser::Surrogate_id_SYMB_38, 0);
}

tree::TerminalNode* stellaParser::LanguageCoreContext::Surrogate_id_SYMB_1() {
  return getToken(stellaParser::Surrogate_id_SYMB_1, 0);
}

stellaParser::LanguageCoreContext::LanguageCoreContext(LanguageDeclContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LanguageCoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLanguageCore(this);
  else
    return visitor->visitChildren(this);
}
stellaParser::LanguageDeclContext* stellaParser::languageDecl() {
  LanguageDeclContext *_localctx = _tracker.createInstance<LanguageDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, stellaParser::RuleLanguageDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<stellaParser::LanguageCoreContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(stellaParser::Surrogate_id_SYMB_50);
    setState(59);
    match(stellaParser::Surrogate_id_SYMB_38);
    setState(60);
    match(stellaParser::Surrogate_id_SYMB_1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtensionContext ------------------------------------------------------------------

stellaParser::ExtensionContext::ExtensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::ExtensionContext::getRuleIndex() const {
  return stellaParser::RuleExtension;
}

void stellaParser::ExtensionContext::copyFrom(ExtensionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AnExtensionContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::AnExtensionContext::Surrogate_id_SYMB_40() {
  return getToken(stellaParser::Surrogate_id_SYMB_40, 0);
}

tree::TerminalNode* stellaParser::AnExtensionContext::Surrogate_id_SYMB_64() {
  return getToken(stellaParser::Surrogate_id_SYMB_64, 0);
}

tree::TerminalNode* stellaParser::AnExtensionContext::Surrogate_id_SYMB_1() {
  return getToken(stellaParser::Surrogate_id_SYMB_1, 0);
}

std::vector<tree::TerminalNode *> stellaParser::AnExtensionContext::ExtensionName() {
  return getTokens(stellaParser::ExtensionName);
}

tree::TerminalNode* stellaParser::AnExtensionContext::ExtensionName(size_t i) {
  return getToken(stellaParser::ExtensionName, i);
}

std::vector<tree::TerminalNode *> stellaParser::AnExtensionContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::AnExtensionContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::AnExtensionContext::AnExtensionContext(ExtensionContext *ctx) { copyFrom(ctx); }


std::any stellaParser::AnExtensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitAnExtension(this);
  else
    return visitor->visitChildren(this);
}
stellaParser::ExtensionContext* stellaParser::extension() {
  ExtensionContext *_localctx = _tracker.createInstance<ExtensionContext>(_ctx, getState());
  enterRule(_localctx, 10, stellaParser::RuleExtension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<stellaParser::AnExtensionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(stellaParser::Surrogate_id_SYMB_40);
    setState(63);
    match(stellaParser::Surrogate_id_SYMB_64);
    setState(64);
    antlrcpp::downCast<AnExtensionContext *>(_localctx)->extensionnameToken = match(stellaParser::ExtensionName);
    antlrcpp::downCast<AnExtensionContext *>(_localctx)->extensionNames.push_back(antlrcpp::downCast<AnExtensionContext *>(_localctx)->extensionnameToken);
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == stellaParser::Surrogate_id_SYMB_0) {
      setState(65);
      match(stellaParser::Surrogate_id_SYMB_0);
      setState(66);
      antlrcpp::downCast<AnExtensionContext *>(_localctx)->extensionnameToken = match(stellaParser::ExtensionName);
      antlrcpp::downCast<AnExtensionContext *>(_localctx)->extensionNames.push_back(antlrcpp::downCast<AnExtensionContext *>(_localctx)->extensionnameToken);
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    match(stellaParser::Surrogate_id_SYMB_1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

stellaParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::DeclContext::getRuleIndex() const {
  return stellaParser::RuleDecl;
}

void stellaParser::DeclContext::copyFrom(DeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclTypeAliasContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DeclTypeAliasContext::Surrogate_id_SYMB_61() {
  return getToken(stellaParser::Surrogate_id_SYMB_61, 0);
}

tree::TerminalNode* stellaParser::DeclTypeAliasContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

tree::TerminalNode* stellaParser::DeclTypeAliasContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::StellatypeContext* stellaParser::DeclTypeAliasContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::DeclTypeAliasContext::DeclTypeAliasContext(DeclContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DeclTypeAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDeclTypeAlias(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclExceptionTypeContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DeclExceptionTypeContext::EXCEPTION() {
  return getToken(stellaParser::EXCEPTION, 0);
}

tree::TerminalNode* stellaParser::DeclExceptionTypeContext::Surrogate_id_SYMB_61() {
  return getToken(stellaParser::Surrogate_id_SYMB_61, 0);
}

tree::TerminalNode* stellaParser::DeclExceptionTypeContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

stellaParser::StellatypeContext* stellaParser::DeclExceptionTypeContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::DeclExceptionTypeContext::DeclExceptionTypeContext(DeclContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DeclExceptionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDeclExceptionType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclFunContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_43() {
  return getToken(stellaParser::Surrogate_id_SYMB_43, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_56() {
  return getToken(stellaParser::Surrogate_id_SYMB_56, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::ExprContext* stellaParser::DeclFunContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_8() {
  return getToken(stellaParser::Surrogate_id_SYMB_8, 0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_59() {
  return getToken(stellaParser::Surrogate_id_SYMB_59, 0);
}

std::vector<stellaParser::AnnotationContext *> stellaParser::DeclFunContext::annotation() {
  return getRuleContexts<stellaParser::AnnotationContext>();
}

stellaParser::AnnotationContext* stellaParser::DeclFunContext::annotation(size_t i) {
  return getRuleContext<stellaParser::AnnotationContext>(i);
}

std::vector<stellaParser::ParamDeclContext *> stellaParser::DeclFunContext::paramDecl() {
  return getRuleContexts<stellaParser::ParamDeclContext>();
}

stellaParser::ParamDeclContext* stellaParser::DeclFunContext::paramDecl(size_t i) {
  return getRuleContext<stellaParser::ParamDeclContext>(i);
}

std::vector<stellaParser::StellatypeContext *> stellaParser::DeclFunContext::stellatype() {
  return getRuleContexts<stellaParser::StellatypeContext>();
}

stellaParser::StellatypeContext* stellaParser::DeclFunContext::stellatype(size_t i) {
  return getRuleContext<stellaParser::StellatypeContext>(i);
}

std::vector<stellaParser::DeclContext *> stellaParser::DeclFunContext::decl() {
  return getRuleContexts<stellaParser::DeclContext>();
}

stellaParser::DeclContext* stellaParser::DeclFunContext::decl(size_t i) {
  return getRuleContext<stellaParser::DeclContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::DeclFunContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::DeclFunContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::DeclFunContext::DeclFunContext(DeclContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DeclFunContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDeclFun(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclExceptionVariantContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DeclExceptionVariantContext::EXCEPTION() {
  return getToken(stellaParser::EXCEPTION, 0);
}

tree::TerminalNode* stellaParser::DeclExceptionVariantContext::VARIANT() {
  return getToken(stellaParser::VARIANT, 0);
}

tree::TerminalNode* stellaParser::DeclExceptionVariantContext::Surrogate_id_SYMB_7() {
  return getToken(stellaParser::Surrogate_id_SYMB_7, 0);
}

tree::TerminalNode* stellaParser::DeclExceptionVariantContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::StellatypeContext* stellaParser::DeclExceptionVariantContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::DeclExceptionVariantContext::DeclExceptionVariantContext(DeclContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DeclExceptionVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDeclExceptionVariant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclFunGenericContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DeclFunGenericContext::GENERIC() {
  return getToken(stellaParser::GENERIC, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_43() {
  return getToken(stellaParser::Surrogate_id_SYMB_43, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_56() {
  return getToken(stellaParser::Surrogate_id_SYMB_56, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<tree::TerminalNode *> stellaParser::DeclFunGenericContext::StellaIdent() {
  return getTokens(stellaParser::StellaIdent);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::StellaIdent(size_t i) {
  return getToken(stellaParser::StellaIdent, i);
}

stellaParser::ExprContext* stellaParser::DeclFunGenericContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_8() {
  return getToken(stellaParser::Surrogate_id_SYMB_8, 0);
}

tree::TerminalNode* stellaParser::DeclFunGenericContext::Surrogate_id_SYMB_59() {
  return getToken(stellaParser::Surrogate_id_SYMB_59, 0);
}

std::vector<stellaParser::AnnotationContext *> stellaParser::DeclFunGenericContext::annotation() {
  return getRuleContexts<stellaParser::AnnotationContext>();
}

stellaParser::AnnotationContext* stellaParser::DeclFunGenericContext::annotation(size_t i) {
  return getRuleContext<stellaParser::AnnotationContext>(i);
}

std::vector<stellaParser::ParamDeclContext *> stellaParser::DeclFunGenericContext::paramDecl() {
  return getRuleContexts<stellaParser::ParamDeclContext>();
}

stellaParser::ParamDeclContext* stellaParser::DeclFunGenericContext::paramDecl(size_t i) {
  return getRuleContext<stellaParser::ParamDeclContext>(i);
}

std::vector<stellaParser::StellatypeContext *> stellaParser::DeclFunGenericContext::stellatype() {
  return getRuleContexts<stellaParser::StellatypeContext>();
}

stellaParser::StellatypeContext* stellaParser::DeclFunGenericContext::stellatype(size_t i) {
  return getRuleContext<stellaParser::StellatypeContext>(i);
}

std::vector<stellaParser::DeclContext *> stellaParser::DeclFunGenericContext::decl() {
  return getRuleContexts<stellaParser::DeclContext>();
}

stellaParser::DeclContext* stellaParser::DeclFunGenericContext::decl(size_t i) {
  return getRuleContext<stellaParser::DeclContext>(i);
}

stellaParser::DeclFunGenericContext::DeclFunGenericContext(DeclContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DeclFunGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDeclFunGeneric(this);
  else
    return visitor->visitChildren(this);
}
stellaParser::DeclContext* stellaParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 12, stellaParser::RuleDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<stellaParser::DeclFunContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_48) {
        setState(74);
        antlrcpp::downCast<DeclFunContext *>(_localctx)->annotationContext = annotation();
        antlrcpp::downCast<DeclFunContext *>(_localctx)->annotations.push_back(antlrcpp::downCast<DeclFunContext *>(_localctx)->annotationContext);
        setState(79);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(80);
      match(stellaParser::Surrogate_id_SYMB_43);
      setState(81);
      antlrcpp::downCast<DeclFunContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      setState(82);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(91);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::StellaIdent) {
        setState(83);
        antlrcpp::downCast<DeclFunContext *>(_localctx)->paramDeclContext = paramDecl();
        antlrcpp::downCast<DeclFunContext *>(_localctx)->paramDecls.push_back(antlrcpp::downCast<DeclFunContext *>(_localctx)->paramDeclContext);
        setState(88);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(84);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(85);
          antlrcpp::downCast<DeclFunContext *>(_localctx)->paramDeclContext = paramDecl();
          antlrcpp::downCast<DeclFunContext *>(_localctx)->paramDecls.push_back(antlrcpp::downCast<DeclFunContext *>(_localctx)->paramDeclContext);
          setState(90);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(93);
      match(stellaParser::Surrogate_id_SYMB_3);
      setState(96);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::Surrogate_id_SYMB_8) {
        setState(94);
        match(stellaParser::Surrogate_id_SYMB_8);
        setState(95);
        antlrcpp::downCast<DeclFunContext *>(_localctx)->returnType = stellatype(0);
      }
      setState(107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::Surrogate_id_SYMB_59) {
        setState(98);
        match(stellaParser::Surrogate_id_SYMB_59);
        setState(99);
        antlrcpp::downCast<DeclFunContext *>(_localctx)->stellatypeContext = stellatype(0);
        antlrcpp::downCast<DeclFunContext *>(_localctx)->throwTypes.push_back(antlrcpp::downCast<DeclFunContext *>(_localctx)->stellatypeContext);
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(100);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(101);
          antlrcpp::downCast<DeclFunContext *>(_localctx)->stellatypeContext = stellatype(0);
          antlrcpp::downCast<DeclFunContext *>(_localctx)->throwTypes.push_back(antlrcpp::downCast<DeclFunContext *>(_localctx)->stellatypeContext);
          setState(106);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(109);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 44) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 44)) & 68728127521) != 0)) {
        setState(110);
        antlrcpp::downCast<DeclFunContext *>(_localctx)->declContext = decl();
        antlrcpp::downCast<DeclFunContext *>(_localctx)->localDecls.push_back(antlrcpp::downCast<DeclFunContext *>(_localctx)->declContext);
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(116);
      match(stellaParser::Surrogate_id_SYMB_56);
      setState(117);
      antlrcpp::downCast<DeclFunContext *>(_localctx)->returnExpr = expr(0);
      setState(118);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<stellaParser::DeclFunGenericContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_48) {
        setState(120);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->annotationContext = annotation();
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->annotations.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->annotationContext);
        setState(125);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(126);
      match(stellaParser::GENERIC);
      setState(127);
      match(stellaParser::Surrogate_id_SYMB_43);
      setState(128);
      antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      setState(129);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(130);
      antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellaidentToken = match(stellaParser::StellaIdent);
      antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->generics.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellaidentToken);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_0) {
        setState(131);
        match(stellaParser::Surrogate_id_SYMB_0);
        setState(132);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellaidentToken = match(stellaParser::StellaIdent);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->generics.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellaidentToken);
        setState(137);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(138);
      match(stellaParser::Surrogate_id_SYMB_14);
      setState(139);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(148);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::StellaIdent) {
        setState(140);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->paramDeclContext = paramDecl();
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->paramDecls.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->paramDeclContext);
        setState(145);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(141);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(142);
          antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->paramDeclContext = paramDecl();
          antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->paramDecls.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->paramDeclContext);
          setState(147);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(150);
      match(stellaParser::Surrogate_id_SYMB_3);
      setState(153);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::Surrogate_id_SYMB_8) {
        setState(151);
        match(stellaParser::Surrogate_id_SYMB_8);
        setState(152);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->returnType = stellatype(0);
      }
      setState(164);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::Surrogate_id_SYMB_59) {
        setState(155);
        match(stellaParser::Surrogate_id_SYMB_59);
        setState(156);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellatypeContext = stellatype(0);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->throwTypes.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellatypeContext);
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(157);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(158);
          antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellatypeContext = stellatype(0);
          antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->throwTypes.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->stellatypeContext);
          setState(163);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(166);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 44) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 44)) & 68728127521) != 0)) {
        setState(167);
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->declContext = decl();
        antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->localDecls.push_back(antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->declContext);
        setState(172);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(173);
      match(stellaParser::Surrogate_id_SYMB_56);
      setState(174);
      antlrcpp::downCast<DeclFunGenericContext *>(_localctx)->returnExpr = expr(0);
      setState(175);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<stellaParser::DeclTypeAliasContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(177);
      match(stellaParser::Surrogate_id_SYMB_61);
      setState(178);
      antlrcpp::downCast<DeclTypeAliasContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      setState(179);
      match(stellaParser::Surrogate_id_SYMB_6);
      setState(180);
      antlrcpp::downCast<DeclTypeAliasContext *>(_localctx)->atype = stellatype(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<stellaParser::DeclExceptionTypeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(181);
      match(stellaParser::EXCEPTION);
      setState(182);
      match(stellaParser::Surrogate_id_SYMB_61);
      setState(183);
      match(stellaParser::Surrogate_id_SYMB_6);
      setState(184);
      antlrcpp::downCast<DeclExceptionTypeContext *>(_localctx)->exceptionType = stellatype(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<stellaParser::DeclExceptionVariantContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(185);
      match(stellaParser::EXCEPTION);
      setState(186);
      match(stellaParser::VARIANT);
      setState(187);
      antlrcpp::downCast<DeclExceptionVariantContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      setState(188);
      match(stellaParser::Surrogate_id_SYMB_7);
      setState(189);
      antlrcpp::downCast<DeclExceptionVariantContext *>(_localctx)->variantType = stellatype(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

stellaParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::AnnotationContext::getRuleIndex() const {
  return stellaParser::RuleAnnotation;
}

void stellaParser::AnnotationContext::copyFrom(AnnotationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InlineAnnotationContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::InlineAnnotationContext::Surrogate_id_SYMB_48() {
  return getToken(stellaParser::Surrogate_id_SYMB_48, 0);
}

stellaParser::InlineAnnotationContext::InlineAnnotationContext(AnnotationContext *ctx) { copyFrom(ctx); }


std::any stellaParser::InlineAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitInlineAnnotation(this);
  else
    return visitor->visitChildren(this);
}
stellaParser::AnnotationContext* stellaParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 14, stellaParser::RuleAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<stellaParser::InlineAnnotationContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(stellaParser::Surrogate_id_SYMB_48);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDeclContext ------------------------------------------------------------------

stellaParser::ParamDeclContext::ParamDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::ParamDeclContext::Surrogate_id_SYMB_7() {
  return getToken(stellaParser::Surrogate_id_SYMB_7, 0);
}

tree::TerminalNode* stellaParser::ParamDeclContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::StellatypeContext* stellaParser::ParamDeclContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}


size_t stellaParser::ParamDeclContext::getRuleIndex() const {
  return stellaParser::RuleParamDecl;
}


std::any stellaParser::ParamDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitParamDecl(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::ParamDeclContext* stellaParser::paramDecl() {
  ParamDeclContext *_localctx = _tracker.createInstance<ParamDeclContext>(_ctx, getState());
  enterRule(_localctx, 16, stellaParser::RuleParamDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    antlrcpp::downCast<ParamDeclContext *>(_localctx)->name = match(stellaParser::StellaIdent);
    setState(195);
    match(stellaParser::Surrogate_id_SYMB_7);
    setState(196);
    antlrcpp::downCast<ParamDeclContext *>(_localctx)->paramType = stellatype(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

stellaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::ExprContext::getRuleIndex() const {
  return stellaParser::RuleExpr;
}

void stellaParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FoldContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::FoldContext::Surrogate_id_SYMB_44() {
  return getToken(stellaParser::Surrogate_id_SYMB_44, 0);
}

tree::TerminalNode* stellaParser::FoldContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::FoldContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

stellaParser::StellatypeContext* stellaParser::FoldContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::ExprContext* stellaParser::FoldContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::FoldContext::FoldContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::FoldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitFold(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::AddContext::Surrogate_id_SYMB_21() {
  return getToken(stellaParser::Surrogate_id_SYMB_21, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::AddContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::AddContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IsZeroContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::IsZeroContext::Surrogate_id_SYMB_30() {
  return getToken(stellaParser::Surrogate_id_SYMB_30, 0);
}

tree::TerminalNode* stellaParser::IsZeroContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::IsZeroContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::IsZeroContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::IsZeroContext::IsZeroContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::IsZeroContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitIsZero(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::VarContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::VarContext::VarContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeAbstractionContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeAbstractionContext::GENERIC() {
  return getToken(stellaParser::GENERIC, 0);
}

tree::TerminalNode* stellaParser::TypeAbstractionContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::TypeAbstractionContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

std::vector<tree::TerminalNode *> stellaParser::TypeAbstractionContext::StellaIdent() {
  return getTokens(stellaParser::StellaIdent);
}

tree::TerminalNode* stellaParser::TypeAbstractionContext::StellaIdent(size_t i) {
  return getToken(stellaParser::StellaIdent, i);
}

stellaParser::ExprContext* stellaParser::TypeAbstractionContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> stellaParser::TypeAbstractionContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TypeAbstractionContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TypeAbstractionContext::TypeAbstractionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeAbstractionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeAbstraction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivideContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DivideContext::Surrogate_id_SYMB_24() {
  return getToken(stellaParser::Surrogate_id_SYMB_24, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::DivideContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::DivideContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::DivideContext::DivideContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessThanContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LessThanContext::Surrogate_id_SYMB_15() {
  return getToken(stellaParser::Surrogate_id_SYMB_15, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::LessThanContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::LessThanContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::LessThanContext::LessThanContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LessThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLessThan(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DotRecordContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DotRecordContext::Surrogate_id_SYMB_25() {
  return getToken(stellaParser::Surrogate_id_SYMB_25, 0);
}

stellaParser::ExprContext* stellaParser::DotRecordContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

tree::TerminalNode* stellaParser::DotRecordContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::DotRecordContext::DotRecordContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DotRecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDotRecord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GreaterThanContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::GreaterThanContext::Surrogate_id_SYMB_17() {
  return getToken(stellaParser::Surrogate_id_SYMB_17, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::GreaterThanContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::GreaterThanContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::GreaterThanContext::GreaterThanContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::GreaterThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitGreaterThan(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::EqualContext::Surrogate_id_SYMB_19() {
  return getToken(stellaParser::Surrogate_id_SYMB_19, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::EqualContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::EqualContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::EqualContext::EqualContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThrowContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ThrowContext::THROW() {
  return getToken(stellaParser::THROW, 0);
}

tree::TerminalNode* stellaParser::ThrowContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::ThrowContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::ThrowContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::ThrowContext::ThrowContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ThrowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitThrow(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::MultiplyContext::Surrogate_id_SYMB_23() {
  return getToken(stellaParser::Surrogate_id_SYMB_23, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::MultiplyContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::MultiplyContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::MultiplyContext::MultiplyContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::MultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitMultiply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstMemoryContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ConstMemoryContext::MemoryAddress() {
  return getToken(stellaParser::MemoryAddress, 0);
}

stellaParser::ConstMemoryContext::ConstMemoryContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ConstMemoryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitConstMemory(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ListContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::ListContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::ListContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::ListContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::ListContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::ListContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::ListContext::ListContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TryCatchContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TryCatchContext::TRY() {
  return getToken(stellaParser::TRY, 0);
}

std::vector<tree::TerminalNode *> stellaParser::TryCatchContext::Surrogate_id_SYMB_4() {
  return getTokens(stellaParser::Surrogate_id_SYMB_4);
}

tree::TerminalNode* stellaParser::TryCatchContext::Surrogate_id_SYMB_4(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_4, i);
}

std::vector<tree::TerminalNode *> stellaParser::TryCatchContext::Surrogate_id_SYMB_5() {
  return getTokens(stellaParser::Surrogate_id_SYMB_5);
}

tree::TerminalNode* stellaParser::TryCatchContext::Surrogate_id_SYMB_5(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_5, i);
}

tree::TerminalNode* stellaParser::TryCatchContext::CATCH() {
  return getToken(stellaParser::CATCH, 0);
}

tree::TerminalNode* stellaParser::TryCatchContext::Surrogate_id_SYMB_9() {
  return getToken(stellaParser::Surrogate_id_SYMB_9, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::TryCatchContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::TryCatchContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::PatternContext* stellaParser::TryCatchContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::TryCatchContext::TryCatchContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TryCatchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTryCatch(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TryCastAsContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TryCastAsContext::TRY() {
  return getToken(stellaParser::TRY, 0);
}

std::vector<tree::TerminalNode *> stellaParser::TryCastAsContext::Surrogate_id_SYMB_4() {
  return getTokens(stellaParser::Surrogate_id_SYMB_4);
}

tree::TerminalNode* stellaParser::TryCastAsContext::Surrogate_id_SYMB_4(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_4, i);
}

std::vector<tree::TerminalNode *> stellaParser::TryCastAsContext::Surrogate_id_SYMB_5() {
  return getTokens(stellaParser::Surrogate_id_SYMB_5);
}

tree::TerminalNode* stellaParser::TryCastAsContext::Surrogate_id_SYMB_5(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_5, i);
}

tree::TerminalNode* stellaParser::TryCastAsContext::CAST() {
  return getToken(stellaParser::CAST, 0);
}

tree::TerminalNode* stellaParser::TryCastAsContext::Surrogate_id_SYMB_36() {
  return getToken(stellaParser::Surrogate_id_SYMB_36, 0);
}

tree::TerminalNode* stellaParser::TryCastAsContext::Surrogate_id_SYMB_9() {
  return getToken(stellaParser::Surrogate_id_SYMB_9, 0);
}

tree::TerminalNode* stellaParser::TryCastAsContext::Surrogate_id_SYMB_64() {
  return getToken(stellaParser::Surrogate_id_SYMB_64, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::TryCastAsContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::TryCastAsContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::StellatypeContext* stellaParser::TryCastAsContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::PatternContext* stellaParser::TryCastAsContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::TryCastAsContext::TryCastAsContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TryCastAsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTryCastAs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HeadContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::HeadContext::Surrogate_id_SYMB_26() {
  return getToken(stellaParser::Surrogate_id_SYMB_26, 0);
}

tree::TerminalNode* stellaParser::HeadContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::HeadContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::HeadContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::HeadContext::HeadContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::HeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitHead(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TerminatingSemicolonContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TerminatingSemicolonContext::Surrogate_id_SYMB_1() {
  return getToken(stellaParser::Surrogate_id_SYMB_1, 0);
}

stellaParser::ExprContext* stellaParser::TerminatingSemicolonContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::TerminatingSemicolonContext::TerminatingSemicolonContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TerminatingSemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTerminatingSemicolon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotEqualContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::NotEqualContext::Surrogate_id_SYMB_20() {
  return getToken(stellaParser::Surrogate_id_SYMB_20, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::NotEqualContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::NotEqualContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::NotEqualContext::NotEqualContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::NotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitNotEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstUnitContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ConstUnitContext::Surrogate_id_SYMB_63() {
  return getToken(stellaParser::Surrogate_id_SYMB_63, 0);
}

stellaParser::ConstUnitContext::ConstUnitContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ConstUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitConstUnit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SequenceContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::SequenceContext::Surrogate_id_SYMB_1() {
  return getToken(stellaParser::Surrogate_id_SYMB_1, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::SequenceContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::SequenceContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::SequenceContext::SequenceContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::SequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitSequence(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstFalseContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ConstFalseContext::Surrogate_id_SYMB_41() {
  return getToken(stellaParser::Surrogate_id_SYMB_41, 0);
}

stellaParser::ConstFalseContext::ConstFalseContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ConstFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitConstFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AbstractionContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_43() {
  return getToken(stellaParser::Surrogate_id_SYMB_43, 0);
}

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_56() {
  return getToken(stellaParser::Surrogate_id_SYMB_56, 0);
}

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

stellaParser::ExprContext* stellaParser::AbstractionContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<stellaParser::ParamDeclContext *> stellaParser::AbstractionContext::paramDecl() {
  return getRuleContexts<stellaParser::ParamDeclContext>();
}

stellaParser::ParamDeclContext* stellaParser::AbstractionContext::paramDecl(size_t i) {
  return getRuleContext<stellaParser::ParamDeclContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::AbstractionContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::AbstractionContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::AbstractionContext::AbstractionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::AbstractionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitAbstraction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstIntContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ConstIntContext::INTEGER() {
  return getToken(stellaParser::INTEGER, 0);
}

stellaParser::ConstIntContext::ConstIntContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ConstIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitConstInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariantContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::VariantContext::Surrogate_id_SYMB_11() {
  return getToken(stellaParser::Surrogate_id_SYMB_11, 0);
}

tree::TerminalNode* stellaParser::VariantContext::Surrogate_id_SYMB_12() {
  return getToken(stellaParser::Surrogate_id_SYMB_12, 0);
}

tree::TerminalNode* stellaParser::VariantContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

tree::TerminalNode* stellaParser::VariantContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

stellaParser::ExprContext* stellaParser::VariantContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::VariantContext::VariantContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::VariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitVariant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstTrueContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ConstTrueContext::Surrogate_id_SYMB_60() {
  return getToken(stellaParser::Surrogate_id_SYMB_60, 0);
}

stellaParser::ConstTrueContext::ConstTrueContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ConstTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitConstTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubtractContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::SubtractContext::Surrogate_id_SYMB_22() {
  return getToken(stellaParser::Surrogate_id_SYMB_22, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::SubtractContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::SubtractContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::SubtractContext::SubtractContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::SubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitSubtract(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeCastContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeCastContext::CAST() {
  return getToken(stellaParser::CAST, 0);
}

tree::TerminalNode* stellaParser::TypeCastContext::Surrogate_id_SYMB_36() {
  return getToken(stellaParser::Surrogate_id_SYMB_36, 0);
}

stellaParser::ExprContext* stellaParser::TypeCastContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::StellatypeContext* stellaParser::TypeCastContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::TypeCastContext::TypeCastContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeCastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::IfContext::Surrogate_id_SYMB_45() {
  return getToken(stellaParser::Surrogate_id_SYMB_45, 0);
}

tree::TerminalNode* stellaParser::IfContext::Surrogate_id_SYMB_58() {
  return getToken(stellaParser::Surrogate_id_SYMB_58, 0);
}

tree::TerminalNode* stellaParser::IfContext::Surrogate_id_SYMB_39() {
  return getToken(stellaParser::Surrogate_id_SYMB_39, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::IfContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::IfContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::IfContext::IfContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ApplicationContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ApplicationContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::ApplicationContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::ApplicationContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::ApplicationContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::ApplicationContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::ApplicationContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::ApplicationContext::ApplicationContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ApplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitApplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DerefContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DerefContext::Surrogate_id_SYMB_23() {
  return getToken(stellaParser::Surrogate_id_SYMB_23, 0);
}

stellaParser::ExprContext* stellaParser::DerefContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::DerefContext::DerefContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DerefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDeref(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IsEmptyContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::IsEmptyContext::Surrogate_id_SYMB_27() {
  return getToken(stellaParser::Surrogate_id_SYMB_27, 0);
}

tree::TerminalNode* stellaParser::IsEmptyContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::IsEmptyContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::IsEmptyContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::IsEmptyContext::IsEmptyContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::IsEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitIsEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PanicContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PanicContext::PANIC() {
  return getToken(stellaParser::PANIC, 0);
}

stellaParser::PanicContext::PanicContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PanicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPanic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessThanOrEqualContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LessThanOrEqualContext::Surrogate_id_SYMB_16() {
  return getToken(stellaParser::Surrogate_id_SYMB_16, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::LessThanOrEqualContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::LessThanOrEqualContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::LessThanOrEqualContext::LessThanOrEqualContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LessThanOrEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLessThanOrEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SuccContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::SuccContext::Surrogate_id_SYMB_57() {
  return getToken(stellaParser::Surrogate_id_SYMB_57, 0);
}

tree::TerminalNode* stellaParser::SuccContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::SuccContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::SuccContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::SuccContext::SuccContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::SuccContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitSucc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InlContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::InlContext::Surrogate_id_SYMB_47() {
  return getToken(stellaParser::Surrogate_id_SYMB_47, 0);
}

tree::TerminalNode* stellaParser::InlContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::InlContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::InlContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::InlContext::InlContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::InlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitInl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GreaterThanOrEqualContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::GreaterThanOrEqualContext::Surrogate_id_SYMB_18() {
  return getToken(stellaParser::Surrogate_id_SYMB_18, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::GreaterThanOrEqualContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::GreaterThanOrEqualContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::GreaterThanOrEqualContext::GreaterThanOrEqualContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::GreaterThanOrEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitGreaterThanOrEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InrContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::InrContext::Surrogate_id_SYMB_49() {
  return getToken(stellaParser::Surrogate_id_SYMB_49, 0);
}

tree::TerminalNode* stellaParser::InrContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::InrContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::InrContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::InrContext::InrContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::InrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitInr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MatchContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::MatchContext::Surrogate_id_SYMB_53() {
  return getToken(stellaParser::Surrogate_id_SYMB_53, 0);
}

tree::TerminalNode* stellaParser::MatchContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::MatchContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

stellaParser::ExprContext* stellaParser::MatchContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<stellaParser::MatchCaseContext *> stellaParser::MatchContext::matchCase() {
  return getRuleContexts<stellaParser::MatchCaseContext>();
}

stellaParser::MatchCaseContext* stellaParser::MatchContext::matchCase(size_t i) {
  return getRuleContext<stellaParser::MatchCaseContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::MatchContext::Surrogate_id_SYMB_10() {
  return getTokens(stellaParser::Surrogate_id_SYMB_10);
}

tree::TerminalNode* stellaParser::MatchContext::Surrogate_id_SYMB_10(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_10, i);
}

stellaParser::MatchContext::MatchContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::MatchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitMatch(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicNotContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LogicNotContext::Surrogate_id_SYMB_54() {
  return getToken(stellaParser::Surrogate_id_SYMB_54, 0);
}

tree::TerminalNode* stellaParser::LogicNotContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::LogicNotContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::LogicNotContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::LogicNotContext::LogicNotContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LogicNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLogicNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisedExprContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ParenthesisedExprContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::ParenthesisedExprContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::ParenthesisedExprContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::ParenthesisedExprContext::ParenthesisedExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ParenthesisedExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitParenthesisedExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TailContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TailContext::Surrogate_id_SYMB_28() {
  return getToken(stellaParser::Surrogate_id_SYMB_28, 0);
}

tree::TerminalNode* stellaParser::TailContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::TailContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::TailContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::TailContext::TailContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTail(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RecordContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::RecordContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::RecordContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<stellaParser::BindingContext *> stellaParser::RecordContext::binding() {
  return getRuleContexts<stellaParser::BindingContext>();
}

stellaParser::BindingContext* stellaParser::RecordContext::binding(size_t i) {
  return getRuleContext<stellaParser::BindingContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::RecordContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::RecordContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::RecordContext::RecordContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::RecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitRecord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicAndContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LogicAndContext::Surrogate_id_SYMB_35() {
  return getToken(stellaParser::Surrogate_id_SYMB_35, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::LogicAndContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::LogicAndContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::LogicAndContext::LogicAndContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LogicAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLogicAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeApplicationContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeApplicationContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::TypeApplicationContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

stellaParser::ExprContext* stellaParser::TypeApplicationContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<stellaParser::StellatypeContext *> stellaParser::TypeApplicationContext::stellatype() {
  return getRuleContexts<stellaParser::StellatypeContext>();
}

stellaParser::StellatypeContext* stellaParser::TypeApplicationContext::stellatype(size_t i) {
  return getRuleContext<stellaParser::StellatypeContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::TypeApplicationContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TypeApplicationContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TypeApplicationContext::TypeApplicationContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeApplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeApplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LetRecContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LetRecContext::Surrogate_id_SYMB_52() {
  return getToken(stellaParser::Surrogate_id_SYMB_52, 0);
}

tree::TerminalNode* stellaParser::LetRecContext::Surrogate_id_SYMB_46() {
  return getToken(stellaParser::Surrogate_id_SYMB_46, 0);
}

std::vector<stellaParser::PatternBindingContext *> stellaParser::LetRecContext::patternBinding() {
  return getRuleContexts<stellaParser::PatternBindingContext>();
}

stellaParser::PatternBindingContext* stellaParser::LetRecContext::patternBinding(size_t i) {
  return getRuleContext<stellaParser::PatternBindingContext>(i);
}

stellaParser::ExprContext* stellaParser::LetRecContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> stellaParser::LetRecContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::LetRecContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::LetRecContext::LetRecContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LetRecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLetRec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicOrContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LogicOrContext::Surrogate_id_SYMB_55() {
  return getToken(stellaParser::Surrogate_id_SYMB_55, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::LogicOrContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::LogicOrContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::LogicOrContext::LogicOrContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LogicOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLogicOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TryWithContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TryWithContext::TRY() {
  return getToken(stellaParser::TRY, 0);
}

std::vector<tree::TerminalNode *> stellaParser::TryWithContext::Surrogate_id_SYMB_4() {
  return getTokens(stellaParser::Surrogate_id_SYMB_4);
}

tree::TerminalNode* stellaParser::TryWithContext::Surrogate_id_SYMB_4(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_4, i);
}

std::vector<tree::TerminalNode *> stellaParser::TryWithContext::Surrogate_id_SYMB_5() {
  return getTokens(stellaParser::Surrogate_id_SYMB_5);
}

tree::TerminalNode* stellaParser::TryWithContext::Surrogate_id_SYMB_5(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_5, i);
}

tree::TerminalNode* stellaParser::TryWithContext::Surrogate_id_SYMB_64() {
  return getToken(stellaParser::Surrogate_id_SYMB_64, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::TryWithContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::TryWithContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::TryWithContext::TryWithContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TryWithContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTryWith(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PredContext::Surrogate_id_SYMB_29() {
  return getToken(stellaParser::Surrogate_id_SYMB_29, 0);
}

tree::TerminalNode* stellaParser::PredContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::PredContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::PredContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::PredContext::PredContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PredContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPred(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeAscContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeAscContext::Surrogate_id_SYMB_36() {
  return getToken(stellaParser::Surrogate_id_SYMB_36, 0);
}

stellaParser::ExprContext* stellaParser::TypeAscContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::StellatypeContext* stellaParser::TypeAscContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::TypeAscContext::TypeAscContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeAscContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeAsc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NatRecContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::NatRecContext::Surrogate_id_SYMB_31() {
  return getToken(stellaParser::Surrogate_id_SYMB_31, 0);
}

tree::TerminalNode* stellaParser::NatRecContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

std::vector<tree::TerminalNode *> stellaParser::NatRecContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::NatRecContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

tree::TerminalNode* stellaParser::NatRecContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::NatRecContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::NatRecContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::NatRecContext::NatRecContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::NatRecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitNatRec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnfoldContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::UnfoldContext::Surrogate_id_SYMB_62() {
  return getToken(stellaParser::Surrogate_id_SYMB_62, 0);
}

tree::TerminalNode* stellaParser::UnfoldContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::UnfoldContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

stellaParser::StellatypeContext* stellaParser::UnfoldContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::ExprContext* stellaParser::UnfoldContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::UnfoldContext::UnfoldContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::UnfoldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitUnfold(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RefContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::RefContext::REFERENCE() {
  return getToken(stellaParser::REFERENCE, 0);
}

tree::TerminalNode* stellaParser::RefContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::RefContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::RefContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::RefContext::RefContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::RefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DotTupleContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::DotTupleContext::Surrogate_id_SYMB_25() {
  return getToken(stellaParser::Surrogate_id_SYMB_25, 0);
}

stellaParser::ExprContext* stellaParser::DotTupleContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

tree::TerminalNode* stellaParser::DotTupleContext::INTEGER() {
  return getToken(stellaParser::INTEGER, 0);
}

stellaParser::DotTupleContext::DotTupleContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::DotTupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitDotTuple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FixContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::FixContext::Surrogate_id_SYMB_42() {
  return getToken(stellaParser::Surrogate_id_SYMB_42, 0);
}

tree::TerminalNode* stellaParser::FixContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::FixContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::ExprContext* stellaParser::FixContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

stellaParser::FixContext::FixContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::FixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitFix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LetContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::LetContext::Surrogate_id_SYMB_51() {
  return getToken(stellaParser::Surrogate_id_SYMB_51, 0);
}

tree::TerminalNode* stellaParser::LetContext::Surrogate_id_SYMB_46() {
  return getToken(stellaParser::Surrogate_id_SYMB_46, 0);
}

std::vector<stellaParser::PatternBindingContext *> stellaParser::LetContext::patternBinding() {
  return getRuleContexts<stellaParser::PatternBindingContext>();
}

stellaParser::PatternBindingContext* stellaParser::LetContext::patternBinding(size_t i) {
  return getRuleContext<stellaParser::PatternBindingContext>(i);
}

stellaParser::ExprContext* stellaParser::LetContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> stellaParser::LetContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::LetContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::LetContext::LetContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::LetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLet(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::AssignContext::ASSIGN() {
  return getToken(stellaParser::ASSIGN, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::AssignContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::AssignContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::AssignContext::AssignContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TupleContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TupleContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::TupleContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::TupleContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::TupleContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::TupleContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TupleContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TupleContext::TupleContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTuple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConsListContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ConsListContext::Surrogate_id_SYMB_37() {
  return getToken(stellaParser::Surrogate_id_SYMB_37, 0);
}

tree::TerminalNode* stellaParser::ConsListContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::ConsListContext::Surrogate_id_SYMB_0() {
  return getToken(stellaParser::Surrogate_id_SYMB_0, 0);
}

tree::TerminalNode* stellaParser::ConsListContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

std::vector<stellaParser::ExprContext *> stellaParser::ConsListContext::expr() {
  return getRuleContexts<stellaParser::ExprContext>();
}

stellaParser::ExprContext* stellaParser::ConsListContext::expr(size_t i) {
  return getRuleContext<stellaParser::ExprContext>(i);
}

stellaParser::ConsListContext::ConsListContext(ExprContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ConsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitConsList(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::ExprContext* stellaParser::expr() {
   return expr(0);
}

stellaParser::ExprContext* stellaParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  stellaParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  stellaParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, stellaParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(455);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(199);
      match(stellaParser::Surrogate_id_SYMB_60);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ConstFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(200);
      match(stellaParser::Surrogate_id_SYMB_41);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ConstUnitContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      match(stellaParser::Surrogate_id_SYMB_63);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ConstIntContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(202);
      antlrcpp::downCast<ConstIntContext *>(_localctx)->n = match(stellaParser::INTEGER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ConstMemoryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(203);
      antlrcpp::downCast<ConstMemoryContext *>(_localctx)->mem = match(stellaParser::MemoryAddress);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(204);
      antlrcpp::downCast<VarContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PanicContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      match(stellaParser::PANIC);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ThrowContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(206);
      match(stellaParser::THROW);
      setState(207);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(208);
      antlrcpp::downCast<ThrowContext *>(_localctx)->expr_ = expr(0);
      setState(209);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<TryCatchContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(211);
      match(stellaParser::TRY);
      setState(212);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(213);
      antlrcpp::downCast<TryCatchContext *>(_localctx)->tryExpr = expr(0);
      setState(214);
      match(stellaParser::Surrogate_id_SYMB_5);
      setState(215);
      match(stellaParser::CATCH);
      setState(216);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(217);
      antlrcpp::downCast<TryCatchContext *>(_localctx)->pat = pattern(0);
      setState(218);
      match(stellaParser::Surrogate_id_SYMB_9);
      setState(219);
      antlrcpp::downCast<TryCatchContext *>(_localctx)->fallbackExpr = expr(0);
      setState(220);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<TryCastAsContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(222);
      match(stellaParser::TRY);
      setState(223);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(224);
      antlrcpp::downCast<TryCastAsContext *>(_localctx)->tryExpr = expr(0);
      setState(225);
      match(stellaParser::Surrogate_id_SYMB_5);
      setState(226);
      match(stellaParser::CAST);
      setState(227);
      match(stellaParser::Surrogate_id_SYMB_36);
      setState(228);
      antlrcpp::downCast<TryCastAsContext *>(_localctx)->type_ = stellatype(0);
      setState(229);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(230);
      antlrcpp::downCast<TryCastAsContext *>(_localctx)->pattern_ = pattern(0);
      setState(231);
      match(stellaParser::Surrogate_id_SYMB_9);
      setState(232);
      antlrcpp::downCast<TryCastAsContext *>(_localctx)->expr_ = expr(0);
      setState(233);
      match(stellaParser::Surrogate_id_SYMB_5);
      setState(234);
      match(stellaParser::Surrogate_id_SYMB_64);
      setState(235);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(236);
      antlrcpp::downCast<TryCastAsContext *>(_localctx)->fallbackExpr = expr(0);
      setState(237);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<TryWithContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(239);
      match(stellaParser::TRY);
      setState(240);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(241);
      antlrcpp::downCast<TryWithContext *>(_localctx)->tryExpr = expr(0);
      setState(242);
      match(stellaParser::Surrogate_id_SYMB_5);
      setState(243);
      match(stellaParser::Surrogate_id_SYMB_64);
      setState(244);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(245);
      antlrcpp::downCast<TryWithContext *>(_localctx)->fallbackExpr = expr(0);
      setState(246);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<InlContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(248);
      match(stellaParser::Surrogate_id_SYMB_47);
      setState(249);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(250);
      antlrcpp::downCast<InlContext *>(_localctx)->expr_ = expr(0);
      setState(251);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<InrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(253);
      match(stellaParser::Surrogate_id_SYMB_49);
      setState(254);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(255);
      antlrcpp::downCast<InrContext *>(_localctx)->expr_ = expr(0);
      setState(256);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<ConsListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(258);
      match(stellaParser::Surrogate_id_SYMB_37);
      setState(259);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(260);
      antlrcpp::downCast<ConsListContext *>(_localctx)->head = expr(0);
      setState(261);
      match(stellaParser::Surrogate_id_SYMB_0);
      setState(262);
      antlrcpp::downCast<ConsListContext *>(_localctx)->tail = expr(0);
      setState(263);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<HeadContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(265);
      match(stellaParser::Surrogate_id_SYMB_26);
      setState(266);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(267);
      antlrcpp::downCast<HeadContext *>(_localctx)->list = expr(0);
      setState(268);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<IsEmptyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(270);
      match(stellaParser::Surrogate_id_SYMB_27);
      setState(271);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(272);
      antlrcpp::downCast<IsEmptyContext *>(_localctx)->list = expr(0);
      setState(273);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 17: {
      _localctx = _tracker.createInstance<TailContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(275);
      match(stellaParser::Surrogate_id_SYMB_28);
      setState(276);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(277);
      antlrcpp::downCast<TailContext *>(_localctx)->list = expr(0);
      setState(278);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 18: {
      _localctx = _tracker.createInstance<SuccContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(280);
      match(stellaParser::Surrogate_id_SYMB_57);
      setState(281);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(282);
      antlrcpp::downCast<SuccContext *>(_localctx)->n = expr(0);
      setState(283);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 19: {
      _localctx = _tracker.createInstance<LogicNotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(285);
      match(stellaParser::Surrogate_id_SYMB_54);
      setState(286);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(287);
      antlrcpp::downCast<LogicNotContext *>(_localctx)->expr_ = expr(0);
      setState(288);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 20: {
      _localctx = _tracker.createInstance<PredContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(290);
      match(stellaParser::Surrogate_id_SYMB_29);
      setState(291);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(292);
      antlrcpp::downCast<PredContext *>(_localctx)->n = expr(0);
      setState(293);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 21: {
      _localctx = _tracker.createInstance<IsZeroContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(295);
      match(stellaParser::Surrogate_id_SYMB_30);
      setState(296);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(297);
      antlrcpp::downCast<IsZeroContext *>(_localctx)->n = expr(0);
      setState(298);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 22: {
      _localctx = _tracker.createInstance<FixContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(300);
      match(stellaParser::Surrogate_id_SYMB_42);
      setState(301);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(302);
      antlrcpp::downCast<FixContext *>(_localctx)->expr_ = expr(0);
      setState(303);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 23: {
      _localctx = _tracker.createInstance<NatRecContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(305);
      match(stellaParser::Surrogate_id_SYMB_31);
      setState(306);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(307);
      antlrcpp::downCast<NatRecContext *>(_localctx)->n = expr(0);
      setState(308);
      match(stellaParser::Surrogate_id_SYMB_0);
      setState(309);
      antlrcpp::downCast<NatRecContext *>(_localctx)->initial = expr(0);
      setState(310);
      match(stellaParser::Surrogate_id_SYMB_0);
      setState(311);
      antlrcpp::downCast<NatRecContext *>(_localctx)->step = expr(0);
      setState(312);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 24: {
      _localctx = _tracker.createInstance<FoldContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(314);
      match(stellaParser::Surrogate_id_SYMB_44);
      setState(315);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(316);
      antlrcpp::downCast<FoldContext *>(_localctx)->type_ = stellatype(0);
      setState(317);
      match(stellaParser::Surrogate_id_SYMB_14);
      setState(318);
      antlrcpp::downCast<FoldContext *>(_localctx)->expr_ = expr(34);
      break;
    }

    case 25: {
      _localctx = _tracker.createInstance<UnfoldContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(320);
      match(stellaParser::Surrogate_id_SYMB_62);
      setState(321);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(322);
      antlrcpp::downCast<UnfoldContext *>(_localctx)->type_ = stellatype(0);
      setState(323);
      match(stellaParser::Surrogate_id_SYMB_14);
      setState(324);
      antlrcpp::downCast<UnfoldContext *>(_localctx)->expr_ = expr(33);
      break;
    }

    case 26: {
      _localctx = _tracker.createInstance<RefContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(326);
      match(stellaParser::REFERENCE);
      setState(327);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(328);
      antlrcpp::downCast<RefContext *>(_localctx)->expr_ = expr(0);
      setState(329);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 27: {
      _localctx = _tracker.createInstance<DerefContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(331);
      match(stellaParser::Surrogate_id_SYMB_23);
      setState(332);
      antlrcpp::downCast<DerefContext *>(_localctx)->expr_ = expr(26);
      break;
    }

    case 28: {
      _localctx = _tracker.createInstance<AbstractionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(333);
      match(stellaParser::Surrogate_id_SYMB_43);
      setState(334);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(343);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::StellaIdent) {
        setState(335);
        antlrcpp::downCast<AbstractionContext *>(_localctx)->paramDeclContext = paramDecl();
        antlrcpp::downCast<AbstractionContext *>(_localctx)->paramDecls.push_back(antlrcpp::downCast<AbstractionContext *>(_localctx)->paramDeclContext);
        setState(340);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(336);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(337);
          antlrcpp::downCast<AbstractionContext *>(_localctx)->paramDeclContext = paramDecl();
          antlrcpp::downCast<AbstractionContext *>(_localctx)->paramDecls.push_back(antlrcpp::downCast<AbstractionContext *>(_localctx)->paramDeclContext);
          setState(342);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(345);
      match(stellaParser::Surrogate_id_SYMB_3);
      setState(346);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(347);
      match(stellaParser::Surrogate_id_SYMB_56);
      setState(348);
      antlrcpp::downCast<AbstractionContext *>(_localctx)->returnExpr = expr(0);
      setState(349);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 29: {
      _localctx = _tracker.createInstance<TupleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(351);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(360);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -6560200659402993624) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 13700865) != 0)) {
        setState(352);
        antlrcpp::downCast<TupleContext *>(_localctx)->exprContext = expr(0);
        antlrcpp::downCast<TupleContext *>(_localctx)->exprs.push_back(antlrcpp::downCast<TupleContext *>(_localctx)->exprContext);
        setState(357);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(353);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(354);
          antlrcpp::downCast<TupleContext *>(_localctx)->exprContext = expr(0);
          antlrcpp::downCast<TupleContext *>(_localctx)->exprs.push_back(antlrcpp::downCast<TupleContext *>(_localctx)->exprContext);
          setState(359);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(362);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 30: {
      _localctx = _tracker.createInstance<RecordContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(363);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(364);
      antlrcpp::downCast<RecordContext *>(_localctx)->bindingContext = binding();
      antlrcpp::downCast<RecordContext *>(_localctx)->bindings.push_back(antlrcpp::downCast<RecordContext *>(_localctx)->bindingContext);
      setState(369);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_0) {
        setState(365);
        match(stellaParser::Surrogate_id_SYMB_0);
        setState(366);
        antlrcpp::downCast<RecordContext *>(_localctx)->bindingContext = binding();
        antlrcpp::downCast<RecordContext *>(_localctx)->bindings.push_back(antlrcpp::downCast<RecordContext *>(_localctx)->bindingContext);
        setState(371);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(372);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 31: {
      _localctx = _tracker.createInstance<VariantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(374);
      match(stellaParser::Surrogate_id_SYMB_11);
      setState(375);
      antlrcpp::downCast<VariantContext *>(_localctx)->label = match(stellaParser::StellaIdent);
      setState(378);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::Surrogate_id_SYMB_6) {
        setState(376);
        match(stellaParser::Surrogate_id_SYMB_6);
        setState(377);
        antlrcpp::downCast<VariantContext *>(_localctx)->rhs = expr(0);
      }
      setState(380);
      match(stellaParser::Surrogate_id_SYMB_12);
      break;
    }

    case 32: {
      _localctx = _tracker.createInstance<MatchContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(381);
      match(stellaParser::Surrogate_id_SYMB_53);
      setState(382);
      antlrcpp::downCast<MatchContext *>(_localctx)->expr_ = expr(0);
      setState(383);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(392);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2595485433173397544) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 9437185) != 0)) {
        setState(384);
        antlrcpp::downCast<MatchContext *>(_localctx)->matchCaseContext = matchCase();
        antlrcpp::downCast<MatchContext *>(_localctx)->cases.push_back(antlrcpp::downCast<MatchContext *>(_localctx)->matchCaseContext);
        setState(389);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_10) {
          setState(385);
          match(stellaParser::Surrogate_id_SYMB_10);
          setState(386);
          antlrcpp::downCast<MatchContext *>(_localctx)->matchCaseContext = matchCase();
          antlrcpp::downCast<MatchContext *>(_localctx)->cases.push_back(antlrcpp::downCast<MatchContext *>(_localctx)->matchCaseContext);
          setState(391);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(394);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 33: {
      _localctx = _tracker.createInstance<ListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(396);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(405);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -6560200659402993624) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 13700865) != 0)) {
        setState(397);
        antlrcpp::downCast<ListContext *>(_localctx)->exprContext = expr(0);
        antlrcpp::downCast<ListContext *>(_localctx)->exprs.push_back(antlrcpp::downCast<ListContext *>(_localctx)->exprContext);
        setState(402);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(398);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(399);
          antlrcpp::downCast<ListContext *>(_localctx)->exprContext = expr(0);
          antlrcpp::downCast<ListContext *>(_localctx)->exprs.push_back(antlrcpp::downCast<ListContext *>(_localctx)->exprContext);
          setState(404);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(407);
      match(stellaParser::Surrogate_id_SYMB_14);
      break;
    }

    case 34: {
      _localctx = _tracker.createInstance<IfContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(408);
      match(stellaParser::Surrogate_id_SYMB_45);
      setState(409);
      antlrcpp::downCast<IfContext *>(_localctx)->condition = expr(0);
      setState(410);
      match(stellaParser::Surrogate_id_SYMB_58);
      setState(411);
      antlrcpp::downCast<IfContext *>(_localctx)->thenExpr = expr(0);
      setState(412);
      match(stellaParser::Surrogate_id_SYMB_39);
      setState(413);
      antlrcpp::downCast<IfContext *>(_localctx)->elseExpr = expr(7);
      break;
    }

    case 35: {
      _localctx = _tracker.createInstance<LetContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(415);
      match(stellaParser::Surrogate_id_SYMB_51);
      setState(416);
      antlrcpp::downCast<LetContext *>(_localctx)->patternBindingContext = patternBinding();
      antlrcpp::downCast<LetContext *>(_localctx)->patternBindings.push_back(antlrcpp::downCast<LetContext *>(_localctx)->patternBindingContext);
      setState(421);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_0) {
        setState(417);
        match(stellaParser::Surrogate_id_SYMB_0);
        setState(418);
        antlrcpp::downCast<LetContext *>(_localctx)->patternBindingContext = patternBinding();
        antlrcpp::downCast<LetContext *>(_localctx)->patternBindings.push_back(antlrcpp::downCast<LetContext *>(_localctx)->patternBindingContext);
        setState(423);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(424);
      match(stellaParser::Surrogate_id_SYMB_46);
      setState(425);
      antlrcpp::downCast<LetContext *>(_localctx)->body = expr(5);
      break;
    }

    case 36: {
      _localctx = _tracker.createInstance<LetRecContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(427);
      match(stellaParser::Surrogate_id_SYMB_52);
      setState(428);
      antlrcpp::downCast<LetRecContext *>(_localctx)->patternBindingContext = patternBinding();
      antlrcpp::downCast<LetRecContext *>(_localctx)->patternBindings.push_back(antlrcpp::downCast<LetRecContext *>(_localctx)->patternBindingContext);
      setState(433);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_0) {
        setState(429);
        match(stellaParser::Surrogate_id_SYMB_0);
        setState(430);
        antlrcpp::downCast<LetRecContext *>(_localctx)->patternBindingContext = patternBinding();
        antlrcpp::downCast<LetRecContext *>(_localctx)->patternBindings.push_back(antlrcpp::downCast<LetRecContext *>(_localctx)->patternBindingContext);
        setState(435);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(436);
      match(stellaParser::Surrogate_id_SYMB_46);
      setState(437);
      antlrcpp::downCast<LetRecContext *>(_localctx)->body = expr(4);
      break;
    }

    case 37: {
      _localctx = _tracker.createInstance<TypeAbstractionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(439);
      match(stellaParser::GENERIC);
      setState(440);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(441);
      antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->stellaidentToken = match(stellaParser::StellaIdent);
      antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->generics.push_back(antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->stellaidentToken);
      setState(446);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_0) {
        setState(442);
        match(stellaParser::Surrogate_id_SYMB_0);
        setState(443);
        antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->stellaidentToken = match(stellaParser::StellaIdent);
        antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->generics.push_back(antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->stellaidentToken);
        setState(448);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(449);
      match(stellaParser::Surrogate_id_SYMB_14);
      setState(450);
      antlrcpp::downCast<TypeAbstractionContext *>(_localctx)->expr_ = expr(3);
      break;
    }

    case 38: {
      _localctx = _tracker.createInstance<ParenthesisedExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(451);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(452);
      antlrcpp::downCast<ParenthesisedExprContext *>(_localctx)->expr_ = expr(0);
      setState(453);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(541);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(539);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplyContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(457);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(458);
          match(stellaParser::Surrogate_id_SYMB_23);
          setState(459);
          antlrcpp::downCast<MultiplyContext *>(_localctx)->right = expr(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivideContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(460);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(461);
          match(stellaParser::Surrogate_id_SYMB_24);
          setState(462);
          antlrcpp::downCast<DivideContext *>(_localctx)->right = expr(30);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(463);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(464);
          match(stellaParser::Surrogate_id_SYMB_35);
          setState(465);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->right = expr(29);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(466);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(467);
          match(stellaParser::Surrogate_id_SYMB_21);
          setState(468);
          antlrcpp::downCast<AddContext *>(_localctx)->right = expr(26);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubtractContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(469);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(470);
          match(stellaParser::Surrogate_id_SYMB_22);
          setState(471);
          antlrcpp::downCast<SubtractContext *>(_localctx)->right = expr(25);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(472);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(473);
          match(stellaParser::Surrogate_id_SYMB_55);
          setState(474);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->right = expr(24);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LessThanContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(475);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(476);
          match(stellaParser::Surrogate_id_SYMB_15);
          setState(477);
          antlrcpp::downCast<LessThanContext *>(_localctx)->right = expr(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<LessThanOrEqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(478);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(479);
          match(stellaParser::Surrogate_id_SYMB_16);
          setState(480);
          antlrcpp::downCast<LessThanOrEqualContext *>(_localctx)->right = expr(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<GreaterThanContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(481);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(482);
          match(stellaParser::Surrogate_id_SYMB_17);
          setState(483);
          antlrcpp::downCast<GreaterThanContext *>(_localctx)->right = expr(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<GreaterThanOrEqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(484);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(485);
          match(stellaParser::Surrogate_id_SYMB_18);
          setState(486);
          antlrcpp::downCast<GreaterThanOrEqualContext *>(_localctx)->right = expr(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<EqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(487);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(488);
          match(stellaParser::Surrogate_id_SYMB_19);
          setState(489);
          antlrcpp::downCast<EqualContext *>(_localctx)->right = expr(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NotEqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(490);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(491);
          match(stellaParser::Surrogate_id_SYMB_20);
          setState(492);
          antlrcpp::downCast<NotEqualContext *>(_localctx)->right = expr(10);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<AssignContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(493);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(494);
          match(stellaParser::ASSIGN);
          setState(495);
          antlrcpp::downCast<AssignContext *>(_localctx)->rhs = expr(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<SequenceContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->expr1 = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(496);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(497);
          match(stellaParser::Surrogate_id_SYMB_1);
          setState(498);
          antlrcpp::downCast<SequenceContext *>(_localctx)->expr2 = expr(7);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<DotRecordContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->expr_ = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(499);

          if (!(precpred(_ctx, 59))) throw FailedPredicateException(this, "precpred(_ctx, 59)");
          setState(500);
          match(stellaParser::Surrogate_id_SYMB_25);
          setState(501);
          antlrcpp::downCast<DotRecordContext *>(_localctx)->label = match(stellaParser::StellaIdent);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<DotTupleContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->expr_ = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(502);

          if (!(precpred(_ctx, 58))) throw FailedPredicateException(this, "precpred(_ctx, 58)");
          setState(503);
          match(stellaParser::Surrogate_id_SYMB_25);
          setState(504);
          antlrcpp::downCast<DotTupleContext *>(_localctx)->index = match(stellaParser::INTEGER);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<ApplicationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->fun = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(505);

          if (!(precpred(_ctx, 32))) throw FailedPredicateException(this, "precpred(_ctx, 32)");
          setState(506);
          match(stellaParser::Surrogate_id_SYMB_2);
          setState(515);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & -6560200659402993624) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & 13700865) != 0)) {
            setState(507);
            antlrcpp::downCast<ApplicationContext *>(_localctx)->exprContext = expr(0);
            antlrcpp::downCast<ApplicationContext *>(_localctx)->args.push_back(antlrcpp::downCast<ApplicationContext *>(_localctx)->exprContext);
            setState(512);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == stellaParser::Surrogate_id_SYMB_0) {
              setState(508);
              match(stellaParser::Surrogate_id_SYMB_0);
              setState(509);
              antlrcpp::downCast<ApplicationContext *>(_localctx)->exprContext = expr(0);
              antlrcpp::downCast<ApplicationContext *>(_localctx)->args.push_back(antlrcpp::downCast<ApplicationContext *>(_localctx)->exprContext);
              setState(514);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(517);
          match(stellaParser::Surrogate_id_SYMB_3);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<TypeApplicationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->fun = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(518);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(519);
          match(stellaParser::Surrogate_id_SYMB_13);

          setState(520);
          antlrcpp::downCast<TypeApplicationContext *>(_localctx)->stellatypeContext = stellatype(0);
          antlrcpp::downCast<TypeApplicationContext *>(_localctx)->types.push_back(antlrcpp::downCast<TypeApplicationContext *>(_localctx)->stellatypeContext);
          setState(525);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == stellaParser::Surrogate_id_SYMB_0) {
            setState(521);
            match(stellaParser::Surrogate_id_SYMB_0);
            setState(522);
            antlrcpp::downCast<TypeApplicationContext *>(_localctx)->stellatypeContext = stellatype(0);
            antlrcpp::downCast<TypeApplicationContext *>(_localctx)->types.push_back(antlrcpp::downCast<TypeApplicationContext *>(_localctx)->stellatypeContext);
            setState(527);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(528);
          match(stellaParser::Surrogate_id_SYMB_14);
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<TypeAscContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->expr_ = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(530);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(531);
          match(stellaParser::Surrogate_id_SYMB_36);
          setState(532);
          antlrcpp::downCast<TypeAscContext *>(_localctx)->type_ = stellatype(0);
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<TypeCastContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->expr_ = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(533);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(534);
          match(stellaParser::CAST);
          setState(535);
          match(stellaParser::Surrogate_id_SYMB_36);
          setState(536);
          antlrcpp::downCast<TypeCastContext *>(_localctx)->type_ = stellatype(0);
          break;
        }

        case 21: {
          auto newContext = _tracker.createInstance<TerminatingSemicolonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->expr_ = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(537);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(538);
          match(stellaParser::Surrogate_id_SYMB_1);
          break;
        }

        default:
          break;
        } 
      }
      setState(543);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PatternBindingContext ------------------------------------------------------------------

stellaParser::PatternBindingContext::PatternBindingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::PatternBindingContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

stellaParser::PatternContext* stellaParser::PatternBindingContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::ExprContext* stellaParser::PatternBindingContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}


size_t stellaParser::PatternBindingContext::getRuleIndex() const {
  return stellaParser::RulePatternBinding;
}


std::any stellaParser::PatternBindingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternBinding(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::PatternBindingContext* stellaParser::patternBinding() {
  PatternBindingContext *_localctx = _tracker.createInstance<PatternBindingContext>(_ctx, getState());
  enterRule(_localctx, 20, stellaParser::RulePatternBinding);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    antlrcpp::downCast<PatternBindingContext *>(_localctx)->pat = pattern(0);
    setState(545);
    match(stellaParser::Surrogate_id_SYMB_6);
    setState(546);
    antlrcpp::downCast<PatternBindingContext *>(_localctx)->rhs = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BindingContext ------------------------------------------------------------------

stellaParser::BindingContext::BindingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::BindingContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

tree::TerminalNode* stellaParser::BindingContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::ExprContext* stellaParser::BindingContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}


size_t stellaParser::BindingContext::getRuleIndex() const {
  return stellaParser::RuleBinding;
}


std::any stellaParser::BindingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitBinding(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::BindingContext* stellaParser::binding() {
  BindingContext *_localctx = _tracker.createInstance<BindingContext>(_ctx, getState());
  enterRule(_localctx, 22, stellaParser::RuleBinding);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    antlrcpp::downCast<BindingContext *>(_localctx)->name = match(stellaParser::StellaIdent);
    setState(549);
    match(stellaParser::Surrogate_id_SYMB_6);
    setState(550);
    antlrcpp::downCast<BindingContext *>(_localctx)->rhs = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchCaseContext ------------------------------------------------------------------

stellaParser::MatchCaseContext::MatchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::MatchCaseContext::Surrogate_id_SYMB_9() {
  return getToken(stellaParser::Surrogate_id_SYMB_9, 0);
}

stellaParser::PatternContext* stellaParser::MatchCaseContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::ExprContext* stellaParser::MatchCaseContext::expr() {
  return getRuleContext<stellaParser::ExprContext>(0);
}


size_t stellaParser::MatchCaseContext::getRuleIndex() const {
  return stellaParser::RuleMatchCase;
}


std::any stellaParser::MatchCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitMatchCase(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::MatchCaseContext* stellaParser::matchCase() {
  MatchCaseContext *_localctx = _tracker.createInstance<MatchCaseContext>(_ctx, getState());
  enterRule(_localctx, 24, stellaParser::RuleMatchCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    antlrcpp::downCast<MatchCaseContext *>(_localctx)->pattern_ = pattern(0);
    setState(553);
    match(stellaParser::Surrogate_id_SYMB_9);
    setState(554);
    antlrcpp::downCast<MatchCaseContext *>(_localctx)->expr_ = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatternContext ------------------------------------------------------------------

stellaParser::PatternContext::PatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::PatternContext::getRuleIndex() const {
  return stellaParser::RulePattern;
}

void stellaParser::PatternContext::copyFrom(PatternContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PatternConsContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternConsContext::Surrogate_id_SYMB_37() {
  return getToken(stellaParser::Surrogate_id_SYMB_37, 0);
}

tree::TerminalNode* stellaParser::PatternConsContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::PatternConsContext::Surrogate_id_SYMB_0() {
  return getToken(stellaParser::Surrogate_id_SYMB_0, 0);
}

tree::TerminalNode* stellaParser::PatternConsContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

std::vector<stellaParser::PatternContext *> stellaParser::PatternConsContext::pattern() {
  return getRuleContexts<stellaParser::PatternContext>();
}

stellaParser::PatternContext* stellaParser::PatternConsContext::pattern(size_t i) {
  return getRuleContext<stellaParser::PatternContext>(i);
}

stellaParser::PatternConsContext::PatternConsContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternConsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternCons(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternTupleContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternTupleContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::PatternTupleContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<stellaParser::PatternContext *> stellaParser::PatternTupleContext::pattern() {
  return getRuleContexts<stellaParser::PatternContext>();
}

stellaParser::PatternContext* stellaParser::PatternTupleContext::pattern(size_t i) {
  return getRuleContext<stellaParser::PatternContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::PatternTupleContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::PatternTupleContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::PatternTupleContext::PatternTupleContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternTupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternTuple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternListContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternListContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::PatternListContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

std::vector<stellaParser::PatternContext *> stellaParser::PatternListContext::pattern() {
  return getRuleContexts<stellaParser::PatternContext>();
}

stellaParser::PatternContext* stellaParser::PatternListContext::pattern(size_t i) {
  return getRuleContext<stellaParser::PatternContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::PatternListContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::PatternListContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::PatternListContext::PatternListContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternRecordContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternRecordContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::PatternRecordContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<stellaParser::LabelledPatternContext *> stellaParser::PatternRecordContext::labelledPattern() {
  return getRuleContexts<stellaParser::LabelledPatternContext>();
}

stellaParser::LabelledPatternContext* stellaParser::PatternRecordContext::labelledPattern(size_t i) {
  return getRuleContext<stellaParser::LabelledPatternContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::PatternRecordContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::PatternRecordContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::PatternRecordContext::PatternRecordContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternRecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternRecord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternVariantContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternVariantContext::Surrogate_id_SYMB_11() {
  return getToken(stellaParser::Surrogate_id_SYMB_11, 0);
}

tree::TerminalNode* stellaParser::PatternVariantContext::Surrogate_id_SYMB_12() {
  return getToken(stellaParser::Surrogate_id_SYMB_12, 0);
}

tree::TerminalNode* stellaParser::PatternVariantContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

tree::TerminalNode* stellaParser::PatternVariantContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

stellaParser::PatternContext* stellaParser::PatternVariantContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::PatternVariantContext::PatternVariantContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternVariant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternAscContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternAscContext::Surrogate_id_SYMB_36() {
  return getToken(stellaParser::Surrogate_id_SYMB_36, 0);
}

stellaParser::PatternContext* stellaParser::PatternAscContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::StellatypeContext* stellaParser::PatternAscContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::PatternAscContext::PatternAscContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternAscContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternAsc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternIntContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternIntContext::INTEGER() {
  return getToken(stellaParser::INTEGER, 0);
}

stellaParser::PatternIntContext::PatternIntContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternInrContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternInrContext::Surrogate_id_SYMB_49() {
  return getToken(stellaParser::Surrogate_id_SYMB_49, 0);
}

tree::TerminalNode* stellaParser::PatternInrContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::PatternInrContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::PatternContext* stellaParser::PatternInrContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::PatternInrContext::PatternInrContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternInrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternInr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternTrueContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternTrueContext::Surrogate_id_SYMB_60() {
  return getToken(stellaParser::Surrogate_id_SYMB_60, 0);
}

stellaParser::PatternTrueContext::PatternTrueContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternInlContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternInlContext::Surrogate_id_SYMB_47() {
  return getToken(stellaParser::Surrogate_id_SYMB_47, 0);
}

tree::TerminalNode* stellaParser::PatternInlContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::PatternInlContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::PatternContext* stellaParser::PatternInlContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::PatternInlContext::PatternInlContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternInlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternInl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternVarContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternVarContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::PatternVarContext::PatternVarContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisedPatternContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::ParenthesisedPatternContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::ParenthesisedPatternContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::PatternContext* stellaParser::ParenthesisedPatternContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::ParenthesisedPatternContext::ParenthesisedPatternContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::ParenthesisedPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitParenthesisedPattern(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternSuccContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternSuccContext::Surrogate_id_SYMB_57() {
  return getToken(stellaParser::Surrogate_id_SYMB_57, 0);
}

tree::TerminalNode* stellaParser::PatternSuccContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::PatternSuccContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::PatternContext* stellaParser::PatternSuccContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::PatternSuccContext::PatternSuccContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternSuccContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternSucc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternFalseContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternFalseContext::Surrogate_id_SYMB_41() {
  return getToken(stellaParser::Surrogate_id_SYMB_41, 0);
}

stellaParser::PatternFalseContext::PatternFalseContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternUnitContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternUnitContext::Surrogate_id_SYMB_63() {
  return getToken(stellaParser::Surrogate_id_SYMB_63, 0);
}

stellaParser::PatternUnitContext::PatternUnitContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternUnit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternCastAsContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::PatternCastAsContext::CAST() {
  return getToken(stellaParser::CAST, 0);
}

tree::TerminalNode* stellaParser::PatternCastAsContext::Surrogate_id_SYMB_36() {
  return getToken(stellaParser::Surrogate_id_SYMB_36, 0);
}

stellaParser::PatternContext* stellaParser::PatternCastAsContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}

stellaParser::StellatypeContext* stellaParser::PatternCastAsContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::PatternCastAsContext::PatternCastAsContext(PatternContext *ctx) { copyFrom(ctx); }


std::any stellaParser::PatternCastAsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitPatternCastAs(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::PatternContext* stellaParser::pattern() {
   return pattern(0);
}

stellaParser::PatternContext* stellaParser::pattern(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  stellaParser::PatternContext *_localctx = _tracker.createInstance<PatternContext>(_ctx, parentState);
  stellaParser::PatternContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, stellaParser::RulePattern, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PatternVariantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(557);
      match(stellaParser::Surrogate_id_SYMB_11);
      setState(558);
      antlrcpp::downCast<PatternVariantContext *>(_localctx)->label = match(stellaParser::StellaIdent);
      setState(561);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::Surrogate_id_SYMB_6) {
        setState(559);
        match(stellaParser::Surrogate_id_SYMB_6);
        setState(560);
        antlrcpp::downCast<PatternVariantContext *>(_localctx)->pattern_ = pattern(0);
      }
      setState(563);
      match(stellaParser::Surrogate_id_SYMB_12);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PatternInlContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(564);
      match(stellaParser::Surrogate_id_SYMB_47);
      setState(565);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(566);
      antlrcpp::downCast<PatternInlContext *>(_localctx)->pattern_ = pattern(0);
      setState(567);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PatternInrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(569);
      match(stellaParser::Surrogate_id_SYMB_49);
      setState(570);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(571);
      antlrcpp::downCast<PatternInrContext *>(_localctx)->pattern_ = pattern(0);
      setState(572);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PatternTupleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(574);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(583);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2595485433173397544) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 9437185) != 0)) {
        setState(575);
        antlrcpp::downCast<PatternTupleContext *>(_localctx)->patternContext = pattern(0);
        antlrcpp::downCast<PatternTupleContext *>(_localctx)->patterns.push_back(antlrcpp::downCast<PatternTupleContext *>(_localctx)->patternContext);
        setState(580);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(576);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(577);
          antlrcpp::downCast<PatternTupleContext *>(_localctx)->patternContext = pattern(0);
          antlrcpp::downCast<PatternTupleContext *>(_localctx)->patterns.push_back(antlrcpp::downCast<PatternTupleContext *>(_localctx)->patternContext);
          setState(582);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(585);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PatternRecordContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(586);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(595);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::StellaIdent) {
        setState(587);
        antlrcpp::downCast<PatternRecordContext *>(_localctx)->labelledPatternContext = labelledPattern();
        antlrcpp::downCast<PatternRecordContext *>(_localctx)->patterns.push_back(antlrcpp::downCast<PatternRecordContext *>(_localctx)->labelledPatternContext);
        setState(592);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(588);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(589);
          antlrcpp::downCast<PatternRecordContext *>(_localctx)->labelledPatternContext = labelledPattern();
          antlrcpp::downCast<PatternRecordContext *>(_localctx)->patterns.push_back(antlrcpp::downCast<PatternRecordContext *>(_localctx)->labelledPatternContext);
          setState(594);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(597);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PatternListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(598);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(607);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2595485433173397544) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 9437185) != 0)) {
        setState(599);
        antlrcpp::downCast<PatternListContext *>(_localctx)->patternContext = pattern(0);
        antlrcpp::downCast<PatternListContext *>(_localctx)->patterns.push_back(antlrcpp::downCast<PatternListContext *>(_localctx)->patternContext);
        setState(604);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(600);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(601);
          antlrcpp::downCast<PatternListContext *>(_localctx)->patternContext = pattern(0);
          antlrcpp::downCast<PatternListContext *>(_localctx)->patterns.push_back(antlrcpp::downCast<PatternListContext *>(_localctx)->patternContext);
          setState(606);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(609);
      match(stellaParser::Surrogate_id_SYMB_14);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PatternConsContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(610);
      match(stellaParser::Surrogate_id_SYMB_37);
      setState(611);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(612);
      antlrcpp::downCast<PatternConsContext *>(_localctx)->head = pattern(0);
      setState(613);
      match(stellaParser::Surrogate_id_SYMB_0);
      setState(614);
      antlrcpp::downCast<PatternConsContext *>(_localctx)->tail = pattern(0);
      setState(615);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PatternFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(617);
      match(stellaParser::Surrogate_id_SYMB_41);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PatternTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(618);
      match(stellaParser::Surrogate_id_SYMB_60);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<PatternUnitContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(619);
      match(stellaParser::Surrogate_id_SYMB_63);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<PatternIntContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(620);
      antlrcpp::downCast<PatternIntContext *>(_localctx)->n = match(stellaParser::INTEGER);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<PatternSuccContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(621);
      match(stellaParser::Surrogate_id_SYMB_57);
      setState(622);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(623);
      antlrcpp::downCast<PatternSuccContext *>(_localctx)->pattern_ = pattern(0);
      setState(624);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<PatternVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(626);
      antlrcpp::downCast<PatternVarContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<ParenthesisedPatternContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(627);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(628);
      antlrcpp::downCast<ParenthesisedPatternContext *>(_localctx)->pattern_ = pattern(0);
      setState(629);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(642);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(640);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PatternAscContext>(_tracker.createInstance<PatternContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->pattern_ = previousContext;
          pushNewRecursionContext(newContext, startState, RulePattern);
          setState(633);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(634);
          match(stellaParser::Surrogate_id_SYMB_36);
          setState(635);
          antlrcpp::downCast<PatternAscContext *>(_localctx)->type_ = stellatype(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PatternCastAsContext>(_tracker.createInstance<PatternContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->pattern_ = previousContext;
          pushNewRecursionContext(newContext, startState, RulePattern);
          setState(636);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(637);
          match(stellaParser::CAST);
          setState(638);
          match(stellaParser::Surrogate_id_SYMB_36);
          setState(639);
          antlrcpp::downCast<PatternCastAsContext *>(_localctx)->type_ = stellatype(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(644);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LabelledPatternContext ------------------------------------------------------------------

stellaParser::LabelledPatternContext::LabelledPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::LabelledPatternContext::Surrogate_id_SYMB_6() {
  return getToken(stellaParser::Surrogate_id_SYMB_6, 0);
}

tree::TerminalNode* stellaParser::LabelledPatternContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::PatternContext* stellaParser::LabelledPatternContext::pattern() {
  return getRuleContext<stellaParser::PatternContext>(0);
}


size_t stellaParser::LabelledPatternContext::getRuleIndex() const {
  return stellaParser::RuleLabelledPattern;
}


std::any stellaParser::LabelledPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitLabelledPattern(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::LabelledPatternContext* stellaParser::labelledPattern() {
  LabelledPatternContext *_localctx = _tracker.createInstance<LabelledPatternContext>(_ctx, getState());
  enterRule(_localctx, 28, stellaParser::RuleLabelledPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    antlrcpp::downCast<LabelledPatternContext *>(_localctx)->label = match(stellaParser::StellaIdent);
    setState(646);
    match(stellaParser::Surrogate_id_SYMB_6);
    setState(647);
    antlrcpp::downCast<LabelledPatternContext *>(_localctx)->pattern_ = pattern(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StellatypeContext ------------------------------------------------------------------

stellaParser::StellatypeContext::StellatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t stellaParser::StellatypeContext::getRuleIndex() const {
  return stellaParser::RuleStellatype;
}

void stellaParser::StellatypeContext::copyFrom(StellatypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeTupleContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeTupleContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::TypeTupleContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<stellaParser::StellatypeContext *> stellaParser::TypeTupleContext::stellatype() {
  return getRuleContexts<stellaParser::StellatypeContext>();
}

stellaParser::StellatypeContext* stellaParser::TypeTupleContext::stellatype(size_t i) {
  return getRuleContext<stellaParser::StellatypeContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::TypeTupleContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TypeTupleContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TypeTupleContext::TypeTupleContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeTupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeTuple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeTopContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeTopContext::TOP_TYPE() {
  return getToken(stellaParser::TOP_TYPE, 0);
}

stellaParser::TypeTopContext::TypeTopContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeTopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeTop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeBoolContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeBoolContext::Surrogate_id_SYMB_32() {
  return getToken(stellaParser::Surrogate_id_SYMB_32, 0);
}

stellaParser::TypeBoolContext::TypeBoolContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeRefContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeRefContext::REF_TYPE() {
  return getToken(stellaParser::REF_TYPE, 0);
}

stellaParser::StellatypeContext* stellaParser::TypeRefContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::TypeRefContext::TypeRefContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeRecContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeRecContext::Surrogate_id_SYMB_65() {
  return getToken(stellaParser::Surrogate_id_SYMB_65, 0);
}

tree::TerminalNode* stellaParser::TypeRecContext::Surrogate_id_SYMB_25() {
  return getToken(stellaParser::Surrogate_id_SYMB_25, 0);
}

tree::TerminalNode* stellaParser::TypeRecContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::StellatypeContext* stellaParser::TypeRecContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::TypeRecContext::TypeRecContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeRecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeRec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeAutoContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeAutoContext::AUTO_TYPE() {
  return getToken(stellaParser::AUTO_TYPE, 0);
}

stellaParser::TypeAutoContext::TypeAutoContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeAutoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeAuto(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeSumContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeSumContext::Surrogate_id_SYMB_21() {
  return getToken(stellaParser::Surrogate_id_SYMB_21, 0);
}

std::vector<stellaParser::StellatypeContext *> stellaParser::TypeSumContext::stellatype() {
  return getRuleContexts<stellaParser::StellatypeContext>();
}

stellaParser::StellatypeContext* stellaParser::TypeSumContext::stellatype(size_t i) {
  return getRuleContext<stellaParser::StellatypeContext>(i);
}

stellaParser::TypeSumContext::TypeSumContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeSumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeSum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeVarContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeVarContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::TypeVarContext::TypeVarContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeVariantContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeVariantContext::Surrogate_id_SYMB_11() {
  return getToken(stellaParser::Surrogate_id_SYMB_11, 0);
}

tree::TerminalNode* stellaParser::TypeVariantContext::Surrogate_id_SYMB_12() {
  return getToken(stellaParser::Surrogate_id_SYMB_12, 0);
}

std::vector<stellaParser::VariantFieldTypeContext *> stellaParser::TypeVariantContext::variantFieldType() {
  return getRuleContexts<stellaParser::VariantFieldTypeContext>();
}

stellaParser::VariantFieldTypeContext* stellaParser::TypeVariantContext::variantFieldType(size_t i) {
  return getRuleContext<stellaParser::VariantFieldTypeContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::TypeVariantContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TypeVariantContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TypeVariantContext::TypeVariantContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeVariant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeUnitContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeUnitContext::Surrogate_id_SYMB_34() {
  return getToken(stellaParser::Surrogate_id_SYMB_34, 0);
}

stellaParser::TypeUnitContext::TypeUnitContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeUnit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeNatContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeNatContext::Surrogate_id_SYMB_33() {
  return getToken(stellaParser::Surrogate_id_SYMB_33, 0);
}

stellaParser::TypeNatContext::TypeNatContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeNatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeNat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeBottomContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeBottomContext::BOTTOM_TYPE() {
  return getToken(stellaParser::BOTTOM_TYPE, 0);
}

stellaParser::TypeBottomContext::TypeBottomContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeBottomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeBottom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeParensContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeParensContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::TypeParensContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

stellaParser::StellatypeContext* stellaParser::TypeParensContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::TypeParensContext::TypeParensContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeFunContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeFunContext::Surrogate_id_SYMB_43() {
  return getToken(stellaParser::Surrogate_id_SYMB_43, 0);
}

tree::TerminalNode* stellaParser::TypeFunContext::Surrogate_id_SYMB_2() {
  return getToken(stellaParser::Surrogate_id_SYMB_2, 0);
}

tree::TerminalNode* stellaParser::TypeFunContext::Surrogate_id_SYMB_3() {
  return getToken(stellaParser::Surrogate_id_SYMB_3, 0);
}

tree::TerminalNode* stellaParser::TypeFunContext::Surrogate_id_SYMB_8() {
  return getToken(stellaParser::Surrogate_id_SYMB_8, 0);
}

std::vector<stellaParser::StellatypeContext *> stellaParser::TypeFunContext::stellatype() {
  return getRuleContexts<stellaParser::StellatypeContext>();
}

stellaParser::StellatypeContext* stellaParser::TypeFunContext::stellatype(size_t i) {
  return getRuleContext<stellaParser::StellatypeContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::TypeFunContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TypeFunContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TypeFunContext::TypeFunContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeFunContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeFun(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeForAllContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeForAllContext::FORALL() {
  return getToken(stellaParser::FORALL, 0);
}

tree::TerminalNode* stellaParser::TypeForAllContext::Surrogate_id_SYMB_25() {
  return getToken(stellaParser::Surrogate_id_SYMB_25, 0);
}

stellaParser::StellatypeContext* stellaParser::TypeForAllContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

std::vector<tree::TerminalNode *> stellaParser::TypeForAllContext::StellaIdent() {
  return getTokens(stellaParser::StellaIdent);
}

tree::TerminalNode* stellaParser::TypeForAllContext::StellaIdent(size_t i) {
  return getToken(stellaParser::StellaIdent, i);
}

stellaParser::TypeForAllContext::TypeForAllContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeForAllContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeForAll(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeRecordContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeRecordContext::Surrogate_id_SYMB_4() {
  return getToken(stellaParser::Surrogate_id_SYMB_4, 0);
}

tree::TerminalNode* stellaParser::TypeRecordContext::Surrogate_id_SYMB_5() {
  return getToken(stellaParser::Surrogate_id_SYMB_5, 0);
}

std::vector<stellaParser::RecordFieldTypeContext *> stellaParser::TypeRecordContext::recordFieldType() {
  return getRuleContexts<stellaParser::RecordFieldTypeContext>();
}

stellaParser::RecordFieldTypeContext* stellaParser::TypeRecordContext::recordFieldType(size_t i) {
  return getRuleContext<stellaParser::RecordFieldTypeContext>(i);
}

std::vector<tree::TerminalNode *> stellaParser::TypeRecordContext::Surrogate_id_SYMB_0() {
  return getTokens(stellaParser::Surrogate_id_SYMB_0);
}

tree::TerminalNode* stellaParser::TypeRecordContext::Surrogate_id_SYMB_0(size_t i) {
  return getToken(stellaParser::Surrogate_id_SYMB_0, i);
}

stellaParser::TypeRecordContext::TypeRecordContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeRecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeRecord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeListContext ------------------------------------------------------------------

tree::TerminalNode* stellaParser::TypeListContext::Surrogate_id_SYMB_13() {
  return getToken(stellaParser::Surrogate_id_SYMB_13, 0);
}

tree::TerminalNode* stellaParser::TypeListContext::Surrogate_id_SYMB_14() {
  return getToken(stellaParser::Surrogate_id_SYMB_14, 0);
}

stellaParser::StellatypeContext* stellaParser::TypeListContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}

stellaParser::TypeListContext::TypeListContext(StellatypeContext *ctx) { copyFrom(ctx); }


std::any stellaParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::StellatypeContext* stellaParser::stellatype() {
   return stellatype(0);
}

stellaParser::StellatypeContext* stellaParser::stellatype(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  stellaParser::StellatypeContext *_localctx = _tracker.createInstance<StellatypeContext>(_ctx, parentState);
  stellaParser::StellatypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, stellaParser::RuleStellatype, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(730);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TypeBoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(650);
      match(stellaParser::Surrogate_id_SYMB_32);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<TypeNatContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(651);
      match(stellaParser::Surrogate_id_SYMB_33);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<TypeRefContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(652);
      match(stellaParser::REF_TYPE);
      setState(653);
      antlrcpp::downCast<TypeRefContext *>(_localctx)->type_ = stellatype(15);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<TypeFunContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(654);
      match(stellaParser::Surrogate_id_SYMB_43);
      setState(655);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(664);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 17652315607080) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & 309281) != 0)) {
        setState(656);
        antlrcpp::downCast<TypeFunContext *>(_localctx)->stellatypeContext = stellatype(0);
        antlrcpp::downCast<TypeFunContext *>(_localctx)->paramTypes.push_back(antlrcpp::downCast<TypeFunContext *>(_localctx)->stellatypeContext);
        setState(661);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(657);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(658);
          antlrcpp::downCast<TypeFunContext *>(_localctx)->stellatypeContext = stellatype(0);
          antlrcpp::downCast<TypeFunContext *>(_localctx)->paramTypes.push_back(antlrcpp::downCast<TypeFunContext *>(_localctx)->stellatypeContext);
          setState(663);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(666);
      match(stellaParser::Surrogate_id_SYMB_3);
      setState(667);
      match(stellaParser::Surrogate_id_SYMB_8);
      setState(668);
      antlrcpp::downCast<TypeFunContext *>(_localctx)->returnType = stellatype(13);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<TypeForAllContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(669);
      match(stellaParser::FORALL);
      setState(673);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::StellaIdent) {
        setState(670);
        antlrcpp::downCast<TypeForAllContext *>(_localctx)->stellaidentToken = match(stellaParser::StellaIdent);
        antlrcpp::downCast<TypeForAllContext *>(_localctx)->types.push_back(antlrcpp::downCast<TypeForAllContext *>(_localctx)->stellaidentToken);
        setState(675);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(676);
      match(stellaParser::Surrogate_id_SYMB_25);
      setState(677);
      antlrcpp::downCast<TypeForAllContext *>(_localctx)->type_ = stellatype(12);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<TypeRecContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(678);
      match(stellaParser::Surrogate_id_SYMB_65);
      setState(679);
      antlrcpp::downCast<TypeRecContext *>(_localctx)->var = match(stellaParser::StellaIdent);
      setState(680);
      match(stellaParser::Surrogate_id_SYMB_25);
      setState(681);
      antlrcpp::downCast<TypeRecContext *>(_localctx)->type_ = stellatype(11);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<TypeTupleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(682);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(691);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 17652315607080) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & 309281) != 0)) {
        setState(683);
        antlrcpp::downCast<TypeTupleContext *>(_localctx)->stellatypeContext = stellatype(0);
        antlrcpp::downCast<TypeTupleContext *>(_localctx)->types.push_back(antlrcpp::downCast<TypeTupleContext *>(_localctx)->stellatypeContext);
        setState(688);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(684);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(685);
          antlrcpp::downCast<TypeTupleContext *>(_localctx)->stellatypeContext = stellatype(0);
          antlrcpp::downCast<TypeTupleContext *>(_localctx)->types.push_back(antlrcpp::downCast<TypeTupleContext *>(_localctx)->stellatypeContext);
          setState(690);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(693);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<TypeRecordContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(694);
      match(stellaParser::Surrogate_id_SYMB_4);
      setState(695);
      antlrcpp::downCast<TypeRecordContext *>(_localctx)->recordFieldTypeContext = recordFieldType();
      antlrcpp::downCast<TypeRecordContext *>(_localctx)->fieldTypes.push_back(antlrcpp::downCast<TypeRecordContext *>(_localctx)->recordFieldTypeContext);
      setState(700);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == stellaParser::Surrogate_id_SYMB_0) {
        setState(696);
        match(stellaParser::Surrogate_id_SYMB_0);
        setState(697);
        antlrcpp::downCast<TypeRecordContext *>(_localctx)->recordFieldTypeContext = recordFieldType();
        antlrcpp::downCast<TypeRecordContext *>(_localctx)->fieldTypes.push_back(antlrcpp::downCast<TypeRecordContext *>(_localctx)->recordFieldTypeContext);
        setState(702);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(703);
      match(stellaParser::Surrogate_id_SYMB_5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<TypeVariantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(705);
      match(stellaParser::Surrogate_id_SYMB_11);
      setState(714);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == stellaParser::StellaIdent) {
        setState(706);
        antlrcpp::downCast<TypeVariantContext *>(_localctx)->variantFieldTypeContext = variantFieldType();
        antlrcpp::downCast<TypeVariantContext *>(_localctx)->fieldTypes.push_back(antlrcpp::downCast<TypeVariantContext *>(_localctx)->variantFieldTypeContext);
        setState(711);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == stellaParser::Surrogate_id_SYMB_0) {
          setState(707);
          match(stellaParser::Surrogate_id_SYMB_0);
          setState(708);
          antlrcpp::downCast<TypeVariantContext *>(_localctx)->variantFieldTypeContext = variantFieldType();
          antlrcpp::downCast<TypeVariantContext *>(_localctx)->fieldTypes.push_back(antlrcpp::downCast<TypeVariantContext *>(_localctx)->variantFieldTypeContext);
          setState(713);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(716);
      match(stellaParser::Surrogate_id_SYMB_12);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<TypeListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(717);
      match(stellaParser::Surrogate_id_SYMB_13);
      setState(718);
      antlrcpp::downCast<TypeListContext *>(_localctx)->type_ = stellatype(0);
      setState(719);
      match(stellaParser::Surrogate_id_SYMB_14);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<TypeUnitContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(721);
      match(stellaParser::Surrogate_id_SYMB_34);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<TypeTopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(722);
      match(stellaParser::TOP_TYPE);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<TypeBottomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(723);
      match(stellaParser::BOTTOM_TYPE);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<TypeAutoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(724);
      match(stellaParser::AUTO_TYPE);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<TypeVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(725);
      antlrcpp::downCast<TypeVarContext *>(_localctx)->name = match(stellaParser::StellaIdent);
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<TypeParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(726);
      match(stellaParser::Surrogate_id_SYMB_2);
      setState(727);
      antlrcpp::downCast<TypeParensContext *>(_localctx)->type_ = stellatype(0);
      setState(728);
      match(stellaParser::Surrogate_id_SYMB_3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(737);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<TypeSumContext>(_tracker.createInstance<StellatypeContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStellatype);
        setState(732);

        if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
        setState(733);
        match(stellaParser::Surrogate_id_SYMB_21);
        setState(734);
        antlrcpp::downCast<TypeSumContext *>(_localctx)->right = stellatype(15); 
      }
      setState(739);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RecordFieldTypeContext ------------------------------------------------------------------

stellaParser::RecordFieldTypeContext::RecordFieldTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::RecordFieldTypeContext::Surrogate_id_SYMB_7() {
  return getToken(stellaParser::Surrogate_id_SYMB_7, 0);
}

tree::TerminalNode* stellaParser::RecordFieldTypeContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

stellaParser::StellatypeContext* stellaParser::RecordFieldTypeContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}


size_t stellaParser::RecordFieldTypeContext::getRuleIndex() const {
  return stellaParser::RuleRecordFieldType;
}


std::any stellaParser::RecordFieldTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitRecordFieldType(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::RecordFieldTypeContext* stellaParser::recordFieldType() {
  RecordFieldTypeContext *_localctx = _tracker.createInstance<RecordFieldTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, stellaParser::RuleRecordFieldType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(740);
    antlrcpp::downCast<RecordFieldTypeContext *>(_localctx)->label = match(stellaParser::StellaIdent);
    setState(741);
    match(stellaParser::Surrogate_id_SYMB_7);
    setState(742);
    antlrcpp::downCast<RecordFieldTypeContext *>(_localctx)->type_ = stellatype(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariantFieldTypeContext ------------------------------------------------------------------

stellaParser::VariantFieldTypeContext::VariantFieldTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* stellaParser::VariantFieldTypeContext::StellaIdent() {
  return getToken(stellaParser::StellaIdent, 0);
}

tree::TerminalNode* stellaParser::VariantFieldTypeContext::Surrogate_id_SYMB_7() {
  return getToken(stellaParser::Surrogate_id_SYMB_7, 0);
}

stellaParser::StellatypeContext* stellaParser::VariantFieldTypeContext::stellatype() {
  return getRuleContext<stellaParser::StellatypeContext>(0);
}


size_t stellaParser::VariantFieldTypeContext::getRuleIndex() const {
  return stellaParser::RuleVariantFieldType;
}


std::any stellaParser::VariantFieldTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<stellaParserVisitor*>(visitor))
    return parserVisitor->visitVariantFieldType(this);
  else
    return visitor->visitChildren(this);
}

stellaParser::VariantFieldTypeContext* stellaParser::variantFieldType() {
  VariantFieldTypeContext *_localctx = _tracker.createInstance<VariantFieldTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, stellaParser::RuleVariantFieldType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(744);
    antlrcpp::downCast<VariantFieldTypeContext *>(_localctx)->label = match(stellaParser::StellaIdent);
    setState(747);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == stellaParser::Surrogate_id_SYMB_7) {
      setState(745);
      match(stellaParser::Surrogate_id_SYMB_7);
      setState(746);
      antlrcpp::downCast<VariantFieldTypeContext *>(_localctx)->type_ = stellatype(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool stellaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 13: return patternSempred(antlrcpp::downCast<PatternContext *>(context), predicateIndex);
    case 15: return stellatypeSempred(antlrcpp::downCast<StellatypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool stellaParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 30);
    case 1: return precpred(_ctx, 29);
    case 2: return precpred(_ctx, 28);
    case 3: return precpred(_ctx, 25);
    case 4: return precpred(_ctx, 24);
    case 5: return precpred(_ctx, 23);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 9);
    case 12: return precpred(_ctx, 8);
    case 13: return precpred(_ctx, 6);
    case 14: return precpred(_ctx, 59);
    case 15: return precpred(_ctx, 58);
    case 16: return precpred(_ctx, 32);
    case 17: return precpred(_ctx, 31);
    case 18: return precpred(_ctx, 22);
    case 19: return precpred(_ctx, 21);
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool stellaParser::patternSempred(PatternContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 3);
    case 22: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool stellaParser::stellatypeSempred(StellatypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 23: return precpred(_ctx, 14);

  default:
    break;
  }
  return true;
}

void stellaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  stellaparserParserInitialize();
#else
  ::antlr4::internal::call_once(stellaparserParserOnceFlag, stellaparserParserInitialize);
#endif
}
