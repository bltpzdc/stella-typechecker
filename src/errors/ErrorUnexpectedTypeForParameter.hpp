#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
namespace typecheck::error {

class ErrorUnexpectedTypeForParameter : public CommonError
{
public:
    ErrorUnexpectedTypeForParameter(size_t pos, type::Func const* expected, stellaParser::AbstractionContext* ctx)
        : CommonError(ERROR_UNEXPECTED_TYPE_FOR_PARAMETER, std::string{"expected type\n  "} + expected->paramTs[pos]->toString() +
            "\nbut got\n  " + ctx->paramDecls[pos]->paramType->getText() + "\nfor the parameter " + ctx->paramDecls[pos]->name->getText() +
            "\nin function\n  " + ctx->getText())
    {}
};

}
