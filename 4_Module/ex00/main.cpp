#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal("ines");
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "name = " << meta->getType() << std::endl;
    std::cout << "name of j = " << j->getType() << std::endl;
    std::cout << "name of i = " << i->getType() << std::endl;

    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

    const WrongAnimal *wrong = new WrongAnimal("ola");
    const WrongAnimal *wcat = new WrongCat();

    std::cout << "name = " << wrong->getType() << std::endl;
    std::cout << "name of j = " << wcat->getType() << std::endl;

    wrong->makeSound();
    wcat->makeSound();

    delete wrong;
    delete wcat;

    return (0);
}