#include "Span.hpp"


Span::Span(){}
Span::Span(unsigned int N) : _N(N){
    ve.reserve(N);
}
Span::Span(const Span &other){
    _N = other._N;
    ve = other.ve;
}

Span &Span::operator=(const Span &other){
    if (this != &other)
    {
        _N = other._N;
        ve = other.ve;
    }
    return *this;
}

Span::~Span(){};


void Span::addNumber(int number){
    if (ve.size() == ve.capacity())
        throw std::runtime_error("Span is full");
    ve.push_back(number);
}

int Span::longestSpan(){
    if (ve.size() <= 1)
        throw std::runtime_error("span must contain at lest two numbers");
    int max = *(std::max_element(ve.begin(), ve.end()));
    int min = *(std::min_element(ve.begin(), ve.end()));
    return max -min;
}

int Span::shortestSpan(){
    if (ve.size() <= 1)
        throw std::runtime_error("span must contain at lest two numbers");
    std::sort(ve.begin(),ve.end());
    std::vector<int>::iterator it = ve.begin();
    int shortest;

    while(it != (ve.end() - 1)){
        if (shortest > (*(it + 1) - *it))
            shortest  = (*(it + 1) - *it);
        it++;
    }
    return shortest;
}
