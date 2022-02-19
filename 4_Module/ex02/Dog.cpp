#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructor called for Dog" << std::endl;
    _type = "Dog";
    _dogbrain = new Brain();
    return ;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Copy Construtor called for Dog" << std::endl;
    
    _dogbrain = new Brain();
    *_dogbrain = *dog._dogbrain;
    std::cout << &_dogbrain << std::endl;
    std::cout << &dog._dogbrain << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog &dog)
{
    std::cout << "Assignation Operator called for Dog" << std::endl;

    *_dogbrain = *dog._dogbrain;
    std::cout << &_dogbrain << std::endl;
    std::cout << &dog._dogbrain << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete _dogbrain;
    std::cout << "Destructor called for Dog" << std::endl;
    return ;
}

// MEMBER FUNTIONS

void Dog::makeSound() const
{
    std::cout << "AUUUUUU" << std::endl;
    return ;
}

std::string Dog::getType() const
{
    return (_type);
}