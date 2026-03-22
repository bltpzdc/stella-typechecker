#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorUnexpectedRecord : public CommonError
{
public:
    ErrorUnexpectedRecord(type::stella_type_t expected, stellaParser::RecordContext* ctx)
        : CommonError(ERROR_UNEXPECTED_RECORD, std::string{"expected an expression of non-record type\n  " +
            expected->toString() + "\nbut got a record\n  " + ctx->getText()})
    {}
};

}
