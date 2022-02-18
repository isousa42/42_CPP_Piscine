#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

/*
**  The atributes in this Class had to be changed to protected instead of private
**  Private atributes can NOT be accessed by the derived class. If ScravTrap is inheritated from ClapTrap,
**  the atributes must be protected, so ScravTrap can access them. 
**  When protected, they still can not be accessed outside of the class.
*/

class ClapTrap{

    protected:

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

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        int getHit(void);
        int getEnergy(void);
        int getAttack(void);
};

#endif