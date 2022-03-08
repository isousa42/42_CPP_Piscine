
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


class Awesome
{
    public:

        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:

        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T & x ) { std::cout << x << std::endl; return; 
}

template <class myType>
void printArray(myType &a)
{
    std::cout << "print = " << a << std::endl;
}

template <class myType>
void iter (myType *array, int lenght, void (*funtion)(myType &))
{
    int i = 0;
    while (i < lenght)
    {
        (*funtion)(array[i]);
        i++;
    }
}



#endif