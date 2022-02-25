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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Copy Constructor called for ShrubberyCreationForm" << std::endl;
    *this = shrubbery;
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

    std::fstream file;
    std::string file_name;
    file_name = _target;
    file_name.append("_shrubbery");
    file.open(file_name.c_str(), std::ios::out | std::ios::in | std::ios::trunc);
    if (!file)
        std::cout << "ERROR CREATING FILE" << std::endl;
    file << "         *         " << std::endl;
    file << "        /|\\        " << std::endl;        
    file << "       /*|O\\       " << std::endl;
    file << "      /*/|\\*\\      " << std::endl;
    file << "     /X/O|*\\X\\     " << std::endl;
    file << "    /*/X/|\\X\\*\\    " << std::endl;
    file << "   /O/*/X|*\\O\\X\\   " << std::endl;       
    file << "  /*/O/X/|\\X\\O\\*\\  " << std::endl;
    file << " /X/O/*/X|O\\X\\*\\O\\ " << std::endl;
    file << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl;
    file << "        |X|        " << std::endl;
    file << "        |X|        " << std::endl;
    file.close();
}

