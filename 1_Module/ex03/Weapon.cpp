#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Construtor called for Weapon" << std::endl;
    return ;
}

Weapon::Weapon(std::string type)
{
    std::cout << "Construtor called for Weapon" << std::endl;
    this->setType(type);
    return ;
}

Weapon::~Weapon()
{
    std::cout << "Destrutor called for Weapon" << std::endl;
    return ;
}

std::string const Weapon::getType(void) const
{
    return (_type);
}

void    Weapon::setType(std::string type)
{
    _type = type;
    return ;
}