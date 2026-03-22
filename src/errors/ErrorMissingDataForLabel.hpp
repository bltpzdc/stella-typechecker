#pragma once

#include "CommonError.hpp"
#include "StellaType.hpp"
#include "errors/ErrorCode.hpp"
#include <string_view>

namespace typecheck::error {

class ErrorMissingDataForLabel : public CommonError
{
public:
    ErrorMissingDataForLabel(std::string_view label, type::stella_type_t expT, stellaParser::VariantContext* ctx)
        : CommonError{ERROR_MISSING_DATA_FOR_LABEL, std::string{"expected an unary label "} +
            label.data() + "\nwith associated value of type\n  " + expT->toString() + "\nin expression\n  " +
            ctx->getText()}
    {}
};

}