#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor called for ScavTrap: " << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap: " << _name << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap &scav)
{
    std::cout << "Copy constructor called for ScavTrap" << std::endl;
    *this = scav;
}

ScavTrap &ScavTrap::operator= (ScavTrap &copy)
{
    std::cout << "Assignation Operator called for ScavTrap" << std::endl;

    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "Constructor called for ScavTrap: " << _name << std::endl;
}

// MEMBER FUNTIONS

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _hit_points << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " HAS ENTERED IN GATE KEEPER MODE" << std::endl;
}