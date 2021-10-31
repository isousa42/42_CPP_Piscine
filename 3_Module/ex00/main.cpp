#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Demon");

    claptrap.attack("Angel");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    return (0);
}