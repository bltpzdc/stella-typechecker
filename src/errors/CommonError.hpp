#pragma once

#include "ErrorCode.hpp"

#include <stdexcept>
#include <string>
#include <string_view>

namespace typecheck::error {

class CommonError : public std::runtime_error
{
public:
    CommonError(std::string_view code, std::string_view message)
        : std::runtime_error(std::string(code.data()) + "\n" + message.data())
    {}
};

}
