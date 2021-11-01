#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

    public:

        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        void attack(std::string const &target);
        void guardGate();
        void setnameofClap(std::string name);
        std::string &getnameofClap(void);

        int getenergypoints(void);

};

#endif