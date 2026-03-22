#pragma once

#include "StellaType.hpp"

#include <deque>
#include <string_view>
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

private:
    struct level
    {
        std::string name{};
        types_map_t varTs{};
        stella_type_t resT{};
    };
    static constexpr auto GLOBAL_LEVEL_NAME = "GLOBAL";

    std::deque<level> levels{};
};

}
