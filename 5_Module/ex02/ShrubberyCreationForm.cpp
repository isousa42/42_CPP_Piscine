#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default Constructor called for ShrubberyCreationForm" << std::endl;
    
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)  : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Construtor Constructor called for ShrubberyCreationForm" << std::endl;
    _target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Copy Constructor called for ShrubberyCreationForm" << std::endl;
    *this = shrubberyCreationForm;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubbery)
{
    _target = shrubbery._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called for ShrubberyCreationForm" << std::endl;
    return ;
}

void ShrubberyCreationForm::action()
{
    std::cout << " I AM SHRUBBERY CREATION FORM" << std::endl;
}

