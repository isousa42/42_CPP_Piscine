
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bur("Amelia", 150);
    std::cout << bur.getName() << std::endl;
    std::cout << bur.getGrade() << std::endl;

    try 
    {
        Bureaucrat bura("Amelia", 151);

    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    try 
    {
        bur.decGrade();
    }
    catch (Bureaucrat::GradeTooLowException &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    try 
    {
        bur.incGrade();
    }
    catch (Bureaucrat::GradeTooHighException &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << bur << std::endl;
    
    return (0);
}