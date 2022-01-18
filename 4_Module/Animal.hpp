
#ifndef ANIMALL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

    protected:
        std::string _type;
    
    public:
        Animal();
        ~Animal();
        virtual void makeSound();
};

#endif