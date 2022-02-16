#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default Constructor called for DiamondTrap: " << std::endl;
    return ;
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

