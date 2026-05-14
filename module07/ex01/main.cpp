#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void increment(T &value)
{
    value++;
}

void toUpper(std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};

    std::cout << "Original numbers:" << std::endl;
    iter(numbers, 5, print);
    iter(numbers, 5, increment);
    std::cout << "\nAfter increment:" << std::endl;
    iter(numbers, 5, print);

    std::string words[] = {"hello", "world", "cpp"};
    std::cout << "\nOriginal strings:" << std::endl;
    iter(words, 3, print);
    iter(words, 3, toUpper);
    std::cout << "\nUppercase strings:" << std::endl;
    iter(words, 3, print);

    const char *texts[] = {"template", "iter", "function"};
    std::cout << "\nConst array:" << std::endl;
    iter(texts, 3, print);

    return 0;
}