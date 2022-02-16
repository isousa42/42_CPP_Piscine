#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main(void)
{
    ClapTrap claptrap("Demon");
    ScavTrap scavtrap("Devil");
    FragTrap fragtrap("Love");

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

    DiamondTrap diamond("Rachel");

    std::cout << "--------------------" << std::endl;

    std::cout << "Rachel Has " << diamond.getHit() << " hit_points" << std::endl;
    std::cout << "Rachel Has " << diamond.getEnergy() << " energy_points" << std::endl;
    std::cout << "Rachel Has " << diamond.getAttack() << " attack_points" << std::endl;
    std::cout << "--------------------" << std::endl;

    diamond.getnameofClap();
    diamond.attack("Other");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.highFivesGuys();
    diamond.guardGate();

    std::cout << "--------------------" << std::endl;

    diamond.whoAmI();

    std::cout << "--------------------" << std::endl;


    return (0);
}