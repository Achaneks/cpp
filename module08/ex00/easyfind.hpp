#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T> typename T::iterator easyfind(T &array,int number) {
    typename T::iterator it = std::find(array.begin(),array.end(),number);
    if (it == array.end())
        throw std::runtime_error("number not found");
    return it;
}  

#endif