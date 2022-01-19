#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Default Constructor called for WrongCat" << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    std::cout << "Default Constructor called for WrongCat" << std::endl;
    *this = WrongCat;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCat)
{
    (void)WrongCat;
    return (*this);
}


WrongCat::~WrongCat()
{
    std::cout << "Destructor called for WrongCat" << std::endl;
    return ;
}

void WrongCat::makeSound() const
{
    std::cout << "Miauuu" << std::endl;
    return ;
}

std::string WrongCat::getType() const
{
    return (_type);
}