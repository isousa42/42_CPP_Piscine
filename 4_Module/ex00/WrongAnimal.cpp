#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Constructor called for WrongAnimal" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "Default Constructor called for WrongAnimal" << std::endl;
    *this = WrongAnimal;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    (void)WrongAnimal;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal" << std::endl;
    return ;
}

void WrongAnimal::makeSound() const
{
    return ;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}