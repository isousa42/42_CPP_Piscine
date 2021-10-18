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
    _fixed_point = fixed._fixed_point;
}

