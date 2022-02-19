#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Constructor called for WrongAnimal" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    std::cout << "Default Constructor called for WrongAnimal" << std::endl;
    *this = wronganimal;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
    std::cout << "Assignation Operator called for WrongAnimal" << std::endl;
    _type = wronganimal.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal" << std::endl;
    return ;
}

void WrongAnimal::makeSound() const
{
    std::cout << " PIU PIU " << std::endl;
    return ;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}