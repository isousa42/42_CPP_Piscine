#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Demon");
    
    std::cout << "--------------------" << std::endl;


    std::cout << "Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Has " << claptrap.getAttack() << " attack_points" << std::endl;

    std::cout << "--------------------" << std::endl;


    claptrap.attack("Angel");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    std::cout << "--------------------" << std::endl;

    std::cout << "Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Has " << claptrap.getAttack() << " attack_points" << std::endl;

    std::cout << "--------------------" << std::endl;

    return (0);
}