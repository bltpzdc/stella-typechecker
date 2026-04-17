#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorUnexpectedMemoryAddress : public CommonError
{
public:
    ErrorUnexpectedMemoryAddress(type::stella_type_t expected, auto* ctx)
        : CommonError(ERROR_UNEXPECTED_MEMORY_ADDRESS,
            std::string{"expected a reference type for memory address expression\n  "} + ctx->getText() +
                "\nbut got expected type\n  " + expected->toString())
    {}
};

}
