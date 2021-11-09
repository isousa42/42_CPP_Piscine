#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Constructor called for WrongAnimal: " << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _name = type;
    std::cout << "Constructor called for WrongAnimal: " << _name << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal: " << _name << std::endl;
}

std::string const WrongAnimal::getType(void) const
{
    return (_name);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound" << std::endl;
    return ;
}