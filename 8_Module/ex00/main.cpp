#include "easyfind.hpp"

#include <vector>

int main(void)
{
    
    std::vector<int> vec;
    for(int i = 0; i < 10; i++)
        vec.push_back(i);
    for(int i = 0; i < 10; i++)
        std::cout << "vector: " << vec[i] << std::endl;

    std::vector<int>::iterator index;


    try
    {
        index = easyfind(vec, -1);
        std::cout << "found: " << *index << std::endl;
    }
    catch(std::exception &error)
    {
        std::cout << "Did not found it: " << error.what() << std::endl;
    }

    try
    {
        index = easyfind(vec, 5);
        std::cout << "found: " << *index << std::endl;
    }
    catch(std::exception &error)
    {
        std::cout << "Did not found it: " << error.what() << std::endl;
    }

    try
    {
        index = easyfind(vec, 15);
        std::cout << "found: " << *index << std::endl;
    }
    catch(std::exception &error)
    {
        std::cout << "Did not found it: " << error.what() << std::endl;
    }


    return (0);
}