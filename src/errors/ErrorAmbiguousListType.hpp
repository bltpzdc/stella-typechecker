#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorAmbiguousListType : public CommonError
{
public:
    ErrorAmbiguousListType(auto* ctx)
        : CommonError(ERROR_AMBIGUOUS_LIST_TYPE, std::string{"ambiguous list type in expression\n  " + ctx->getText()})
    {}
};

}
