#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorDuplicateExceptionType : public CommonError
{
public:
    ErrorDuplicateExceptionType()
        : CommonError(ERROR_DUPLICATE_EXCEPTION_TYPE,
            "more than one exception type declaration appears in the same scope")
    {}
};

}
