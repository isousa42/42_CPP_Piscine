#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Default Constructor called for WrongCat" << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    std::cout << "Default Constructor called for WrongCat" << std::endl;
    *this = wrongcat;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongcat)
{
    std::cout << "Assignation Operator called for WrongCat" << std::endl;
    _type = wrongcat.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called for WrongCat" << std::endl;
    return ;
}

// MEMBER FUNCTIONS 

void WrongCat::makeSound() const
{
    std::cout << "Miauuu" << std::endl;
    return ;
}

std::string WrongCat::getType() const
{
    return (_type);
}