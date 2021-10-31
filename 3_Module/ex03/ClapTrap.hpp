#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{

    protected:

        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:

        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setname(std::string name);
        std::string &getname(void);
};

#endif