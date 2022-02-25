
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <cstdlib>


class RobotomyRequestForm : public Form {

    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &robotomy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &robotomy);
        ~RobotomyRequestForm();
        void action() const;

};




#endif