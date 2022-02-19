        
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor called for Bureaucrat" << std::endl;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Destructor called for Bureaucrat" << std::endl;
    return ;
}


Bureaucrat::Bureaucrat(const std::string &name)
{
    std::cout << "Default Constructor called for Bureaucrat" << std::endl;
    _name = name;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    std::cout << "Default Constructor called for Bureaucrat" << std::endl;
    *this = bureaucrat;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    _grade = bureaucrat.getGrade();
    return (*this);
}


// GETS AND SETS

const std::string &Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}


        
        
        
