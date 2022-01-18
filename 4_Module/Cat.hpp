#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: protected Animal {

    public:
        Cat();
        ~Cat();
        void makeSound();
};

#endif