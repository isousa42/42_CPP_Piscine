#include "DiamondTrap.hpp"

/*
** There is a tiny little trick in this exercise... The DiamondTrap class derives from both
** ScavTrap and FragTrap and its attributes will have the same inicial values from the two classes.
** The problem is, when construting a DiamondTrap object, it will construc a ClapTrap, then ScavTrap,
** then fragTrap and then, just then, DiamondTrap. Note that all this classes use the same arguments.
** The problem is, ClapTrap initializes the atributes, then ScavTrap changes the values and FragTrap
** changes it again... So DiamondTrap will always have the atributes of FragTrap.
** To solve this, create a temporary instance of Scav and Frag (in the Diamond constructor), so
** Diamond will have values of both classes, with no changes because of constructions.
**
*/

DiamondTrap::DiamondTrap()
{
    std::cout << "Default Constructor called for DiamondTrap: " << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called for DiamondTrap: " << _name << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap &frag)
{
    std::cout << "Copy constructor called for DiamondTrap" << std::endl;
    *this = frag;
}

DiamondTrap &DiamondTrap::operator= (DiamondTrap &copy)
{
    std::cout << "Assignation Operator called for DiamondTrap" << std::endl;

    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name)
{
    _name = name;

    ScavTrap temp_scav(name);
    FragTrap temp_frag(name);

    _hit_points = temp_frag.getHit();
    _energy_points = temp_scav.getEnergy();
    _attack_damage = temp_frag.getAttack();
    std::string new_name(name + "_clap_name");
    this->setnameofClap(new_name);
    std::cout << "Constructor called for DiamondTrap: " << this->_name << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is: " << _name << std::endl;
    std::cout << "ClapTrap name is: " << this->getname() << std::endl;
    return ;
}

