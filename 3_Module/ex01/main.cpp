#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Demon");
    ScavTrap scavtrap("Devil");


    claptrap.attack("Angel");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    scavtrap.attack("Other");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    return (0);
}