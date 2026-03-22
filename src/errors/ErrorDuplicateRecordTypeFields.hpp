#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error
{

class ErrorDuplicateRecordTypeFields : public CommonError
{
public:
    ErrorDuplicateRecordTypeFields(std::string_view fieldName, stellaParser::TypeRecordContext* ctx)
        : CommonError(ERROR_DUPLICATE_RECORD_TYPE_FIELDS, std::string{"Duplicate field name\n  "} +
            fieldName.data() + "\n in record type\n  " + ctx->getText())
    {}   
};

}
