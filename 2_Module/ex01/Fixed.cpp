#include "Fixed.hpp"

// 1 = 00000001 
// 1 << 8 = 10000000


Fixed::Fixed()
{
    std::cout << "Default constructor called " << std::endl;
    _fixed_point = 0;
} 

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed_point = nbr * (1 << _frac_bits);
}

//roundf because fixed point numbers are not as precise as the floating point numbers
Fixed::Fixed(const float nbr)
{
    _fixed_point = roundf(nbr * (1 << _frac_bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator= (Fixed const &copy)
{
    std::cout << "Assignation Operator called" << std::endl;

    _fixed_point = copy.getFixedPoint();
    return (*this);
}

int Fixed::getFixedPoint(void) const
{
    return (_fixed_point);
}

void Fixed::setFixedPoint(int const nbr)
{
    _fixed_point = nbr;
}

float Fixed::toFloat(void) const
{
    return((float) ((_fixed_point / (float)(1 << _frac_bits))));
}

int Fixed::toInt(void) const
{
    return ((_fixed_point >> _frac_bits));
}

std::ostream & operator<<( std::ostream & ost, Fixed const &fixed){
	ost << fixed.toFloat();
	return ost;
}