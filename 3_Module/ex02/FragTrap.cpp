#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Constructor called for FragTrap: " << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called for FragTrap: " << _name << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap &frag)
{
    std::cout << "Copy constructor called for FragTrap" << std::endl;
    *this = frag;
}

FragTrap &FragTrap::operator= (FragTrap &copy)
{
    std::cout << "Assignation Operator called for FragTrap" << std::endl;

    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    return (*this);
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Constructor called for FragTrap: " << _name << std::endl;
}

// MEMBER FUNTIONS

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << _name << " did a massive attack to " << target << ", causing " << _hit_points << " points of damage!" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "GIVE ME HIGH FIVE GUYS!! " << std::endl;
    return ;
}