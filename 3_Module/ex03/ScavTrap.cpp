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

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
}

void ScavTrap::setnameofClap(std::string name)
{
    this->setname(name);
    return ;
}

std::string &ScavTrap::getnameofClap(void)
{
    return (this->getname());
}

int ScavTrap::getenergypoints(void)
{
    return (_energy_points);
}

void call_attack(std::sting &target)
{
    attack(target);
    return ;
}