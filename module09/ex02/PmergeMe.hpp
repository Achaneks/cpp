#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class PmergeMe
{
private:
    std::vector<int> _vector;
    std::deque<int>  _deque;
    double _vectorTime;
    double _dequeTime;

    void parseInput(char **av);
    bool isValidNumber(const std::string& str);
    std::vector<int> fordJohnsonVector(std::vector<int> data);
    void binaryInsertVector(std::vector<int>& container,int value);
    std::vector<size_t> generateJacobsthal(size_t size);
    std::deque<int> fordJohnsonDeque(std::deque<int> data);
    void binaryInsertDeque(std::deque<int>& container, int value);
    void printBefore() const;
    void printAfter(const std::vector<int>& result) const;
    void printTimes() const;
public:
    PmergeMe();
    PmergeMe(char **av);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void execute();
};

#endif