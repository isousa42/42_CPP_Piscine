
#include <iostream>

/*
**  We already know that constants are variables that we can NOT change the value. Literals are the values of this variables.
**  eg: const int x = 5;  --> 'x' is the const and '5' is the literal.
**  All basic data types (int, char, float/double, string and boolean) can be constant, so its values can be literal.
**  
**  In case of integers literals, they can be decimal, octal or hexadecimal constants and they are represented in different ways:
**  hexadecimal starts with "0x" or "0X", octal starts with "0" and decimal starts with the real number.
**  We can also add the suffix U (for unsigned) and L (for long) to represent that type of data. It can be lower or uppercase
**  
**  In case of Floating Points, they have a fractional part and an exponencial part, separated by a decimal point.
**  Doubles are the same, but bigger.
**
**  Chars are enclosed in single quotes ('a'). If the literal starts with L (uppercase) it means it is a
**  wide characteral literal and has to be wtored in wchar_t variable. Chars can be plain, escape sequence or universal character.
**
**  String literals are enclosed in double quotes ("ola"). They are groups of chars, so each caracter of a
**  string have the same characteristics as Char literals.
**
**  Booleans are very easy to understand... They are true (1) or false (0).
**
**  Note that, in this exercise, all literals will be represented in decimal (exceptioning the char).
**  Non-displayable characters should NOT be used as input and if the conversion is not displayable, print an informative message.
**
**
*/

#include "Conversion.hpp"


int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    
    Conversion conv(argv[1]);

    conv.convChar();
    conv.convInt();
    conv.convFloat();
    conv.convDouble();

    return (0);

}