
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bur("Amelia", 150);
    std::cout << bur.getName() << std::endl;
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    Bureaucrat other("Maria", 1);
    std::cout << other.getName() << std::endl;
    std::cout << other.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Olga", 151);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Graça", 0);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Linda", 5);
        std::cout << other_bur.getName() << std::endl;
        std::cout << other_bur.getGrade() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    try 
    {
        bur.decGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    try 
    {
        bur.incGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    try 
    {
        other.incGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    try 
    {
        other.decGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    std::cout << bur << std::endl;
    
    std::cout << "--------------------" << std::endl;
    
    return (0);
}