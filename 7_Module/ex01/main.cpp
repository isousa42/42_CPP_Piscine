
#include "iter.hpp"



int main(void)
{
    std::cout << "-------------INT ARRAY----------------" << std::endl;
    
    int array[] = {1,2,3,4,5};
    ::iter<int>(array, 5, printArray<int>);

    std::cout << "-------------CHAR ARRAY----------------" << std::endl;

    char c_array[] = "ola ines";

    ::iter<char>(c_array, 8, printArray<char>);


    return (0);
}