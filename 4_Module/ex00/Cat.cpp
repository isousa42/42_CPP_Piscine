#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructor called for Cat: " << std::endl;
    this->setType("Cat");
    return ;
}

Cat::Cat(std::string type)
{
    _type = type;
    this->setType("Cat");
    std::cout << "Constructor called for Cat: " << _type << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
}