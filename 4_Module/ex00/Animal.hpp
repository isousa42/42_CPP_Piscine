#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{

    private:

        std::string _type;

    public:

        Animal();
        Animal(std::string type);
        ~Animal();

};

#endif