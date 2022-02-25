
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Form {

    protected:

        const std::string _name;
        bool _signed;
        const int _grade_to_sign;
        const int _grade_to_execute;

    public:

        Form();
        Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
        Form(const Form &form);
        Form& operator=(const Form &form);
        virtual ~Form() = 0;
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        std::string getSigned() const;
        void beSigned(Bureaucrat &bur);
        // void setGradeToSign(const int grade);
        // void setGradeToExecute(int grade);
};

std::ostream & operator <<(std::ostream &ost, Form const &form);

#endif