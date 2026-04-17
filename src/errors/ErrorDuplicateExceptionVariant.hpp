#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorDuplicateExceptionVariant : public CommonError
{
public:
    ErrorDuplicateExceptionVariant(std::string_view label)
        : CommonError(ERROR_DUPLICATE_EXCEPTION_VARIANT,
            std::string{"duplicate exception variant declaration for label "} + label.data())
    {}
};

}
