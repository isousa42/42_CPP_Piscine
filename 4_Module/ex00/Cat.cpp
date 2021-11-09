#include "Cat.hpp"

Cat::Cat()
{
    _name = "Cat";
    std::cout << "Default Constructor called for Cat: "<< _name << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat: " << _name << std::endl;
}