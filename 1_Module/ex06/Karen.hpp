#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

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
