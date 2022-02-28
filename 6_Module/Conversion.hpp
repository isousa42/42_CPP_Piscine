
#ifndef CONVERSION_HPP
# define CONVERVION_HPP

# include <iostream>

class Conversion {

    private:

        std::string const _input;
        int _type;

    public:
    
        Conversion();
        ~Conversion();
        Conversion(std::string const &input);
        Conversion(const Conversion &conv);
        Conversion& operator=(const Conversion &conv);

        void detectType(void);




}



#endif

