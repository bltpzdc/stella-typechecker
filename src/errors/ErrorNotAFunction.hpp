#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <string>
namespace typecheck::error {

class ErrorNotAFunction : public CommonError
{
public:
    ErrorNotAFunction(type::stella_type_t real, stellaParser::ApplicationContext* ctx)
        : CommonError(ERROR_NOT_A_FUNCTION, std::string{"expected a function but got\n  "} +
            real->toString() + "\nfor the expression\n  " + ctx->fun->getText() +
            "\nin the function call\n  " + ctx->getText())
        {}

    ErrorNotAFunction(type::stella_type_t real, stellaParser::FixContext* ctx)
        : CommonError(ERROR_NOT_A_FUNCTION, std::string{"expected one argument function type but got\n  "} +
            real->toString() + "\nfor the expression\n  " + ctx->expr_->getText() +
            "\nin the expression\n  " + ctx->getText())
        {}
};

}
