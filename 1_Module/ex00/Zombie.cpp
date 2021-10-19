#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::Zombie(std::string name)
{
    _name = name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << "Destructor called for Zombie: " << _name;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}