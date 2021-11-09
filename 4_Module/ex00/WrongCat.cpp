#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _name = "WrongCat";
    std::cout << "Default Constructor called for WrongCat: "<< _name << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called for WrongCat: " << _name << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "MIAUUUUU MIAUUUUU MIAUUUUU" << std::endl;
    return ;
}