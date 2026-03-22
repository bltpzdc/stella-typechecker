#pragma once

#include "StellaType.hpp"
#include "errors/CommonError.hpp"
#include "errors/ErrorCode.hpp"
#include "stellaParser.h"
#include <string_view>

namespace typecheck::error {

class ErrorNonExhaustiveMatchPatterns : public CommonError
{
public:
    ErrorNonExhaustiveMatchPatterns(auto* ctx)
        : CommonError{ERROR_NONEXHAUSTIVE_MATCH_PATTERNS, std::string{"non-exhaustive pattern matches\n"} +
            "when matching on expression\n  " + ctx->expr_->getText()}
    {}
};

}
