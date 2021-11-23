#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

/*
** the _frac_bits is the width of the number representation
** the _fixed_point is the binary point position of the number
** imagine number 10101.010 has 8 _frac_bits and 3 _fixed_point
** It is all about bit shifting the number until the number of the fixed_point
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

        int getRawBits(void);
        void setRawBits(int const raw);
};

#endif