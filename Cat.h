#pragma once
#include "Animal.h"

class Cat :
    public Animal
{
public:
    void Voice() override
    {
        std::cout << "Meow!\n";
    }
};