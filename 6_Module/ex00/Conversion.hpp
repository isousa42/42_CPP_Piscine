
#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>



class Conversion {

    private:

        std::string _input;
        int _type;
        double _value;

    public:
    
        Conversion();
        ~Conversion();
        Conversion(char *argv);
        Conversion( Conversion &conv);

        Conversion& operator=( Conversion &conv);

        void detectType(char *argv);
        void convChar(void);
        void convInt(void);
        void convFloat(void);
        void convDouble(void);



        int getType(void);
        std::string& getInput(void);
        double getValue(void);
        void setValue(double x);

};

std::ostream &operator<<( std::ostream & ost, Conversion &conv);


#endif

