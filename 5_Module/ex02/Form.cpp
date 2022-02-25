#include "Form.hpp"

Form::Form() : _grade_to_sign(0), _grade_to_execute(0)
{
    std::cout << "Default Constructor called for Form" << std::endl;
    _signed = false;
    return ;
}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute) :
                _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
    if (grade_to_sign <= 0)
        throw(GradeTooHighException());
    if (grade_to_sign >= 151)
        throw(GradeTooLowException());
    if (_grade_to_execute <= 0)
        throw(GradeTooHighException());
    if (grade_to_execute >= 151)
        throw(GradeTooLowException());
    std::cout << "Default Constructor with arg called for Form" << std::endl;

    _signed = false;
    return ;
}

Form::Form(const Form &form) : _grade_to_sign(0), _grade_to_execute(0)
{
    std::cout << "Default Constructor called for Form" << std::endl;
    _signed = false;
    *this = form;
    return ;
}

Form& Form::operator=(const Form &form)
{
    (void)form;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called for Form" << std::endl;
    return ;
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getGradeToSign() const
{
    return (_grade_to_sign);
}

int Form::getGradeToExecute() const
{
    return (_grade_to_execute);
}

std::string Form::getSigned() const
{
    if (_signed == true)
        return ("Yes");
    else
        return ("No");
}

void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() <= _grade_to_sign)
    {
        _signed = true;
        bur.signForm(_signed, _name);
    }
    else
    {
        bur.signForm(_signed, _name);
        throw(GradeTooLowException());
    }
    return ;
}

// void Form::setGradeToSign(const int grade)
// {
//     _grade_to_sign = grade;
// }

// void Form::setGradeToExecute(int grade)
// {
//     _grade_to_execute = grade;
// }


std::ostream &operator<<( std::ostream & ost, Form const &form){
	ost << form.getName() << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute() << ", signed: " << form.getSigned() << std::endl;
	return ost;
}