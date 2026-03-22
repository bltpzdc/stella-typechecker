#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParserVisitor.h"
#include <string_view>

namespace typecheck::error {

class ErrorUndefinedVariable : public CommonError
{
public:
    ErrorUndefinedVariable(stellaParser::ExprContext* ctx)
        : CommonError(ERROR_UNDEFINED_VARIABLE, std::string{"undefined variable "} + ctx->getText())
    {}
};

}
