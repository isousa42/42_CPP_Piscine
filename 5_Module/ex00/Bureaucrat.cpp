#include "Bureaucrat.hpp"

/*
** Remember that, incrementing a grade 3 is equal do 2 (grade--);
*/

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor called for Bureaucrat" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
    {
        throw(GradeTooHighException());
    }
    if (grade > 150)
    {
        throw(GradeTooLowException());
    }
    std::cout << "Constructor called for Bureaucrat" << std::endl;
    _grade = grade;
    return ;

}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    std::cout << "Copy Construtor called for Bureaucrat" << std::endl;
    *this = bureaucrat;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    std::cout << "Assignation operator called for Bureaucrat" << std::endl;
    _grade = bureaucrat.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Destructor called for Bureaucrat" << std::endl;
    return ;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::incGrade()
{
    if (_grade == 1)
    {
        throw(GradeTooHighException());
    }
    else
        _grade--;
}

void Bureaucrat::decGrade()
{
    if (_grade == 150)
    {
        throw(GradeTooLowException());
    }
    else
        _grade++;
}

std::ostream &operator<<( std::ostream & ost, Bureaucrat const &bur){
	ost << bur.getName() << ", bureaucrat grade: " << bur.getGrade();
	return ost;
}
