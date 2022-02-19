#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructor called for Cat" << std::endl;
    _type = "Cat";
    _catbrain = new Brain();
    return ;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "COPY Constructor called for Cat" << std::endl;
    _catbrain = new Brain();
    *_catbrain = *cat._catbrain;
    std::cout << &_catbrain << std::endl;
    std::cout << &cat._catbrain << std::endl;


    return ;
}

Cat& Cat::operator=(const Cat &cat)
{
    std::cout << "Assignation Constructor called for Cat" << std::endl;

    _catbrain = new Brain();
    *_catbrain = *cat._catbrain;
    std::cout << &_catbrain << std::endl;
    std::cout << &cat._catbrain << std::endl;
    return (*this);
}


Cat::~Cat()
{
    delete _catbrain;
    std::cout << "Destructor called for Cat" << std::endl;
    return ;
}

void Cat::makeSound() const
{
    std::cout << "Miauuu" << std::endl;
    return ;
}

std::string Cat::getType() const
{
    return (_type);
}