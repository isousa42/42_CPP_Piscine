#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Default Constructor called for Dog" << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
    return ;
}

void Dog::makeSound()
{
    std::cout << "Miauuu" << std::endl;
    return ;
}