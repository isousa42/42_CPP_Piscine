#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

/*
** When creating a class that derives from another one, we can use different modes and the mode we want to use need to be specified.
** Public Mode will maintain the modes of the attributes in the derived class. Declaring ScavTrap as public derived from ClapTrap, the public attributes od ClapTrap will still be public in ScavTrap and protected attributes is ClapTrap will still be protected.
** Protected Mode will make the public attributes into protected in te derived class.
** Private Mode will make the public and protected attributes into private in te derived class.
*/

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