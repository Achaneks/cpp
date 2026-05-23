#include "RPN.hpp"
RPN::RPN(){}
RPN::RPN(const RPN& other){*this = other;}
RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
        _stack = other._stack;
    return *this;
}
RPN::~RPN(){}
#include <iostream>

void RPN::evaluate(const std::string& expression)
{
    size_t start = 0;
    while (start < expression.length())
    {
        while ( start < expression.length() && expression[start] == ' ')
            start++;
        if (start >= expression.length())
            break;
        size_t end = expression.find(' ',start);
        if (end == std::string::npos) 
            end = expression.length();
        std::string token = expression.substr(start,end - start);
        processToken(token);
        start = end;
    }
    if (_stack.size() != 1)
        throw std::runtime_error("Error");
    std::cout << _stack.top() << std::endl;
}

void RPN::processToken(const std::string& token)
{
    if (isNumber(token))
    {
        _stack.push(token[0] - '0');
        return;
    }

    if (token.length() == 1 && isOperator(token[0]))
    {
        if (_stack.size() < 2)
            throw std::runtime_error("Error");

        int right = _stack.top();
        _stack.pop();
        int left = _stack.top();
        _stack.pop();

        int result = compute( left, right, token[0]);
        _stack.push(result);
        return;
    }
    throw std::runtime_error("Error");
}
bool RPN::isOperator(char c) const { return ( c == '+' || c == '-' || c == '*' || c == '/'); }

bool RPN::isNumber(const std::string& token) const
{
    return ( token.length() == 1 && std::isdigit(token[0]));
}



int RPN::compute(int left, int right,char op)
{
    switch (op)
    {
        case '+':
            return left + right;
        case '-':
            return left - right;
        case '*':
            return left * right;
        case '/':
            if (right == 0)
                throw std::runtime_error("Error : / 0");
            return left / right;
    }
    throw std::runtime_error("Error");
    
}