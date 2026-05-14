#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data;

    data.id = 42;
    data.name = "Anas";

    Data* originalPtr = &data;

    uintptr_t raw = Serializer::serialize(originalPtr);

    Data* restoredPtr = Serializer::deserialize(raw);

    std::cout << "Original pointer   : " << originalPtr << std::endl;
    std::cout << "Restored pointer   : " << restoredPtr << std::endl;

    if (originalPtr == restoredPtr)
        std::cout << "Serialization works!" << std::endl;
    else
        std::cout << "Serialization failed!" << std::endl;

    std::cout << "Data id   : " << restoredPtr->id << std::endl;
    std::cout << "Data name : " << restoredPtr->name << std::endl;

    return 0;
}