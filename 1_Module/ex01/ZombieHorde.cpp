#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *first_zombie = new Zombie[N];

    int i = 0;
    while (i < N)
    {
        first_zombie[i].set_name(name);
        i++;
    }
    return (first_zombie);
}