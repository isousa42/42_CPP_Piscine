#include <iostream>

void    ft_toupper(char **argv)
{
    int i;
    int j;

    i = 1;
    while(argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
                argv[i][j] = toupper(argv[i][j]);
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        ft_toupper(argv);
        while (argv[i])
        {
            std::cout << argv[i];
            std::cout << ' ';
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}