
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class myType>
void printArray(myType &a)
{
    std::cout << "print = " << a << std::endl;
}

template <class myType>
void iter (myType *array, int lenght, void (*funtion)(myType &))
{
    int i = 0;
    while (i < lenght)
    {
        (*funtion)(array[i]);
        i++;
    }
}

#endif