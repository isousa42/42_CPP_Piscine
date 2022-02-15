#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called for ClapTrap: " << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for ClapTrap: " << _name << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap &clap)
{
    std::cout << "Copy constructor called for ClapTrap" << std::endl;
    *this = clap;
}

ClapTrap &ClapTrap::operator= (ClapTrap &copy)
{
    std::cout << "Assignation Operator called for ClapTrap" << std::endl;

    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "Constructor called for ClapTrap: " << _name << std::endl;
}

// MEMBER FUNTIONS

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