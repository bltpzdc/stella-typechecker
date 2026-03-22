#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorUnexpectedPatternForType : public CommonError
{
public:
    ErrorUnexpectedPatternForType(type::stella_type_t expected, auto* ctx)
        : CommonError(ERROR_UNEXPECTED_PATTERN_FOR_TYPE, std::string{"unexpected pattern\n  "} +
            ctx->getText() + "\nfor type\n  " + expected->toString())
    {}
};

}
