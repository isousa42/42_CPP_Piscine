#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor called for Animal" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal" << std::endl;
    return ;
}

void Animal::makeSound()
{
    return ;
}