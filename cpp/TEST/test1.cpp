#include <iostream>
#include <string>
// #include <exception>

#include <iostream>

int main()
{
    try
    {
        throw "jsut test";
        std::cout << "This never runs";
    }
    catch (const char* x)
    {
        std::cout << "Caught: " << x << std::endl;
    }
}

