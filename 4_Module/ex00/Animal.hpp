#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{

    private:

        std::string *_name;

    public:

        Animal();
        Animal(std::string &type);
        ~Animal();

        void setType(std::string &type);
        std::string const getType(void) const;
        void makeSound();

};

#endif