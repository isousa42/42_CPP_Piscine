#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal{

    private:

        std::string _type;

    public:

        Dog();
        Dog(std::string type);
        ~Dog();

};

#endif