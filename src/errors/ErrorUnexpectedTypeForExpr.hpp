#pragma once

#include "StellaType.hpp"
#include "StellaTypeCheckerContext.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <string>

namespace typecheck::error {

class ErrorUnexpectedTypeForExpr : public CommonError
{
public:
    ErrorUnexpectedTypeForExpr(stella_type_t expected, stella_type_t real, stellaParser::ExprContext* ctx)
        : CommonError(ERROR_UNEXPECTED_TYPE_FOR_EXPRESSION,
            std::string{"expected type\n  "} + expected->toString() + "\nbut got\n  " + real->toString() +
                "\n when typechecking the expression\n  " + ctx->getText())
    {}
};

}
