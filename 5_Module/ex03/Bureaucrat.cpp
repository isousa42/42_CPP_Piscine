#include "Bureaucrat.hpp"

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
    std::cout << "Copy Constructor called for Bureaucrat" << std::endl;
    *this = bureaucrat;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    std::cout << "Assignation Operator called for Bureaucrat" << std::endl;
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

void Bureaucrat::signForm(const bool sign, const std::string form_name) const
{
    if (sign == true)
        std::cout << _name << " signs " << form_name << std::endl;
    else
        std::cout << _name << " can not sign " << form_name << " because grade too low" << std::endl;

}

void Bureaucrat::executeForm(const Form &form) const
{
    try
    {
        form.execute(*this);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

}

std::ostream &operator<<( std::ostream & ost, Bureaucrat const &bur){
	ost << bur.getName() << ", bureaucrat grade: " << bur.getGrade() << std::endl;
	return ost;
}
