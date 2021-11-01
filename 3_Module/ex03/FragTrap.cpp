#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Default Constructor called for FragTrap: " << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Constructor called for FragTrap: " << _name << std::endl;
}

FragTrap::~FragTrap()
{        void attack(std::string const &target);
    std::cout << "Destructor called for FragTrap: " << _name << std::endl;
    return ;
}

void FragTrap::frag_attack(std::string const &target)
{
    std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _hit_points << " points of damage!" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "GIVE ME HIGH FIVE GUYS!! " << std::endl;
    return ;
}

int FragTrap::gethitpoints(void)
{
    return(_hit_points);
}

int FragTrap::getattackdamage(void)
{
    return(_attack_damage);
}