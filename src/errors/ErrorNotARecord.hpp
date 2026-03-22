#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorNotARecord : public CommonError
{
public:
    ErrorNotARecord(type::stella_type_t real, stellaParser::DotRecordContext* ctx)
        : CommonError{ERROR_NOT_A_RECORD, std::string{"expected a record type but got\n  "} +
            real->toString() + "\nfor the expression\n  " + ctx->expr_->getText() +
            "\nin the expression\n  " + ctx->getText()}
        {}
};

}