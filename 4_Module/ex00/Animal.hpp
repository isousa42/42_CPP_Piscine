
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

/* 
** Virtual is used because the same funtion is present in Cat class, that derives from Animal Class.
** If virtual is not used, the object from Cat class will call the makeSound() from Animal and not
** from Cat as we want. (This is shown in the WrongAnimal and WrongCat implementation).
*/

class Animal {

    protected:
        std::string _type;
    
    public:
        Animal();
        Animal(const Animal &animal);
        Animal& operator=(const Animal &animal);
        virtual ~Animal();
        
        virtual void makeSound() const;
        std::string getType() const;
};

#endif