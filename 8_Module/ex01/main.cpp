
#include "Span.hpp"
#include <cstdlib>


int main(void)
{
    srand(time(0));

    Span span(10);
    for(int i = 0; i < 10; i++)
    {
        try
        {
            int x = rand() % 100;
            span.addNumber(x);
            std::cout << "Added: " << x << std::endl;
        }
        catch (std::exception &error)
        {
            std::cout << "Unable to add: " << i << " because: " << error.what() << std::endl;
        }
    }

    try
    {
        std::cout << "Shortest: " << span.shortestSpan() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << " Could not find: " << error.what() << std::endl;
    }

    try
    {
        std::cout << "Longest: " << span.longestSpan() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << " Could not find: " << error.what() << std::endl;
    }

    std::cout << "----- SUBJECT MAIN -----" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }


    return (0);
}