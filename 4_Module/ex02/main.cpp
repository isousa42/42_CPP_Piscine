
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

/*
** The commentary in the main() will prove to show that Animal is an Abstract Class.
** If it is uncommented, it will have a compilation error. 
** All other tests are equal to the last exercise. 
*/


int main()
{
    const Animal* array[10];
    // Animal animal;
    // (void)animal;
    
    std::cout << "--------------------" << std::endl;


    for(int i = 0; i < 5; i++)
            array[i] = new Dog();
    for(int i = 5; i < 10; i++)
        array[i] = new Cat();

    std::cout << "--------------------" << std::endl;

    for(int i = 0; i < 10; i++)
        delete array[i];

    std::cout << "--------------------" << std::endl;


    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "--------------------" << std::endl;

    Cat other;
    {
        Cat tmp = other;
    }

    std::cout << "--------------------" << std::endl;


    Cat gato;
    Cat copia(gato);

    std::cout << "--------------------" << std::endl;


    Cat outro_gato;
    Cat copia_outro_gato;
    copia_outro_gato = outro_gato;

    std::cout << "--------------------" << std::endl;


    return (0);
}