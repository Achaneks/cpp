#include "Span.hpp"

Span::Span(){};

Span::Span(unsigned int N) : _N(N) {ve.reserve(N);}

Span::Span(const Span &other)
{
    _N = other._N;
    ve = other.ve;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _N = other._N;
        ve = other.ve;
    }

    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (ve.size() >= _N)
        throw std::runtime_error("Span is full");
    ve.push_back(number);
}

int Span::longestSpan()
{
    if (ve.size() <= 1)
        throw std::runtime_error("Need at least two numbers");

    int max = *std::max_element(ve.begin(), ve.end());
    int min = *std::min_element(ve.begin(), ve.end());
    return max - min;
}

int Span::shortestSpan()
{
    if (ve.size() <= 1)
        throw std::runtime_error("Need at least two numbers");

    std::vector<int> tmp = ve;
    
    std::sort(tmp.begin(), tmp.end());

    int shortest = tmp[1] - tmp[0];

    for (size_t i = 0; i < tmp.size() - 1; i++)
    {
        int span = tmp[i + 1] - tmp[i];

        if (span < shortest)
            shortest = span;
    }

    return shortest;
}