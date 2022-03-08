#ifndef ARRAY_HPP
# define ARRAY_HPP

/*
**  Class templates are like funtions templates. They are very util when we need a class to work with different data types.
**  Examples: Array, Queues, Linked Lists, Binary Trees, etc etc...
**
**  First, we need the template keyword to "define" the variable we will use for the data (as we did in the funtions templates).
*/

template <typename anyType>

class Array {

    private:

        anyType *array;
        int     size;

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
    _array = NULL;
    _size = 0;
}

template <typename anyType>
Array<anyType>::Array(unsigned int size) 
{
    _array = new anyType[size];
    _size = size;

    int i = 0;
    while (i < size)
    {
        _array[i] = 0;
        i++;
    }
}

template <typename anyType>
Array<anyType>::Array(const Array<anyType> &copy) 
{
    *this = copy;
}

template <typename anyType>
Array<anyType>& Array<anyType>::operator=(const Array<anyType> &copy) 
{
    delete[] _array;
    _size = copy.size;
    if (_size > 0)
    {
        _array = new anyType[_size];
        int i = 0;
        while (i < _size)
        {
            _array[i] = copy.array[i];
            i++;
        }
    }
    else
    __array = NULL;

    return (*this);

}

template <typename anyType>
anyType& Array<anyType>::operator[](int index)
{
    if (i >= index || i < 0)
        throw(std::exception());
    else
        return (_array[i]);
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