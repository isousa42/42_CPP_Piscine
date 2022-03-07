
#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>

class Base {

    public:
        virtual ~Base() {};
    private:

};

class A : public Base{

};


class B : public Base{

};


class C : public Base{

};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
