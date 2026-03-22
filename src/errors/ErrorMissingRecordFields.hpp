#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <string_view>

namespace typecheck::error {

class ErrorMissingRecordFields : public CommonError
{
public:
    ErrorMissingRecordFields(std::string_view fieldName, type::Record const* expected, stellaParser::RecordContext* ctx)
        : CommonError{ERROR_MISSING_RECORD_FIELDS, std::string{"missing fields\n  "} +
            fieldName.data() + "\nfor an expected record type\n  " + expected->toString() +
            "\nin the record\n  " + ctx->getText()}
    {}
};

}
