#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructor called for Dog" << std::endl;
    _type = "Dog";
    _dogbrain = new Brain();
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
    (void)dog;
    return (*this);
}

Dog::~Dog()
{
    delete _dogbrain;
    std::cout << "Destructor called for Dog" << std::endl;
    return ;
}

void Dog::makeSound() const
{
    std::cout << "AUUUUUU" << std::endl;
    return ;
}

std::string Dog::getType() const
{
    return (_type);
}