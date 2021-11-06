#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructor called for Dog: " << std::endl;
    this->setType("Dog");

    return ;
}

Dog::Dog(std::string type)
{
    _type = type;
    this->setType("Dog");

    std::cout << "Constructor called for Dog: " << _type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
}