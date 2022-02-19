
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const Animal* array[10];

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