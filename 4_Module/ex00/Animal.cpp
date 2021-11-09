#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor called for Animal: " << std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    _name = type;
    std::cout << "Constructor called for Animal: " << _name << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal: " << _name << std::endl;
}

std::string const Animal::getType(void) const
{
    return (_name);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound" << std::endl;
    return ;
}