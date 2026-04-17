#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorIllegalLocalExceptionType : public CommonError
{
public:
    ErrorIllegalLocalExceptionType()
        : CommonError(ERROR_ILLEGAL_LOCAL_EXCEPTION_TYPE,
            "exception type declarations are only allowed at the top level")
    {}
};

}
