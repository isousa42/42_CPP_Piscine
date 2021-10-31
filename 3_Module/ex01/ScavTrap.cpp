#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor called for ScavTrap: " << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "Constructor called for ScavTrap: " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap: " << _name << std::endl;
    return ;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _hit_points << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    _attack_damage += amount;
    std::cout << "ScavTrap " << _name << " took " << amount << " of damage. Has now: " << _attack_damage << " attack damage." << std::endl;
    return ;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    _energy_points += amount;
    std::cout << "ScavTrap " << _name << " was repaired " << amount << " points. Has now: " << _energy_points << " energy points." << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
}