#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    zombie = Zombie::newZombie("Ines");
    zombie->announce();
    Zombie::randomChump("amelia");

    delete zombie;
    return (0);   
}