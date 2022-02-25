
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void)
{
    Bureaucrat bur("Amelia", 30);
    ShrubberyCreationForm shru("other");

    shru.action();
    std::cout << shru;

    RobotomyRequestForm rob("other");

    rob.action();
    std::cout << rob;
    
    return (0);
}