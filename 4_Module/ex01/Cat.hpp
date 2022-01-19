#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"


class Cat: public Animal {


    protected:
        std::string ideas[100];
    private:
        Brain *_catbrain;

    public:
        Cat();
        Cat(const Cat &cat);
        Cat& operator=(const Cat &cat);
        ~Cat();
        void makeSound() const;
        virtual std::string getType() const;
};

#endif