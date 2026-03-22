#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"

namespace typecheck::error {

class ErrorNotAList : public CommonError
{
public:
    ErrorNotAList(type::stella_type_t real, auto* ctx)
        : CommonError{ERROR_NOT_A_LIST, std::string{"expected a list type but got\n  "} +
            real->toString() + "\nfor the expression\n  " + ctx->list->getText() +
            "\nin the expression\n  " + ctx->getText()}
        {}
};

}