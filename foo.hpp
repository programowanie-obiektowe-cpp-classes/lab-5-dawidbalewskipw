#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result(people.size());
    auto index = result.size();

    for (auto& person : people) {
        person.birthday();
        --index;
        result[index] = person.isMonster() ? 'n' : 'y';
    }

    return result;
}
