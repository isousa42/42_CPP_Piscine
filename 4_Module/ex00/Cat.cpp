#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Default Constructor called for Cat" << std::endl;
    return ;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Default Constructor called for Cat" << std::endl;
    *this = cat;
    return ;
}

Cat& Cat::operator=(const Cat &cat)
{
    (void)cat;
    return (*this);
}


Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
    return ;
}

void Cat::makeSound() const
{
    std::cout << "Miauuu" << std::endl;
    return ;
}

std::string Cat::getType() const
{
    return (_type);
}