#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "iostream"
#   include "Weapon.hpp"

class HumanA{

    private:
        Weapon &_weapon;
        std::string _type;
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        v

};

#endif