
#include "Base.hpp"

Base* generate(void)
{
    srand(time(0));
    int x = 100;
    while (x == 100)
        x = (rand() % 100);

    Base *newBase;
    if (x <= 33)
    {
        std::cout << "CREATE: A" << std::endl;
        return (newBase = new A());
    }
    else if (x <= 66)
    {
        std::cout << "CREATE: B" << std::endl;
        return (newBase = new B());
    }
    else
    {
        std::cout << "CREATE: C" << std::endl;
        return (newBase = new C());
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "IDENTIFIED: A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "IDENTIFIED: B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "IDENTIFIED: C" << std::endl;
}

void identify(Base& p)
{
    identify(&p);
}

int main (void)
{

    Base *random = generate();
    Base &other_random = *random;
    identify(random);
    identify(other_random);    

    return (0);
}