
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat bur("Amelia", 30);
    ShrubberyCreationForm shru("name");

    shru.action();
    // std::cout << shru.getName();
    // shru.getGradeToSign();
    // shru.getGradeToExecute();
    // shru.getSigned();
    std::cout << shru;
    
    return (0);
}