#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor called for Bureaucrat" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade < 1)
    {
        throw(Bureaucrat::GradeTooHighException());
    }
    if (grade > 150)
    {
        throw(Bureaucrat::GradeTooLowException());
    }
    std::cout << "Default Constructor with arg called for Bureaucrat" << std::endl;
    _name = name;
    _grade = grade;
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
    (void)bureaucrat;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called for Bureaucrat" << std::endl;
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
        throw(Bureaucrat::GradeTooHighException());
    }
    else
        _grade = _grade - 1;
}

void Bureaucrat::decGrade()
{
    if (_grade == 150)
    {
        throw(Bureaucrat::GradeTooLowException());
    }
    else
        _grade = _grade + 1;
}

std::ostream &operator<<( std::ostream & ost, Bureaucrat const &bur){
	ost << bur.getName() << ", bureaucrat grade: " << bur.getGrade();
	return ost;
}
