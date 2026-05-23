#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <cctype>
#include <stdexcept>

class RPN
{
    private:
        std::stack<int> _stack;

    public:
        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        ~RPN();
        void evaluate(const std::string& expression);
    private:
        void processToken(const std::string& token);
        bool isOperator(char c) const;
        bool isNumber(const std::string& token) const;
        int compute(int left, int right, char op);
};

#endif