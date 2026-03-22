#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorNotATuple : public CommonError
{
public:
    ErrorNotATuple(type::stella_type_t real, stellaParser::DotTupleContext* ctx)
        : CommonError{ERROR_NOT_A_TUPLE, std::string{"expected an expression of tuple type\n"} +
            "but got expression\n  " + ctx->expr_->getText() + "\nof type\n  " + real->toString() +
            "\n in expression\n  " + ctx->getText()}
        {}
};

}
