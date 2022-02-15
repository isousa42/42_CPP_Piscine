#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default Constructor called for DiamondTrap: " << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    _name = name;
    _hit_points = FragTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
    std::string new_name(name + "_clap_name");
    this->setnameofClap(new_name);
    std::cout << "Constructor called for DiamondTrap: " << this->_name << std::endl;

}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called for DiamondTrap: " << _name << std::endl;
    return ;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is: " << _name << std::endl;
    std::cout << "ClapTrap name is: " << this->getname() << std::endl;
    return ;
}

