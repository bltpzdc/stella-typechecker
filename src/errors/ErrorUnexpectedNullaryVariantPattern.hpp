#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <cstddef>
#include <string>
#include <string_view>

namespace typecheck::error {

class ErrorUnexpectedNullaryVariantPattern : public CommonError
{
public:
    ErrorUnexpectedNullaryVariantPattern(std::string_view label, type::Variant const* expected, auto* ctx)
        : CommonError(ERROR_UNEXPECTED_NULLARY_VARIANT_PATTERN, std::string{"expected a pattern for non-nullary label "} +
            label.data() + "\nfor a variant of type\n  " + expected->toString() + "\nin pattern\n  " + ctx->getText())
    {}
};

}
