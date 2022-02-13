#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

/*
** the _frac_bits is the width of the number representation in fractal part of the number (after binary point)
** the _fixed_point is the bits of the number (binary number)
** imagine number 10101.010 has 8 _frac_bits and the binary point is at the 3rd position to the left
** It is all about bit shifting the number until the number of the binary point.
**
** Const function members can be called to any object, const and non-const. Non-Const funtions
** can only be called to non-const objects. Making as many const
** functions is a recommended practice, in order to avoid accidental changes.
** Const member atributes need to be initialized int the moment of declaration.
*/

class Fixed{

    private:

        int _fixed_point;
        static const int _frac_bits = 8;

    public:

        Fixed();
        ~Fixed();
        Fixed(Fixed &fixed);
        Fixed &operator= (Fixed &copy);

        int getFixedPoint(void) const;
        void setFixedPoint(int const b_point);
};

#endif