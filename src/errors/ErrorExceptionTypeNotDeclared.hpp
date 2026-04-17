#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorExceptionTypeNotDeclared : public CommonError
{
public:
    ErrorExceptionTypeNotDeclared()
        : CommonError(ERROR_EXCEPTION_TYPE_NOT_DECLARED,
            "exceptions are used in the program, but no exception type has been declared")
    {}
};

}
