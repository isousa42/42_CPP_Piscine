
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat bur("Amelia", 30);
    Form form("FORMA", 5, 10);

    std::cout << form.getGradeToExecute() << std::endl;
    std::cout << form.getGradeToSign() << std::endl;
    std::cout << form.getName() << std::endl;

    std::cout << form;

    try
    {
        form.beSigned(bur);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << form.getSigned() << std::endl;

    try 
    {
        Form try_form("TRY", 1, 151);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    
    return (0);
}