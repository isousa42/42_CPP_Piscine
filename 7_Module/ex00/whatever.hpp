

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

/*
**  Function templates allows us to use it with more than one type of arguments.
**  This has the advantage that we don't need to repeat code for different types.
**  We use "templates parameters" (just like funtion parameters) to indicate the type of arguments passed to the template.
**
**  Format of Template: (BOTH WORKS IN THE EXACT SAME WAY)
**  template <class identifier> function_declaration;
**  template <typename identifier> function_declaration;
**
**  Check this out: https://www.cplusplus.com/doc/oldtutorial/templates/
*/

template <class myType>
void swap (myType a, myType b) 
{
    myType temp;
    temp = a;
    a = b;
    b = temp;
}

template <class myType>
myType min (myType a, myType b) 
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <class myType>
myType max (myType a, myType b) 
{
    if (a > b)
        return (a);
    else
        return (b);
}


#endif