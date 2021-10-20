#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "iostream"
#   include "Weapon.hpp"

class HumanB{

    private:
        Weapon *_weapon = NULL;
        std::string _type;
        std::string _name;
    
    public:
        HumanB(std::string name);
        ~HumanB();
        void HumanB::attack(void);
        void    setWeapon(Weapon weapon);

};

#endif