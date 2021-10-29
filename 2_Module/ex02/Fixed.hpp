#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

    private:

        int _fixed_point;
        static const int _frac_bits = 8;

    public:

        Fixed();
        ~Fixed();
        Fixed(Fixed const &fixed);

        Fixed(const int nbr);
        Fixed(const float nbr);

        Fixed &operator= (Fixed const &copy);
        bool operator> (Fixed const &copy);
        bool operator< (Fixed const &copy);
        bool operator>= (Fixed const &copy);
        bool operator<= (Fixed const &copy);
        bool operator== (Fixed const &copy);
        bool operator!= (Fixed const &copy);

        Fixed operator+ (Fixed const &copy);
        Fixed operator- (Fixed const &copy);
        Fixed operator* (Fixed const &copy);
        Fixed operator/ (Fixed const &copy);


        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator <<(std::ostream &ost, Fixed const &fixed);

#endif