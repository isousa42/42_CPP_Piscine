#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default Constructor called for ShrubberyCreationForm" << std::endl;
    
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    std::cout << "Default Constructor with arg called for ShrubberyCreationForm" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) : _grade_to_sign(145), _grade_to_execute(137)
{
    std::cout << "Default Constructor called for ShrubberyCreationForm" << std::endl;
    *this = ShrubberyCreationForm;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Shrubbery)
{
    (void)Shrubbery;
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

