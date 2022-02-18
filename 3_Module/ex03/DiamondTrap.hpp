#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {

    private:

        std::string _name;

    public:

        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(DiamondTrap &frag);
        DiamondTrap &operator= (DiamondTrap &copy);

        DiamondTrap(std::string name);

        void whoAmI();
        
};

#endif