#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Default Constructor called for Dog" << std::endl;
    return ;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Default Constructor called for Dog" << std::endl;
    *this = dog;
    return ;
}

Dog& Dog::operator=(const Dog &dog)
{
    _type = dog.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
    return ;
}

// MEMBER FUNTIONS

void Dog::makeSound() const
{
    std::cout << "AUUUUUU" << std::endl;
    return ;
}