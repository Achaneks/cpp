#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>
#include <iostream>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;
        typename stack<T>::iterator revers_iter;
        typename stack<T>::iterator const_iter;
        typename stack<T>::iterator const_revers_iter;

};


return c.begin();
#endif