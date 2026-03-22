#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorAmbiguousVariantType : public CommonError
{
public:
    ErrorAmbiguousVariantType(auto* ctx)
        : CommonError(ERROR_AMBIGUOUS_VARIANT_TYPE, std::string{"ambiguous variant type in expression\n  " + ctx->getText()})
    {}
};

}
