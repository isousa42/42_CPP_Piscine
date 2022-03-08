
#include "Array.hpp"
#include <iostream>

int main(void)
{
    std::cout << "----- EMPTY ARRAY TEST -----" << std::endl;

    Array<int> empty;

    try
    {
        std::cout << empty[0] << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout <<  error.what() << std::endl;
    }

    std::cout << "----- UNSIGNED INT INICIALIZATION TEST -----" << std::endl;

    int *a = new int[10];
    Array<int> first(10);

    for(int i = 0; i < 10; i++)
        std::cout << "a = " << a[i] << " && first = " << first[i] << std::endl;
    
    delete[] a;

    std::cout << "----- COPY CONST AND ASSIGNATION OPERATOR TEST -----" << std::endl;

    std::cout << "--> Creation with Copy Construtor:" << std::endl;
    for(int i = 0; i < 10; i++)
        first[i] = i;
    
    Array<int> second(first);
    for(int i = 0; i < 10; i++)
        std::cout << "first = " << first[i] << " && second = " << second[i] << std::endl;
    
    std::cout << "--> Creation with Assignation Operator:" << std::endl;

    Array<int> third;
    third = first;

    for(int i = 0; i < 10; i++)
        std::cout << "first = " << first[i] << " && third = " << third[i] << std::endl;

    std::cout << "--> Changing Values of First:" << std::endl;

    for(int i = 0; i < 10; i++)
        first[i] = i + 2;
    for(int i = 0; i < 10; i++)
        std::cout << "first = " << first[i] << " && second = " << second[i] << " && third = " << third[i] << std::endl;
    std::cout << "--> Changing Values of Second:" << std::endl;
    
    for(int i = 0; i < 10; i++)
        second[i] = i - 5;
    for(int i = 0; i < 10; i++)
        std::cout << "first = " << first[i] << " && second = " << second[i] << " && third = " << third[i] << std::endl;

    std::cout << "----- EXCEPTION TEST -----" << std::endl;

    try
    {
        std::cout << third[50] << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout <<  error.what() << std::endl;
    }
    
    try
    {
        std::cout << third[-1] << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout <<  error.what() << std::endl;
    }

    std::cout << "----- SIZE FUNTION TEST -----" << std::endl;

    std::cout << "size = " << first.size() << std::endl;
    
    return (0);
}