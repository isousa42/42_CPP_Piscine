#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    std::cout << "Construtor called for HumanA" << std::endl;
    _name = name;
    _weapon = weapon;
    return ;
}

HumanA::~HumanA()
{
    std::cout << "Destrutor called for HumanA" << std::endl;
    return ;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _type << std::endl;
}