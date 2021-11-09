#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{

    protected:

        std::string _name;

    public:

        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();

        std::string const getType(void) const;
        void makeSound(void) const;
};

#endif