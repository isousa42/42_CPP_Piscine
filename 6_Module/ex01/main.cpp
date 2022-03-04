#include "Data.hpp"

/*
** REINTERPRET CAST - FOR THINGS WE DON'T KNOW WHAT IS (void)
** uintptr_t is an unsigned integer type that is capable of storing a data pointer. 
**  data_type *var_name = 
**      reinterpret_cast <data_type *>(pointer_variable);
*/ 

int main (void)
{
    Data data("EU");
    uintptr_t raw;
    Data *other;

    std::cout << data.getProof() << std::endl;

    raw = data.serialize(&data);
    other = data.deserialize(raw);

    std::cout << other->getProof() << std::endl;

    return (0);
}