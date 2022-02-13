#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixed_point = 0;
}

Fixed::Fixed(const int nbr)
{
    _fixed_point = nbr * (1 << _frac_bits);
}

Fixed::Fixed(const float nbr)
{
    _fixed_point = roundf(nbr * (1 << _frac_bits));

}

Fixed::~Fixed()
{
    return ;
}

Fixed::Fixed(Fixed const &fixed)
{
    *this = fixed;
}






Fixed &Fixed::operator= (Fixed const &copy)
{
    _fixed_point = copy.getFixedPoint();
    return (*this);
}

bool Fixed::operator> (Fixed const &copy)
{
    if (_fixed_point > copy.getFixedPoint())
        return (true);
    else
        return (false);
}

bool Fixed::operator< (Fixed const &copy)
{
    if (_fixed_point < copy.getFixedPoint())
        return (true);
    else
        return (false);
}

bool Fixed::operator>= (Fixed const &copy)
{
    if (_fixed_point >= copy.getFixedPoint())
        return (true);
    else
        return (false);
}

bool Fixed::operator<= (Fixed const &copy)
{
    if (_fixed_point <= copy.getFixedPoint())
        return (true);
    else
        return (false);
}

bool Fixed::operator== (Fixed const &copy)
{
    if (_fixed_point == copy.getFixedPoint())
        return (true);
    else
        return (false);
}

bool Fixed::operator!= (Fixed const &copy)
{
    if (_fixed_point != copy.getFixedPoint())
        return (true);
    else
        return (false);
}

Fixed Fixed::operator+ (Fixed const &copy)
{
    return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed Fixed::operator- (Fixed const &copy)
{
    return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed Fixed::operator* (Fixed const &copy)
{
    return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed Fixed::operator/ (Fixed const &copy)
{
    return (Fixed(this->toFloat() / copy.toFloat()));
}


//PRE-INCREMENT OPERATOR
// I want the value to be updated before being used.
Fixed Fixed::operator++ (void)
{
    _fixed_point++;
    return (*this);
}

//POST-INCREMENT OPERATOR
// I want the value to be updated after being used this time, that's why it returns the temp.
// When using ++(*this) I'm calling the operator of the pre-increment!
Fixed Fixed::operator++ (int nothing)
{
    (void)nothing;
    Fixed temp(*this);
    ++(*this);
    return (temp);
}

//PRE-DECREMENT OPERATOR
// I want the value to be updated before being used.
Fixed Fixed::operator-- (void)
{
    _fixed_point--;
    return (*this);
}

//POST-DECREMENT OPERATOR
// I want the value to be updated after being used this time, that's why it returns the temp.
// When using --(*this) I'm calling the operator of the pre-increment!
Fixed Fixed::operator-- (int nothing)
{
    (void)nothing;
    Fixed temp(*this);
    --(*this);
    return (temp);
}





Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    if (first.getFixedPoint() < second.getFixedPoint())
        return (second);
    else
        return (first);
}

Fixed const &Fixed::max(Fixed const &first, Fixed const &second)
{
    if (first.getFixedPoint() < second.getFixedPoint())
        return (second);
    else
        return (first);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    if (first.getFixedPoint() > second.getFixedPoint())
        return (second);
    else
        return (first);
}

Fixed const &Fixed::min(Fixed const &first, Fixed const &second)
{
    if (first.getFixedPoint() > second.getFixedPoint())
        return (second);
    else
        return (first);
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

std::ostream &operator<<( std::ostream & ost, Fixed const &fixed){
	ost << fixed.toFloat();
	return ost;
}