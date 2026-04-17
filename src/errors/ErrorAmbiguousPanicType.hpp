#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorAmbiguousPanicType : public CommonError
{
public:
    ErrorAmbiguousPanicType(auto* ctx)
        : CommonError(ERROR_AMBIGUOUS_PANIC_TYPE,
            std::string{"ambiguous panic type in expression\n  "} + ctx->getText())
    {}
};

}
