#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error
{

class ErrorDuplicateVariantTypeFields : public CommonError
{
public:
    ErrorDuplicateVariantTypeFields(std::string_view fieldName, stellaParser::TypeVariantContext* ctx)
        : CommonError(ERROR_DUPLICATE_VARIANT_TYPE_FIELDS, std::string{"Duplicate variant label\n  "} +
            fieldName.data() + "\n in variant type\n  " + ctx->getText())
    {}   
};

}
