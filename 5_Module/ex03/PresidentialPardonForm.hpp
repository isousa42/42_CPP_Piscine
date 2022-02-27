
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <cstdlib>


class PresidentialPardonForm : public Form {

    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &presidential);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &presidential);
        ~PresidentialPardonForm();
        void action() const;

};




#endif