#pragma once
#include "Animal.h"

class Mouse :
    public Animal
{
public:
    void Voice() override
    {
        std::cout << "Squeak!\n";
    }
};