#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

    public:

        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void attack(std::string const &target);
        void highFivesGuys(void);

        int gethitpoints(void);
        int getattackdamage(void);
};

#endif