#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"

class FragTrap : public ScavTrap{

    public:

        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void attack(std::string const &target);
        void highFivesGuys(void);
};

#endif