#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
** When we construct the object from the ScavTrap Class, it will call the construtor of ClapTrap (first)
** and then will call ScavTrap Construtor, because it derived from the ClapTrap class, so it
** has to construct the ClapTrap first. The same will happen in the destrution, in reverse order.
** It will destroy the ScavTrap first and then the ClapTrap.
*/

int main(void)
{
    ClapTrap claptrap("Demon");
    ScavTrap scavtrap("Devil");

    std::cout << "--------------------" << std::endl;

    std::cout << "Demon Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Demon Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Demon Has " << claptrap.getAttack() << " attack_points" << std::endl;
    std::cout << "Devil Has " << scavtrap.getHit() << " hit_points" << std::endl;
    std::cout << "Devil Has " << scavtrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Devil Has " << scavtrap.getAttack() << " attack_points" << std::endl;

    std::cout << "--------------------" << std::endl;

    claptrap.attack("Angel");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    scavtrap.attack("Other");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    std::cout << "--------------------" << std::endl;


    return (0);
}