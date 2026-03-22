#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include <string_view>

namespace typecheck::error {

class ErrorUnexpectedVariantLabel : public CommonError
{
public:
    ErrorUnexpectedVariantLabel(std::string_view label, type::Variant const* expected, stellaParser::VariantContext* ctx)
        : CommonError{ERROR_UNEXPECTED_VARIANT_LABEL, std::string{"unexpected label\n  "} +
            label.data() + "\nfor a variant type\n  " + expected->toString() +
            "\nin variant expression\n  " + ctx->getText()}
    {}
};

}
