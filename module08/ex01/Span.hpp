#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {
    private :
        Span();
        std::vector<int> ve;
        unsigned int _N;
    public: 
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};

#endif