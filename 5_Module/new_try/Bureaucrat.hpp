#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

    private:
    
        const std::string _name;
        int _grade;
    
    public:

        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat::Bureaucrat(const std::string &name)

        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat& operator=(const Bureaucrat &bureaucrat);

        const std::string& getName() const;
        int getGrade() const;
}


#endif