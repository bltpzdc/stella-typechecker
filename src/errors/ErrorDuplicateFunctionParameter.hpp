#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error
{

class ErrorDuplicateFunctionParameter : public CommonError
{
public:
    ErrorDuplicateFunctionParameter(std::string_view paramName)
        : CommonError(ERROR_DUPLICATE_FUNCTION_PARAMETER, std::string{"Duplicate function parameter\n  "} +
            paramName.data())
    {}   
};

}
