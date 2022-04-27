
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

/*
** The Exception classes define what will happen if an Exception is catched.
** everytime that is a try, it will run the code and check if an exception is throw,
** if it catches the exception, the what() funtion is defined here in the classes.
*/

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


};



std::ostream & operator <<(std::ostream &ost, Bureaucrat const &bur);

#endif
