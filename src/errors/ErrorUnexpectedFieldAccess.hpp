#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <string>
#include <string_view>

namespace typecheck::error {

class ErrorUnexpectedFieldAccess : public CommonError
{
public:
    ErrorUnexpectedFieldAccess(type::Record const* rec, std::string_view fieldName, stellaParser::DotRecordContext* ctx)
        : CommonError{ERROR_UNEXPECTED_FIELD_ACCESS, std::string{"unexpected access to field "} +
            fieldName.data() + "\nin a record of type\n  " + rec->toString() + "\nin the expression\n  " + ctx->getText()}
    {}
};

}
