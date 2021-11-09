#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{

    protected:

        std::string _name;

    public:

        Animal();
        Animal(std::string type);
        ~Animal();

        std::string const getType(void) const;
        void makeSound(void) const;
};

#endif