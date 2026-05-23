#include "PmergeMe.hpp"
#include <climits>
#include <ctime>
#include <cstdlib>
#include <cctype>



PmergeMe::PmergeMe(): _vectorTime(0),_dequeTime(0){}
PmergeMe::PmergeMe(char **av): _vectorTime(0),_dequeTime(0){parseInput(av);}
PmergeMe::PmergeMe(const PmergeMe& other){*this = other;}
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        _vector = other._vector;
        _deque = other._deque;
        _vectorTime = other._vectorTime;
        _dequeTime = other._dequeTime;
    }
    return *this;
}
PmergeMe::~PmergeMe(){}


bool PmergeMe::isValidNumber(const std::string& str)
{
    if (str.empty())
        return false;

    for (size_t i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }

    long value = std::strtol(str.c_str(), NULL, 10);

    return value >= 0 && value <= INT_MAX;
}

void PmergeMe::parseInput(char **av)
{
    for (int i = 1; av[i]; i++)
    {
        std::string s = av[i];
        if (!isValidNumber(s))
            throw std::runtime_error("Error");
        int value = std::atoi(s.c_str());
        _vector.push_back(value);
        _deque.push_back(value);
    }
}

void PmergeMe::binaryInsertVector(std::vector<int>& container,int value)
{
    std::vector<int>::iterator pos = std::lower_bound(container.begin(),container.end(),value);
    container.insert(pos, value);
}


void PmergeMe::binaryInsertDeque(std::deque<int>& container,int value)
{
    std::deque<int>::iterator pos = std::lower_bound(container.begin(),container.end(),value);
    container.insert(pos, value);
}



std::vector<int> PmergeMe::fordJohnsonVector(std::vector<int> data)
{
    if (data.size() <= 1)
        return data;

    std::vector<int> main;
    std::vector<int> pend;

    bool odd = data.size() % 2;
    int leftover = 0;
    for (size_t i = 0; i + 1 < data.size(); i += 2)
    {
        int a = data[i];
        int b = data[i + 1];
        if (a > b)
            std::swap(a, b);
        pend.push_back(a);
        main.push_back(b);
    }
    if (odd)
        leftover = data.back();
    main = fordJohnsonVector(main);
    for (size_t i = 0; i < pend.size(); i++)
        binaryInsertVector(main,pend[i]);
    if (odd)
        binaryInsertVector(main,leftover);
    return main;
}



std::deque<int> PmergeMe::fordJohnsonDeque(std::deque<int> data)
{
    if (data.size() <= 1)
        return data;
    std::deque<int> main;
    std::deque<int> pend;

    bool odd = data.size() % 2;
    int leftover = 0;
    for (size_t i = 0; i + 1 < data.size(); i += 2)
    {
        int a = data[i];
        int b = data[i + 1];
        if (a > b)
            std::swap(a, b);
        pend.push_back(a);
        main.push_back(b);
    }
    if (odd)
        leftover = data.back();
    main = fordJohnsonDeque(main);

    for (size_t i = 0; i < pend.size(); i++)
        binaryInsertDeque(main,pend[i]);
    if (odd)
        binaryInsertDeque(main,leftover);
    return main;
}

void PmergeMe::printBefore() const
{
    std::cout << "Before: ";
    for (size_t i = 0; i < _vector.size(); i++)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::printAfter(const std::vector<int>& result) const
{
    std::cout << "After: ";
    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::printTimes() const
{
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << _vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << _dequeTime<< " us" << std::endl;
}

void PmergeMe::execute()
{
    printBefore();

    clock_t startVector = clock();
    std::vector<int> result = fordJohnsonVector(_vector);
    clock_t endVector = clock();
    _vectorTime = ((double)(endVector - startVector) / CLOCKS_PER_SEC) * 1000000;


    clock_t startDeque = clock();
    fordJohnsonDeque(_deque);
    clock_t endDeque = clock();
    _dequeTime = ((double)(endDeque - startDeque) / CLOCKS_PER_SEC) * 1000000;


    printAfter(result);
    printTimes();
}