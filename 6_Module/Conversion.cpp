
#include "Conversion.hpp"

/*
**  First step to make the conversions is to detect the type of input we have.
**  To do this I created the variable _type that will indicate the type of the input. 
**  It will start at 0. After funtion detectType(): 1 = Int ; 2 = Float ; 3 = Double ; 4 = Char.
**
**  There are two types of Conversion: Implicit (done by the compiler, also know as automatic conversion) and Explicit (also know as Type Cast).
**  There are 3 main ways that we can use Explicit Conversion: C-style type casting (also know as cast notation),
**  Funtion notation, also know as old C++ style type casting) and Type conversion Operatores.
**
**  C-style Type Casting:
**  Used in C, eg: int x = 5; (double) double n; double = (double)x;
**  Funtion-Style Casting:
**  Same as in C-style, but used like a funtion. eg: int x = 5; (double) double n; double = double(x);
**  Type Conversion Operators:
**  -->  static_cast 
**          It is the simplest type of cast. Works like the implicit conversion, at compile time. Also, the safest to use.
**  -->  dinamic_cast (Used with dinamic memory, not very safe if you don't know FOR SURE what you are doing)
**  -->  const_cast (Very dangerous)
**  -->  reinterpret_cast (Very dangerous)
**      In the last two Conversion operators, is like we are telling the compiler to trust us like we know what we are doing
**          and for it to ignore the errors he think it will have. Remember, 97% of time, you don't know what you are doing.
**
**  For this reason, I choose to use static_cast, because it is the simplest and safest.
**  
*/

Conversion::Conversion()
{
    std::cout << "Default Constructor called for Conversion" << std::endl;
    _type = 0;

    return ;
}

Conversion::~Conversion()
{
    std::cout << "Destrutor called for Conversion" << std::endl;
    return ;
}

Conversion::Conversion(std::string const &input) : _input(input)
{
    std::cout << "Constructor called for Conversion" << std::endl;
    _type = 0;
    return ;
}

Conversion::Conversion(const Conversion &conv) : _input(conv._input)
{
    std::cout << "Copy Constructor called for Conversion" << std::endl;
    *this = conv;
    return ;
}

Conversion::Conversion(const Conversion &conv)
{
    std::cout << "Assignation Operator Constructor called for Conversion" << std::endl;
    _type = conv._type;
    return ;
}

// MEMBER FUNCTIONS

void Conversion::detectType(void)
{

}