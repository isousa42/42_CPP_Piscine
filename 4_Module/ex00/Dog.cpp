#include "Dog.hpp"

Dog::Dog()
{
    _name = "Dog";
    std::cout << "Default Constructor called for Dog: "<< _name << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog: " << _name << std::endl;
}