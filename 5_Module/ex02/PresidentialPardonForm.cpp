#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default Constructor called for PresidentialPardonForm" << std::endl;
    
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : Form("PresidentialPardonForm", 72, 45)
{
    std::cout << "Construtor Constructor called for PresidentialPardonForm" << std::endl;
    _target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidential) : Form("PresidentialPardonForm", 145, 137)
{
    std::cout << "Copy Constructor called for PresidentialPardonForm" << std::endl;
    *this = presidential;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &presidential)
{
    _target = presidential._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called for PresidentialPardonForm" << std::endl;
    return ;
}

void PresidentialPardonForm::action() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

    return ;
}