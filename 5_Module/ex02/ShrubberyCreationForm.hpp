
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form {

    private:
        std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &shrubberry);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &shrubbery);
        ~ShrubberyCreationForm();
        void action();

};




#endif