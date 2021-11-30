#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Mouse.h"

int main()
{
    Dog* dog = new Dog();
    Cat* cat = new Cat();
    Mouse* mouse = new Mouse();

    Animal* animals[3]{ dog, cat, mouse };

    for (Animal* a : animals)
    {
        a->Voice();
    }
}