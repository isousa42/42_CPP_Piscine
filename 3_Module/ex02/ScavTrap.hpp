#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:

        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap &scav);
        ScavTrap &operator= (ScavTrap &copy);
        ScavTrap(std::string name);


        void attack(std::string const &target);
        void guardGate();


};

#endif