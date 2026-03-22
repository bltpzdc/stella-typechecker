#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include <string>

namespace typecheck::error {

class ErrorUnexpectedList : public CommonError
{
public:
    ErrorUnexpectedList(type::stella_type_t expected, auto* ctx)
        : CommonError{ERROR_UNEXPECTED_LIST, std::string{"expected an expression of a non-list type\n  "} +
            expected->toString() + "\nbut got a non-empty list\n  " + ctx->getText()}
    {}
};

}
