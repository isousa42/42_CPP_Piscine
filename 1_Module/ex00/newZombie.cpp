#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *new_Zombie = new Zombie(name);

    return (new_Zombie);
}