

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

/*
**  Function templates allows us to use it with more than one type of arguments.
**  This has the advantage that we don't need to repeat code for different types.
**  We use "templates parameters" (just like funtion parameters) to indicate the type of arguments passed to the template.
**
**  Format of Template: (BOTH WORKS IN THE EXACT SAME WAY)
**  template <class identifier> function_declaration;
**  template <typename identifier> function_declaration;
**
**  Check this out: https://www.cplusplus.com/doc/oldtutorial/templates/
**
**  *NOTE: Awesome class is literally copy-paste from the evaluation PDF of the exarcise. Not done by me.
*/

class Awesome
{
    public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
    private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

template <class myType>
void swap (myType &a, myType &b) 
{
    myType temp;
    temp = a;
    a = b;
    b = temp;
}

template <class myType>
myType min (myType a, myType b) 
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <class myType>
myType max (myType a, myType b) 
{
    if (a > b)
        return (a);
    else
        return (b);
}


#endif