
#include "Span.hpp"
#include <cstdlib>


int main(void)
{
    srand(time(0));

    Span span(10);
    for(int i = 0; i < 15; i++)
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

    std::cout << "Shortest: " << span.shortestSpan() << std::endl;
    std::cout << "Longest: " << span.longestSpan() << std::endl;

    return (0);
}