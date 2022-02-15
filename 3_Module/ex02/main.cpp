#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Demon");
    ScavTrap scavtrap("Devil");
    FragTrap fragtrap("Love");



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

    return (0);
}