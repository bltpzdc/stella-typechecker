#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include <string>

namespace typecheck::error {

class ErrorUnexpectedInjection : public CommonError
{
public:
    ErrorUnexpectedInjection(type::stella_type_t expected, auto* ctx)
        : CommonError{ERROR_UNEXPECTED_INJECTION, std::string{"expected an expression of a non-sum type\n  "} +
            expected->toString() + "\nbut got an injection into a sum type\n  " + ctx->getText()}
    {}
};

}
