#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorConflictingExceptionDeclarations : public CommonError
{
public:
    ErrorConflictingExceptionDeclarations()
        : CommonError(ERROR_CONFLICTING_EXCEPTION_DECLARATIONS,
            "exception type declarations and open exception variant declarations cannot be mixed")
    {}
};

}
