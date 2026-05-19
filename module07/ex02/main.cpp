#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    try
    {
        std::cout << "......... INT ARRAY ........." << std::endl;

        Array<int> numbers(5);
        for (unsigned int i = 0; i < numbers.size(); i++)
            numbers[i] = i * 10;
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << std::endl;

        std::cout << "\n.......... COPY CONSTRUCTOR ........." << std::endl;

        Array<int> copy(numbers);

        copy[0] = 999;
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << std::endl;

        std::cout << "Original first element: " << numbers[0] << std::endl;
        for (unsigned int i = 0; i < copy.size(); i++)
            std::cout << copy[i] << std::endl;
        std::cout << "Copy first element: " << copy[0] << std::endl;
        

        std::cout << "\n........... STRING ARRAY .........." << std::endl;

        Array<std::string> words(3);

        words[0] = "hello";
        words[1] = "world";
        words[2] = "cpp";

        for (unsigned int i = 0; i < words.size(); i++)
            std::cout << words[i] << std::endl;

        std::cout << "\n.......... OUT OF BOUNDS TEST ..........." << std::endl;

        std::cout << words[10] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}