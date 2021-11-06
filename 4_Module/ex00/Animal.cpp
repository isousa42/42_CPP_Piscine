#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor called for Animal: " << std::endl;
    _name = NULL;
    return ;
}

Animal::Animal(std::string &type)
{
    _name = &type;
    std::cout << "Constructor called for Animal: " << _name << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor called for ClapTrap" << std::endl;
}

void    Animal::setType(std::string &type)
{
    _name = &type;
}

std::string const Animal::getType(void) const
{
    return (_name);
}

void Animal::makeSound()
{
    if (_type.compare("Dog") == 0)
        std::cout << "AUUUU AUUUU AUUUU" << std::endl;
    else
        std::cout << "MIAUUUU MIAUUUU MIAUUUU" << std::endl;
    return ;
}