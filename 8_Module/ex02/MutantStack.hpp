
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <ctime>
# include <cstdlib>
# include <stack>

template<class Type>
class MutantStack : public std::stack<Type>{

    public:

        typedef typename std::stack<Type>::container_type::iterator iterator;

        MutantStack();
        MutantStack(const MutantStack &mutant);
        MutantStack& operator=(const MutantStack &mutant);
        ~MutantStack();

        iterator begin();
        iterator end();

};


#endif