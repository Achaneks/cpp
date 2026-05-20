#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int number)
{
    typename T::iterator it = std::find(container.begin(), container.end(), number);

    if (it == container.end())
        throw std::runtime_error("number not found");

    return it;
}

#endif