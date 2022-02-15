#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap{

    public:

        FragTrap();
        ~FragTrap();
        FragTrap(FragTrap &frag);
        FragTrap &operator= (FragTrap &copy);

        FragTrap(std::string name);

        void attack(std::string const &target);
        void highFivesGuys(void);
};

#endif