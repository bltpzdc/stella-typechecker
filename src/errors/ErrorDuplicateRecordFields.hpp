#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error
{

class ErrorDuplicateRecordFields : public CommonError
{
public:
    ErrorDuplicateRecordFields(std::string_view fieldName, stellaParser::RecordContext* ctx)
        : CommonError(ERROR_DUPLICATE_RECORD_FIELDS, std::string{"Duplicate record fields\n  "} +
            fieldName.data() + "\n in record\n  " + ctx->getText())
    {}   
};

}
