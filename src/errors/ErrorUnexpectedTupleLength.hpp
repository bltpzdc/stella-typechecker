#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include <string>

namespace typecheck::error {

class ErrorUnexpectedTupleLength : public CommonError
{
public:
    ErrorUnexpectedTupleLength(type::Tuple const* expected, stellaParser::TupleContext* ctx)
        : CommonError{ERROR_UNEXPECTED_TUPLE_LENGTH, std::string{"expected "} + std::to_string(expected->itemTs.size()) +
            " components\nfor a tuple of type\n  " + expected->toString() + "\nbut got " + std::to_string(ctx->exprs.size()) +
            "\nin tuple\n  " + ctx->getText()}
    {}
};

}
