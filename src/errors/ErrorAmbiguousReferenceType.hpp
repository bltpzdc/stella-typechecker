#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorAmbiguousReferenceType : public CommonError
{
public:
    ErrorAmbiguousReferenceType(auto* ctx)
        : CommonError(ERROR_AMBIGUOUS_REFERENCE_TYPE,
            std::string{"ambiguous memory reference type in expression\n  "} + ctx->getText())
    {}
};

}
