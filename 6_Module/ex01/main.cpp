

#include <iostream>

/*
** REINTERPRET CAST - FOR THINGS WE DON'T KNOW WHAT IS (void)
** uintptr_t = cena random
**  data_type *var_name = 
**      reinterpret_cast <data_type *>(pointer_variable);
*/ 


int main (int argc, char ** argv)
{
    (void)argc;
    uintptr_t tipo = reinterpret_cast<uintptr_t>(argv[1]);

    char *other = reinterpret_cast<char *>(tipo);

    std::cout << other << std::endl;

}