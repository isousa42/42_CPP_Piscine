#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

    private:
        Brain *_dogbrain;

    public:
        Dog();
        Dog(const Dog &dog);
        Dog& operator=(const Dog &dog);
        ~Dog();
        void makeSound() const;
        virtual std::string getType() const;
};

#endif