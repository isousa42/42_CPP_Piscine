#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor called for Animal" << std::endl;
    return ;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Copy Constructor called for Animal" << std::endl;
    *this = animal;
    return ;
}

Animal& Animal::operator=(const Animal &animal)
{
    std::cout << "Assignation Operator called for Animal" << std::endl;
    _type = animal.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal" << std::endl;
    return ;
}

// MEMBER FUNCTIONS

void Animal::makeSound() const
{
    return ;
}

std::string Animal::getType() const
{
    return (_type);
}