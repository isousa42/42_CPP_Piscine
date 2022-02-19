
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

/*
** The Animal class is now Abstract ! It means it can NOT be instatialized.
** To make a class Abstract, it just needs to have one Pure virtual funtion (Ex: makeSound() = 0;).
** We may use Abstract classes when it can't be seen as an object. I mean, an "animal" don't make a
** sound, but the cat, the dog and the bird can, so they can be declared as an object. An Animal don't
** have the possibility to, so we can not use it as an object, just as a base class from what the other
** classes will derive.
** Note that, we still can use pointers and references to an Abstract Class. We just can not instatiate it.
** Also remember that is necessary to override the Pure Virtual Funtion in the derived classes,
** otherwise the derived funtions will also become Abstract !
*/

class Animal {

    protected:
        std::string _type;
    
    public:
        Animal();
        Animal(const Animal &animal);
        Animal& operator=(const Animal &animal);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        virtual std::string getType() const;
};

#endif