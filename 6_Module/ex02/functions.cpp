
#include "Base.hpp"

/*
**  To generate the object of a class randomly, I used the % 100 to garanty
**  that x will always be <= 100. 99 is multiple of 3, so I garanty
**  that I will never receive the number 100 with the first while. In this way
**  all classes have the exact same probability "to be the chosen one".
**
**  In the identify(Base *p) funtion, It uses the dynamic_cast (used to cast classes).
**  It checks if it is any of the A, B, C class and prints what it identified.
**  If it was not able to identify, it means the pointer is NULL.
**  Note that, if the funtion could receive anoter type of data as parameter,
**  we would need to check if the pointer was really NULL, because it could point to another
**  class (different than A, B or C) and, in this case, the dynamic_cast would not work.
**
**  In the identify(Base &p) function, we will use exceptions. In this case, we want to check if the cast failed.
**  When a dynamic_cast fails it throws (automatically) a bad_cast error, that will be catched in the exeption.
**  It will try with the different types of class and check if any of them is true, if it is not, it will catch the error and
**  print the information in stdout, as a segmentation fault. 
*/

Base* generate(void)
{
    srand(time(0));
    int x = 100;
    while (x == 100)
        x = (rand() % 100);

    Base *newBase;
    if (x <= 33)
    {
        std::cout << "CREATE: A" << std::endl;
        return (newBase = new A());
    }
    else if (x <= 66)
    {
        std::cout << "CREATE: B" << std::endl;
        return (newBase = new B());
    }
    else
    {
        std::cout << "CREATE: C" << std::endl;
        return (newBase = new C());
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "IDENTIFIED: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "IDENTIFIED: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "IDENTIFIED: C" << std::endl;
    else
        std::cout << "NOT ABLE TO IDENTIFY" << std::endl;
}

void identify(Base& p)
{
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "IDENTIFIED: A" << std::endl;
    }
    catch (std::exception &error)
    {
        try 
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "IDENTIFIED: B" << std::endl;
        }
        catch (std::exception &error)
        {
            try 
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "IDENTIFIED: C" << std::endl;
            }
            catch (std::exception &error)
            {
                std::cout << error.what() << std::endl;
            }
        }
    }
}