#pragma once

#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"

namespace typecheck::error
{

class ErrorIllegalEmptyMatching : public CommonError
{
public:
    ErrorIllegalEmptyMatching(stellaParser::MatchContext* ctx)
        : CommonError(ERROR_ILLEGAL_EMPTY_MATCHING, std::string{"illegal empty matching\n"} +
            "in expression\n  " + ctx->getText())
    {}   
};

}
