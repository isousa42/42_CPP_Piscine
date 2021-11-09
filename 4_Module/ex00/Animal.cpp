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
    if (_name.compare("Dog") == 0)
        std::cout << "Auuuuu Auuuuu Auuuu" << std::endl;
    else if (_name.compare("Cat") == 0)
        std::cout << "Miauuuu Miaaauuuu Miiiaaauuu" << std::endl;
    else
        std::cout << "Animal" << std::endl;    
}