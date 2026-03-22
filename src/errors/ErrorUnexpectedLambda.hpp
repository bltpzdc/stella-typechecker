#pragma once

#include "StellaTypeCheckerContext.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error {

class ErrorUnexpectedLambda : public CommonError
{
public:
    ErrorUnexpectedLambda(stella_type_t expected, stellaParser::ExprContext* ctx)
        : CommonError(ERROR_UNEXPECTED_LAMBDA, std::string{"expected an expression of a non-function type\n  "}
            + expected->toString() + "\nbut got an anonimous function\n  " + ctx->getText())
    {}
};

}
