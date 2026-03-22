#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorAmbiguousSumType : public CommonError
{
public:
    ErrorAmbiguousSumType(auto* ctx)
        : CommonError(ERROR_AMBIGUOUS_SUM_TYPE, std::string{"ambiguous sum type in expression\n  " + ctx->getText()})
    {}
};

}
