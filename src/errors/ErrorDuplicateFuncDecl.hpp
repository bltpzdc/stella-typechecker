#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include <string>
#include <string_view>

namespace typecheck::error
{

class ErrorDuplicateFuncDecl : public CommonError
{
public:
    ErrorDuplicateFuncDecl(std::string_view func, std::string_view level)
        : CommonError(ERROR_DUPLICATE_FUNCTION_DECLARATION, std::string{"Duplicate function declaration(s) at "} +
            level.data() + "-level: " + func.data())
    {}   
};

}
