#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

    private:

        int _fixed_point;
        static const int _frac_bits = 8;

    public:

        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator= (const Fixed &copy);

        int getRawBits(void);
        void setRawBits(int const raw);
};

#endif