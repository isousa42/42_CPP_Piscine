#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{

    protected:

        std::string _name;

    public:

        Animal();
        Animal(std::string type);
        virtual ~Animal();

        std::string const getType(void) const;
        virtual void makeSound(void) const;
};

#endif