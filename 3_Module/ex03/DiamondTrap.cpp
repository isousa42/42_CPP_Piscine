#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default Constructor called for DiamondTrap: " << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
    _name = name;
    _hit_points = this->gethitpoints();
    _energy_points = this->getenergypoints();
    _attack_damage = this->gethitpoints();

    std::string new_name(name + "_clap_name");
    this->setnameofClap(new_name);
    std::cout << "Constructor called for DiamondTrap: " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called for DiamondTrap: " << _name << std::endl;
    return ;
}

void DiamondTrap::attack(std::string const &target)
{
    this->call_attack(target);
    return ;
}