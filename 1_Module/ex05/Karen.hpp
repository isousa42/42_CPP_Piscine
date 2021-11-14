#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

/*
//  typedef associates a name to a type of data.
//  ex: typedef int integer --> declaring integer n is the same as int n
*/

class Karen{

    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:

        Karen();
        ~Karen();

        typedef void (Karen::*func)(void);
        func funcs[4];

        void complain(std::string level);
};

#endif