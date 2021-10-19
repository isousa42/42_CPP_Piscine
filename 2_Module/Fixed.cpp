#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = fixed;
}

Fixed &Fixed::operator= (const Fixed &copy)
{
    std::cout << "Assignation Operator called" << std::endl;

    _fixed_point = copy._fixed_point;
    return (*this);
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;

    return (_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

