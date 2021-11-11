#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    std::cout << "Construtor called for HumanA" << std::endl;
    _name = name;
    return ;
}

HumanA::~HumanA()
{
    std::cout << "Destrutor called for HumanA" << std::endl;
    return ;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
    return ;
}