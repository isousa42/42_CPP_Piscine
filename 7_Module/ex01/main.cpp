
#include "iter.hpp"



int main(void)
{
    std::cout << "-------------INT ARRAY----------------" << std::endl;
    
    int array[] = {1,2,3,4,5};
    ::iter<int>(array, 5, printArray<int>);

    std::cout << "-------------CHAR ARRAY----------------" << std::endl;

    char c_array[] = "ola ines";


    ::iter<char>(c_array, 8, printArray<char>);

    std::cout << "-------------PDF EVALUATION TEST----------------" << std::endl;

    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print );


    return (0);
}