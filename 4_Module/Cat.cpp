#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Default Constructor called for Cat" << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
    return ;
}

void Cat::makeSound()
{
    std::cout << "Miauuu" << std::endl;
    return ;
}