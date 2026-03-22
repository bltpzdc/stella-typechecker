#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error {

class ErrorUnexpectedVariant : public CommonError
{
public:
    ErrorUnexpectedVariant(type::stella_type_t expected, stellaParser::VariantContext* ctx)
        : CommonError(ERROR_UNEXPECTED_VARIANT, std::string{"expected an expression of non-variant type\n  " +
            expected->toString() + "\nbut got a variant\n  " + ctx->getText()})
    {}
};

}
