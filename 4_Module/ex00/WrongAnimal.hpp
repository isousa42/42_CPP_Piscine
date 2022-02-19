#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

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