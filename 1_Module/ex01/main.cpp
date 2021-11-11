#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie  *first_zombie = Zombie::zombieHorde(N, "Ines");

    for (int i = 0; i < N; i++)
        first_zombie[i].announce();
    
    delete[] first_zombie;
    return (0);
}