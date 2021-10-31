#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called for ClapTrap: " << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "Constructor called for ClapTrap: " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for ClapTrap: " << _name << std::endl;
    return ;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _hit_points << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _attack_damage += amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " of damage. Has now: " << _attack_damage << " attack damage." << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _energy_points += amount;
    std::cout << "ClapTrap " << _name << " was repaired " << amount << " points. Has now: " << _energy_points << " energy points." << std::endl;
    return ;
}