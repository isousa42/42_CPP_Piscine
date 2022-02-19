#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

/*
** In this class, I did not put virtual so the program can show the difference between the outputs
** of the different classes.
*/

class WrongAnimal {

    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &wronganimal);
        WrongAnimal& operator=(const WrongAnimal &wronganimal);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};

#endif