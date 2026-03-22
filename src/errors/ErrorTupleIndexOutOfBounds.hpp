#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <string>
namespace typecheck::error {

class ErrorTupleIndexOutOfBounds : public CommonError
{
public:
    ErrorTupleIndexOutOfBounds(type::Tuple const* tupT, stellaParser::DotTupleContext* ctx, int idx)
        : CommonError{ERROR_TUPLE_INDEX_OUT_OF_BOUNDS, std::string{"unexpected access to component number "} +
            std::to_string(idx) + "\nin a tuple\n  " + ctx->expr_->getText() + "\nof length " + std::to_string(tupT->itemTs.size()) +
            "\nof type\n  " + tupT->toString()}
        {}
};

}
