#include "Fixed.hpp"

// 1 = 00000001 
// 1 << 8 = 10000000
// nbr * (1 << _frac_bits) = width of the number representation

Fixed::Fixed()
{
    _fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
    _fixed_point = nbr * (1 << _frac_bits);
    std::cout << "Default constructor called" << std::endl;
}

//roundf because _fixed_point 
Fixed::Fixed(const float nbr)
{
    _fixed_point = roundf(nbr * (1 << _frac_bits));
    std::cout << "Default constructor called"<<this->getRawBits()<< std::endl;
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

    _fixed_point = copy.getRawBits();
    return (*this);
}

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