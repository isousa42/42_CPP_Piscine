#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Demon");
    ScavTrap scavtrap("Devil");
    FragTrap fragtrap("Love");

    std::cout << "--------------------" << std::endl;

    std::cout << "Demon Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Demon Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Demon Has " << claptrap.getAttack() << " attack_points" << std::endl;
    std::cout << "Devil Has " << scavtrap.getHit() << " hit_points" << std::endl;
    std::cout << "Devil Has " << scavtrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Devil Has " << scavtrap.getAttack() << " attack_points" << std::endl;
    std::cout << "Love Has " << fragtrap.getHit() << " hit_points" << std::endl;
    std::cout << "Love Has " << fragtrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Love Has " << fragtrap.getAttack() << " attack_points" << std::endl;

    std::cout << "--------------------" << std::endl;

    claptrap.attack("Angel");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    scavtrap.attack("Other");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    fragtrap.attack("Evol");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

    std::cout << "--------------------" << std::endl;

    return (0);
}