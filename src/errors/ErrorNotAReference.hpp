#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorNotAReference : public CommonError
{
public:
    ErrorNotAReference(type::stella_type_t real, auto* ctx)
        : CommonError(ERROR_NOT_A_REFERENCE,
            std::string{"expected a reference type but got\n  "} + real->toString() +
                "\nfor the expression\n  " + ctx->getText())
    {}
};

}
