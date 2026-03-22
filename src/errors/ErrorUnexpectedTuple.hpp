#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error {

class ErrorUnexpectedTuple : public CommonError
{
public:
    ErrorUnexpectedTuple(type::stella_type_t expected, stellaParser::TupleContext* ctx)
        : CommonError(ERROR_UNEXPECTED_TUPLE, std::string{"expected an expression of non-tuple type\n  " +
            expected->toString() + "\nbut got a tuple\n  " + ctx->getText()})
    {}
};

}
