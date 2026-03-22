#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <cstddef>
#include <string>

namespace typecheck::error {

class ErrorUnexpectedNumberOfParamsInLambda : public CommonError
{
public:
    ErrorUnexpectedNumberOfParamsInLambda(type::Func const* expected, stellaParser::AbstractionContext* ctx)
        : CommonError(ERROR_UNEXPECTED_NUMBER_OF_PARAMS_IN_LAMBDA, std::string{"expected "} + std::to_string(expected->paramTs.size()) +
            " parameters\nfor a function type\n  " + expected->toString() + "\nbut got " + std::to_string(ctx->paramDecls.size()) +
            "\nin function\n  " + ctx->getText())
    {}
};

}
