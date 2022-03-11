
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <ctime>
# include <cstdlib>

class Span {

    private:

        unsigned int        _n;
        std::vector<int>    _vec;


    public:

        Span();
        Span(unsigned int n);
        Span(const Span &span);
        Span& operator=(const Span &span);
        ~Span();

        void addNumber(int add);
        void addNumber(int addFrom, int addTo);
        int shortestSpan(void);
        int longestSpan(void);

};


#endif