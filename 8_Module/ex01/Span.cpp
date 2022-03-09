#include "Span.hpp"


Span::Span()
{
    std::cout << "Default Constructor called for Span" << std::endl;
    _n = 0;
    return ;
}

Span::Span(unsigned int n)
{
    std::cout << "Constructor called for Span" << std::endl;
    _n = n;
    return ;
}

Span::Span(const Span &span)
{
    std::cout << "Copy Construtor called for Span" << std::endl;
    *this = span;
    return ;
}

Span& Span::operator=(const Span &span)
{
    std::cout << "Assignation operator called for Span" << std::endl;
    _n = span._n;
    _vec = span._vec;
    return (*this);
}

Span::~Span()
{
    std::cout << "Destructor called for Span" << std::endl;
    return ;
}


// MEMBER FUNTIONS

void Span::addNumber(int add)
{
    if (_vec.size() < _n)
        _vec.push_back(add);
    else
        throw(std::exception());
}

void Span::addNumber(int addFrom, int addTo)
{
    if (_vec.size() < _n)
        _vec.push_back(add);
    else
        throw(std::exception());
}

int Span::shortestSpan(void)
{
    if (_vec.size() < 2)
        throw(std::exception());
    
    std::vector<int>    copy = _vec;
    std::vector<int>::iterator small;
    int smallest;
    int secSmallest;
    int distance = 0;
    int save_distance = this->longestSpan();

    while (copy.size() > 1)
    {
        small = std::min_element(copy.begin(), copy.end());
        smallest = *small;
        copy.erase(small);
        small = std::min_element(copy.begin(), copy.end());
        secSmallest = *small;
        distance = secSmallest - smallest;
        if (distance < save_distance)
            save_distance = distance;
    }

    return (save_distance);

}

int Span::longestSpan(void)
{
    if (_vec.size() < 2)
        throw(std::exception());

    std::vector<int>::iterator small = std::min_element(_vec.begin(), _vec.end());
    std::vector<int>::iterator big = std::max_element(_vec.begin(), _vec.end());
    int distance = *big - *small;

    return (distance);
}
