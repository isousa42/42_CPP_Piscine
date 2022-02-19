#include "Cat.hpp"

/*
** With Copy Construtor and Assignation Operator we can create replicas of an object.
** This replicas/copies can be Shallow Copy or Deep Copy. Normally, we use deep copy when
** the object was dinamically allocated.
** Why is that? When an object was dinamically allocated (in the Heap) the copy we make will also
** reference to the orignial object, because we are storing the adress of the object. In this case, we are
** making a copy of the variable that is storing the address, now we have 2 variables pointing to
** the same spot in the memory. WE DON'T WANT THAT, it will cause ambiguity. We want to create a copy
** of the object, stored in that address, not copy the address itself. So the two objects (orginal and copy)
** will have two different addresses. THIS IS DEEP COPY.
** Shallow copy is when we say that the value of 'a' is equal to 'b'. (EX: int b = 5; int a = b; so a = 5).
** This will work, because it is stored in the Stack, so the compiler know we are talking about the
** values each variable is storing and not its address.
*/

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

// MEMBER FUNTIONS

void Cat::makeSound() const
{
    std::cout << "Miauuu" << std::endl;
    return ;
}

std::string Cat::getType() const
{
    return (_type);
}