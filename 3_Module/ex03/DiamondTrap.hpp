#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap{

    private:

        std::string name;

    public:

        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();

        void attack(std::string const &target);
        void guardGate();


};

#endif