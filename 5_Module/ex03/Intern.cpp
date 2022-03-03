
#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default Constructor called for Intern" << std::endl;
    funcs[0] = &Intern::createShru;
    funcs[1] = &Intern::createRob;
    funcs[2] = &Intern::createPres;
    return ;
}

Intern::Intern(const Intern &intern)
{
    std::cout << "Copy Construtor called for Intern" << std::endl;
    *this = intern;
    return ;
}

Intern& Intern::operator=(const Intern &intern)
{
    std::cout << "Assignation operator called for Intern" << std::endl;
    (void)intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Destructor called for Intern" << std::endl;
    return ;
}

Form* Intern::makeForm(std::string const &form_name, std::string const &target)
{
    Form *form = NULL;
    (!form_name.compare("ShrubberyCreationForm") && (form = (this->*funcs[0])(target)));
    (!form_name.compare("RobotomyRequestForm") && (form = (this->*funcs[1])(target)));
    (!form_name.compare("PresidentialPardonForm") && (form = (this->*funcs[2])(target)));
    return (form);
}

Form* Intern::createShru(std::string const &target)
{
    Form *form = new ShrubberyCreationForm(target);
    return (form);
}

Form* Intern::createRob(std::string const &target)
{
    Form *form = new RobotomyRequestForm(target);
    return (form);
}

Form* Intern::createPres(std::string const &target)
{
    Form *form = new PresidentialPardonForm(target);
    return (form);
}