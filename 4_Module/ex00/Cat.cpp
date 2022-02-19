#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Default Constructor called for Cat" << std::endl;
    return ;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Copy Constructor called for Cat" << std::endl;
    *this = cat;
    return ;
}

Cat& Cat::operator= (const Cat &cat)
{
    std::cout << "Assignation Operator called for Cat" << std::endl;
    _type = cat.getType();
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
    return ;
}

// MEMBER FUNCTIONS

void Cat::makeSound() const
{
    std::cout << "Miauuu" << std::endl;
    return ;
}