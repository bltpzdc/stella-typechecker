#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorUnexpectedSubtype : public CommonError
{
public:
    ErrorUnexpectedSubtype(type::stella_type_t expected, type::stella_type_t real, auto* ctx)
        : CommonError(ERROR_UNEXPECTED_SUBTYPE,
            std::string{"expected a subtype of\n  "} + expected->toString() +
                "\nbut got\n  " + real->toString() +
                "\nfor the expression\n  " + ctx->getText())
    {}
};

}
