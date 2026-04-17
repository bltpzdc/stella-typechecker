#pragma once

#include "StellaType.hpp"

#include <deque>
#include <map>
#include <set>
#include <string>
#include <string_view>
#include <unordered_set>
#include <unordered_map>
#include <utility>

namespace typecheck
{

using type::stella_type_t;

class StellaTypeCheckerContext final
{
public:
    using types_map_t = std::unordered_map<std::string, stella_type_t>;

    bool declarationsOnly = false;

    StellaTypeCheckerContext()
    {
        levels.push_front({GLOBAL_LEVEL_NAME, {}});
    }

    void up(std::string lvlName)
    {
        levels.push_front({std::move(lvlName), {}});
    }

    void down() noexcept
    {
        levels.pop_front();
    }

    bool store(std::string_view var, stella_type_t type)
    {
        return levels.front().varTs.insert({var.data(), type}).second;
    }

    stella_type_t type(std::string_view var)
    {
        for (auto const& level : levels)
        {
            if (auto const it = level.varTs.find(var.data()); it != level.varTs.end()) { return it->second; }
        }
        return nullptr;
    }

    void resT(stella_type_t resT) noexcept
    {
        levels.front().resT = resT;
    }

    stella_type_t resT() noexcept
    {
        return std::exchange(levels.front().resT, nullptr);
    }

    std::string_view levelName() const noexcept
    {
        return levels.front().name;
    }

    void enableExtension(std::string extension)
    {
        enabledExtensions.insert(std::move(extension));
    }

    bool hasExtension(std::string_view extension) const
    {
        return enabledExtensions.contains(std::string(extension));
    }

    bool structuralSubtypingEnabled() const
    {
        return hasExtension("#structural-subtyping");
    }

    bool ambiguousAsBottomEnabled() const
    {
        return hasExtension("#ambiguous-type-as-bottom");
    }

    bool hasDeclaredExceptionType() const noexcept
    {
        return exceptionType != nullptr;
    }

    void exceptionTypeDecl(stella_type_t type) noexcept
    {
        exceptionType = type;
    }

    stella_type_t exceptionTypeDecl() const noexcept
    {
        return exceptionType;
    }

    bool addExceptionVariant(std::string label, stella_type_t type)
    {
        return exceptionVariants.insert({std::move(label), type}).second;
    }

    bool hasExceptionVariant(std::string_view label) const
    {
        return exceptionVariants.contains(std::string(label));
    }

    stella_type_t exceptionVariantType(std::string_view label) const
    {
        if (auto const it = exceptionVariants.find(std::string(label)); it != exceptionVariants.end()) { return it->second; }
        return nullptr;
    }

    bool hasOpenVariantExceptions() const noexcept
    {
        return !exceptionVariants.empty();
    }

    type::Variant const* openExceptionVariantType() const
    {
        if (exceptionVariants.empty()) { return nullptr; }
        return new type::Variant{exceptionVariants};
    }

    void rememberMemoryAddress(std::string address, stella_type_t type)
    {
        memoryAddresses[std::move(address)] = type;
    }

    stella_type_t memoryAddressType(std::string_view address) const
    {
        if (auto const it = memoryAddresses.find(std::string(address)); it != memoryAddresses.end()) { return it->second; }
        return nullptr;
    }

private:
    struct level
    {
        std::string name{};
        types_map_t varTs{};
        stella_type_t resT{};
    };
    static constexpr auto GLOBAL_LEVEL_NAME = "GLOBAL";

    std::deque<level> levels{};
    std::unordered_set<std::string> enabledExtensions{};
    stella_type_t exceptionType{};
    std::map<std::string, stella_type_t> exceptionVariants{};
    std::unordered_map<std::string, stella_type_t> memoryAddresses{};
};

}
