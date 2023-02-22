#pragma once
#include "Simplify.hpp"

template <class T>
auto Sum(const T& c) 
{
    BaseType_t<decltype(*c.begin())> sum{};
    for (auto i : c)
        sum += i;
    return sum;
}