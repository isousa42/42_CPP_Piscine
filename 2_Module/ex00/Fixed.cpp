#include "Fixed.hpp"

// Default construtor initializes the _fixed_point value to 0 (as in the subject)
Fixed::Fixed()
{
    _fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

// Copy construtor, used to initialize a new object as a copy to other one
Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

// Assignation Operator Overload, used to set the _fixed_point of an object
// equal to other one.
Fixed &Fixed::operator= (Fixed &copy)
{
    std::cout << "Assignation Operator called" << std::endl;

    _fixed_point = copy.getRawBits();
    return (*this);
}

// Member function (get and set) to access the private variable of the class
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

