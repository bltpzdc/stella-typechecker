#pragma once

#include "CommonError.hpp"
#include "StellaType.hpp"
#include "stellaParser.h"
#include <string>

namespace typecheck::error {

class ErrorIncorrectNumberOfArgs : public CommonError
{
public:
    ErrorIncorrectNumberOfArgs(type::Func const* expected, stellaParser::ApplicationContext* ctx)
        : CommonError{ERROR_INCORRECT_NUMBER_OF_ARGUMENTS, std::string{"expected "} + std::to_string(expected->paramTs.size()) +
            " arguments\nfor the function\n  " + ctx->fun->getText() + " as " + expected->toString() + "\nbut got " + std::to_string(ctx->args.size()) + 
            " arguments\nin the function call\n  " + ctx->getText()}
    {}

    ErrorIncorrectNumberOfArgs(type::Func const* expected, stellaParser::FixContext* ctx)
        : CommonError{ERROR_INCORRECT_NUMBER_OF_ARGUMENTS, std::string{"expected "} + std::to_string(expected->paramTs.size()) +
            " arguments\nfor the function\n  " + ctx->expr_->getText() + "\nint the expression\n  " + ctx->getText()}
    {}
};

}