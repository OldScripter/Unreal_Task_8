#pragma once
#include "Animal.h"

class Dog :
    public Animal
{
public:
    void Voice() override
    {
        std::cout << "Woof!\n";
    }
};