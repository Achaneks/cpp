#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span
{
    private:
        std::vector<int> ve;
        unsigned int _N;
        Span();

    public:
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);

        template <typename Iterator>
        void addNumbers(Iterator begin, Iterator end);

        int shortestSpan();
        int longestSpan();
};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end)
{
    while (begin != end)
    {
        if (ve.size() >= _N)
            throw std::runtime_error("Span is full");

        ve.push_back(*begin);
        ++begin;
    }
}

#endif