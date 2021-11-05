#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor called for Animal: " << std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Constructor called for Animal: " << _type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor called for ClapTrap" << std::endl;
   