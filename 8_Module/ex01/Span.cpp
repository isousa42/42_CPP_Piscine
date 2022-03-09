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

int Span::shortestSpan(void)
{
    std::vector<int>    copy = _vec;

    int smallest;
    int secSmallest;
    std::vector<int>::iterator small = std::min_element(copy.begin(), copy.end());
    smallest = *small;
    copy.erase(small);
    small = std::min_element(copy.begin(), copy.end());
    secSmallest = *small;

    int distance = secSmallest - smallest;
    return (distance);

}

int Span::longestSpan(void)
{
    std::vector<int>::iterator small = std::min_element(_vec.begin(), _vec.end());
    std::vector<int>::iterator big = std::max_element(_vec.begin(), _vec.end());

    int distance = *big - *small;
    return (distance);
}
