#include "Karen.hpp"

int main(int argc, char **argv)
{
    std::string arg;
    int var;
    Karen karen;

    if (argc < 2)
    {
        std::cout << "ERROR ARG" << std::endl;
        return (0);
    }
    else if (argc == 2)
        arg = argv[1];

    if (!arg.compare("DEBUG"))
        var = 1;
    else if (!arg.compare("INFO"))
        var = 2;
    else if (!arg.compare("WARNING"))
        var = 3;
    else if (!arg.compare("ERROR"))
        var = 4;
    else
        var = 0;
    switch(var)
    {
        case 0:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        }
        case 1:
            karen.complain("DEBUG");
        case 2:
            karen.complain("INFO");
        case 3:
            karen.complain("WARNING");
        case 4:
            karen.complain("ERROR");
    }

    return (0);
}