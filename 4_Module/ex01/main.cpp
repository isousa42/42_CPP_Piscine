
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const Animal* array[10];

    for(int i = 0; i < 10; i++)
    {
        if (i % 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();


    }
    // for(int i = 5; i < 10; i++)
    //     array[i] = new Cat();

    for(int i = 0; i < 10; i++)
        delete array[i];

    Dog basic;
    {
        Dog tmp = basic;
    }

    

    // Cat gato;
    // Cat copia(gato);

    // Cat outro_gato;
    // Cat copia_outro_gato;
    // copia_outro_gato = outro_gato;

    return (0);
}