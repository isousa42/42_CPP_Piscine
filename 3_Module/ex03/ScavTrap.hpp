#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

/*
** In this case, we need to use "virtual" to avoid ambiguity because the Diamond Class
** will derive from both Frag and Scav, and both derive from Clap... They need to be virtual
** because use the same atributes and Diamond may be confuse because has 2 different classes 
** bringing the same atributes.
*/

class ScavTrap : virtual public ClapTrap{

    public:

        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap &scav);
        ScavTrap &operator= (ScavTrap &copy);
        ScavTrap(std::string name);

        void attack(std::string const &target);
        void guardGate();
        void setnameofClap(std::string name);
        std::string &getnameofClap(void);

        int getenergypoints(void);

};

#endif