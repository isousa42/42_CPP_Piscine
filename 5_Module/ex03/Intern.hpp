
#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

class Intern {

    public:

        Intern();
        Intern(const Intern &Intern);
        Intern& operator=(const Intern &intern);
        ~Intern();

        Form* makeForm(std::string const &form_name, std::string const &target);
        typedef Form* (Intern::*func)(std::string const &target);
        func funcs[3];
        Form* createShru(std::string const &target);
        Form* createRob(std::string const &target);
        Form* createPres(std::string const &target);


};

#endif