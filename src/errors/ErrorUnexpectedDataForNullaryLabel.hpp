#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include "stellaParserVisitor.h"
#include <string_view>

namespace typecheck::error {

class ErrorUnexpectedDataForNullaryLabel : public CommonError
{
public:
    ErrorUnexpectedDataForNullaryLabel(std::string_view label, stellaParser::VariantContext* ctx)
        : CommonError(ERROR_UNEXPECTED_DATA_FOR_NULLARY_LABEL, std::string{"expected a nullary label "} +
            label.data() + "\nin expression\n  " + ctx->getText())
    {}
};

}
