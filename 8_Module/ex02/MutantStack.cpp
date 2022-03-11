#include "MutantStack.hpp"

template<class Type>
MutantStack<Type>::MutantStack()
{
    std::cout << "Default Constructor called for MutantStack" << std::endl;
    return ;
}

template<class Type>
MutantStack<Type>::MutantStack(const MutantStack &mutant)
{
    std::cout << "Copy Construtor called for MutantStack" << std::endl;
    *this = mutant;
    return ;
}

template<class Type>
MutantStack<Type>& MutantStack<Type>::operator=(const MutantStack &mutant)
{
    std::cout << "Assignation operator called for MutantStack" << std::endl;
    *this = mutant;
    return (*this);
}

template<class Type>
MutantStack<Type>::~MutantStack()
{
    std::cout << "Destructor called for MutantStack" << std::endl;
    return ;
}

template<class Type>
typename MutantStack<Type>::iterator MutantStack<Type>::begin()
{
    return this->c.begin();
}

template<class Type>
typename MutantStack<Type>::iterator MutantStack<Type>::end()
{
    return this->c.end();
}

