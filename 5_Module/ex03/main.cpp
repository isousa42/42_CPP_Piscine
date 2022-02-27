
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int main(void)
{
    Bureaucrat bur("Amelia", 2);
    Intern intern;
    Form *shru;
    Form *rob;
    Form *pres;
    std::cout << "------SHRU EXECUTION--------------" << std::endl;


    shru = intern.makeForm("ShrubberyCreationForm", "Bender");
    shru->action();
    
    std::cout << "--------ROB EXECUTION------------" << std::endl;

    rob = intern.makeForm("RobotomyRequestForm", "Bender");
    rob->action();

    std::cout << "-------PRES EXECUTION-------------" << std::endl;

    pres = intern.makeForm("PresidentialPardonForm", "Bender");
    pres->action();

    std::cout << "--------------------" << std::endl;


    delete shru;
    delete rob;
    delete pres;
    
    return (0);
}