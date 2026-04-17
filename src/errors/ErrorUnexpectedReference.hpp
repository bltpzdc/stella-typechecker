#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorUnexpectedReference : public CommonError
{
public:
    ErrorUnexpectedReference(type::stella_type_t expected, auto* ctx)
        : CommonError(ERROR_UNEXPECTED_REFERENCE,
            std::string{"expected a non-reference type\n  "} + expected->toString() +
                "\nbut got a reference creation expression\n  " + ctx->getText())
    {}
};

}
