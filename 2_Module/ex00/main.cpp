#include "Fixed.hpp"

/*
** Fixed Point Arithmetic are faster than floating points.
** It is used when performance is more important than precison.
** Most modern computer support floating point number but not fixed point number.
*/

int main( void ) 
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    
    c.setRawBits(5);
    std::cout << c.getRawBits() << std::endl;




    return 0;
}