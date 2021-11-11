#include "Zombie.hpp"

int main(void)
{
    Zombie zombie("Marco");
    Zombie  *other_zombie;

    zombie.announce();
    other_zombie = Zombie::newZombie("Samora");
    other_zombie->announce();
    Zombie::randomChump("Beleza");

    delete other_zombie;
    return (0);   
}