#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

/*
**  Class templates are like funtions templates. They are very util when we need a class to work with different data types.
**  Examples: Array, Queues, Linked Lists, Binary Trees, etc etc...
**
**  First, we need the template keyword to "define" the variable we will use for the data (as we did in the funtions templates).
*/

template <typename anyType>

class Array {

    private:

        anyType *_array;
        int     _size;

    public:

        Array<anyType>();
        Array<anyType>(unsigned int size);
        Array<anyType>(const Array<anyType> &copy);
        Array<anyType>& operator=(const Array<anyType> &copy);
        anyType& operator[](int index);
        ~Array<anyType>();

        int size(void);

};

template <typename anyType>
Array<anyType>::Array() 
{
    _array = 0;
    _size = 0;
}

template <typename anyType>
Array<anyType>::Array(unsigned int size) 
{
    _array = new anyType[size];
    _size = size;

    // unsigned int i = 0;
    // while (i < size)
    // {
    //     _array[i] = 0;
    //     i++;
    // }
}

template <typename anyType>
Array<anyType>::Array(const Array<anyType> &copy) 
{
    *this = copy;
}

template <typename anyType>
Array<anyType>& Array<anyType>::operator=(const Array<anyType> &copy) 
{
    _size = copy._size;
    if (_size > 0)
    {
        _array = new anyType[_size];
        int i = 0;
        while (i < _size)
        {
            _array[i] = copy._array[i];
            i++;
        }
    }
    else
        _array = 0;

    return (*this);

}

template <typename anyType>
anyType& Array<anyType>::operator[](int index)
{
    if (index >= _size || index < 0)
        throw(std::exception());
    else
        return (_array[index]);
}

template <typename anyType>
Array<anyType>::~Array() 
{
    delete[] _array;
}

template <typename anyType>
int Array<anyType>::size(void)
{
    return (_size);
}

#endif