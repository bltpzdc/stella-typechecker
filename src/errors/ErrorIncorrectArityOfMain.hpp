#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error
{

class ErrorIncorrectArityOfMain : public CommonError
{
public:
    ErrorIncorrectArityOfMain()
        : CommonError(ERROR_INCORRECT_ARITY_OF_MAIN, std::string{"main function must have exactly one parameter"})
    {}   
};

}
