#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorIllegalLocalOpenVariantException : public CommonError
{
public:
    ErrorIllegalLocalOpenVariantException()
        : CommonError(ERROR_ILLEGAL_LOCAL_OPEN_VARIANT_EXCEPTION,
            "open exception variant declarations are only allowed at the top level")
    {}
};

}
