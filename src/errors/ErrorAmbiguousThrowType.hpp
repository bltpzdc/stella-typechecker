#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorAmbiguousThrowType : public CommonError
{
public:
    ErrorAmbiguousThrowType(auto* ctx)
        : CommonError(ERROR_AMBIGUOUS_THROW_TYPE,
            std::string{"ambiguous throw type in expression\n  "} + ctx->getText())
    {}
};

}
