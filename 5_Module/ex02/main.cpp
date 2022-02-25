
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
    Bureaucrat bur("Amelia", 30);
    Bureaucrat other_bur("Fernanda", 150);

    std::cout << bur;
    
    std::cout << "--------------------" << std::endl;

    ShrubberyCreationForm shru("other");

    shru.action();
    std::cout << shru;

    std::cout << "--------------------" << std::endl;


    RobotomyRequestForm rob("other");

    rob.action();
    std::cout << rob;

    std::cout << "--------------------" << std::endl;


    PresidentialPardonForm pre("other");

    pre.action();
    std::cout << pre;

    std::cout << "-----------EXECUTE SHRU---------" << std::endl;

    bur.executeForm(shru);
    other_bur.executeForm(shru);


    std::cout << "------EXECUTE ROBOTOMY--------------" << std::endl;

    bur.executeForm(rob);
    other_bur.executeForm(rob);


    std::cout << "--------EXECUTE PRESIDENTIAL------------" << std::endl;

    bur.executeForm(pre);
    other_bur.executeForm(pre);

    std::cout << "--------------------" << std::endl;


    
    return (0);
}