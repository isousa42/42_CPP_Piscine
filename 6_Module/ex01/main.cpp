#include "Data.hpp"

/*
** REINTERPRET CAST - FOR THINGS WE DON'T KNOW WHAT IS (void)
** uintptr_t is an unsigned integer type that is capable of storing a data pointer. 
**  data_type *var_name = 
**      reinterpret_cast <data_type *>(pointer_variable);
**
** In this exercise, we will store a pointer to a struct in a uintptr_t (after casting it),
** then, we will convert a new class pointer to be equal to that one.
** I created the variable proof to show that the instance of the class is exactly the same
** in both pointers, they are pointing to the same spot in the memory.
*/ 

int main (void)
{
    Data data("AHFSUGEFU");
    uintptr_t raw;
    Data *other;

    std::cout << data.getProof() << std::endl;

    raw = data.serialize(&data);
    other = data.deserialize(raw);

    std::cout << other->getProof() << std::endl;

    return (0);
}