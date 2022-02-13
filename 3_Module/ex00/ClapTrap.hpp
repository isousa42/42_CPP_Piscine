#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{

    private:

        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:

        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap &clap);
        ClapTrap &operator= (ClapTrap &copy);

        ClapTrap(std::string name);

        int getFixedPoint(void) const;
        void setFixedPoint(int const b_point);

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif