#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include <string_view>

namespace typecheck::error {

class ErrorUnexpectedRecordFields : public CommonError
{
public:
    ErrorUnexpectedRecordFields(std::string_view fieldName, type::Record const* expected, stellaParser::RecordContext* ctx)
        : CommonError{ERROR_UNEXPECTED_RECORD_FIELDS, std::string{"unexpected fields\n  "} +
            fieldName.data() + "\nfor an expected record of type\n  " + expected->toString() +
            "\nin the record\n  " + ctx->getText()}
    {}
};

}
