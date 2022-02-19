#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:
        WrongCat();
        WrongCat(const WrongCat &wrongcat);
        WrongCat& operator=(const WrongCat &wrongcat);
        ~WrongCat();
        void makeSound() const;
        std::string getType() const;
};

#endif