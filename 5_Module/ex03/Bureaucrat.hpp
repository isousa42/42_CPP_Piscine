
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {

    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat& operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incGrade();
        void decGrade();
        void signForm(const bool sign, const std::string form_name) const;
        void executeForm(const Form &form) const;

};

class GradeTooHighException : public std::exception 
{
    public:
            virtual const char* what() const throw() 
            {
                return "Grade Too High Exception";
            }
};

class GradeTooLowException : public std::exception 
{
    public:
            virtual const char* what() const throw() 
            {
                return "Grade Too Low Exception";
            }
};

std::ostream & operator <<(std::ostream &ost, Bureaucrat const &bur);

#endif