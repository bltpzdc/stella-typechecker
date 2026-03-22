#pragma once

#include "CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorMissingMain : public CommonError
{
public:
    ErrorMissingMain()
        : CommonError{ERROR_MISSING_MAIN, "main function is not found in the program"}
    {}
};

}