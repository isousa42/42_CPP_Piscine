#include "HumanB.hpp"

HumanB::~HumanB()
{
    std::cout << "Destrutor called for HumanB" << std::endl;
    return ;
}

HumanB::HumanB(std::string name)
{
    std::cout << "Construtor called for HumanB" << std::endl;
    _name = name;
    return ;
}

void HumanB::attack(void)
{
    std::cout << _name << " attacks with his " << _type << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    _weapon = &weapon;
}