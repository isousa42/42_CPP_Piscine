
#include "Conversion.hpp"

/*
**  First step to make the conversions is to detect the type of input we have.
**  To do this I created the variable _type that will indicate the type of the input. 
**  It will start at 0. After funtion detectType(): 1 = Int ; 2 = Float ; 3 = Double ; 4 = Char ; 5 = Other.
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

Conversion::Conversion(char *argv)
{
    std::cout << "Constructor called for Conversion" << std::endl;
    _type = 0;
    _input = static_cast<std::string>(argv);
    detectType(argv);
    return ;
}

Conversion::Conversion( Conversion &conv) : _input(conv._input)
{
    std::cout << "Copy Constructor called for Conversion" << std::endl;
    *this = conv;
    return ;
}

Conversion& Conversion::operator=( Conversion &conv)
{
    std::cout << "Assignation Operator Constructor called for Conversion" << std::endl;
    _type = conv._type;
    _value = conv._value;
    return (*this);
}

// MEMBER FUNCTIONS

void Conversion::detectType(char *argv)
{
    std::string conv = static_cast<std::string>(argv);
    if (_input.length() == 1)
    {
        char c = _input[0];
        if (c >= 48 && c <= 57)
            this->setValue(c - 48);
        else
            this->setValue(c);
    }
    else if (!(conv.compare("-inff")) || !(conv.compare("-inf")))
        _type = 1;
    else if (!(conv.compare("+inff")) || !(conv.compare("+inf")))
        _type = 2;
    else if (!(conv.compare("nanf")) || !(conv.compare("nan")))
        _type = 3;
    else
    {
        char *end;
        this->setValue(strtod(argv, &end));
    }
}

void    Conversion::convChar(void)
{
    if (_type > 0 ||_value < 0 || _value > 126)
        std::cout << "Char: Impossible" << std::endl;
    else if (_value >= 0 && _value <= 31)
        std::cout << "Char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(_value);
        std::cout << "Char: " << c << std::endl;
    }
}

void    Conversion::convInt(void)
{
    if (_type > 0)
        std::cout << "Integer: Impossible" << std::endl;    
    else
    {
        int i = static_cast<int>(_value);
        std::cout << "Integer: " << i << std::endl; 
    }
   
}

void    Conversion::convFloat(void)
{
    if (_type == 1)
        std::cout << "Float: -inff" << std::endl;    
    else if (_type == 2)
        std::cout << "Float: +inff" << std::endl; 
    else if (_type == 3)
        std::cout << "Float: nanf" << std::endl; 
    else 
    {
        float f = static_cast<float>(_value);
        std::cout << "Float: " << f << "f" << std::endl; 
    }    
}

void    Conversion::convDouble(void)
{
    if (_type == 1)
        std::cout << "Float: -inf" << std::endl;    
    else if (_type == 2)
        std::cout << "Float: +inf" << std::endl; 
    else if (_type == 3)
        std::cout << "Float: nan" << std::endl; 
    else 
        std::cout << "Double: " << _value << std::endl;        
}

// GETTERS AND SETTERS

int    Conversion::getType(void)
{
    return (_type);
}

std::string&    Conversion::getInput(void)
{
    return (_input);
}

double    Conversion::getValue(void)
{
    return (_value);
}

void    Conversion::setValue(double x)
{
    _value = x;
}

// OTHER

std::ostream &operator<<( std::ostream & ost, Conversion &conv)
{
	ost << "input: " << conv.getInput() << ", value: " << conv.getValue() << ", type: " << conv.getType() << std::endl;
	return ost;
}
