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

        Fixed operator++ (void);
        Fixed operator++ (int nothing);
        Fixed operator-- (void);
        Fixed operator--(int nothing);

        static Fixed &max(Fixed &first, Fixed &second);
        static Fixed const &max(Fixed const &first, Fixed const &second);
        static Fixed &min(Fixed &first, Fixed &second);
        static Fixed const &min(Fixed const &first, Fixed const &second);


        int getFixedPoint(void) const;
        void setFixedPoint(int const nbr);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator <<(std::ostream &ost, Fixed const &fixed);

#endif