
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    Animal animal;

    std::cout << "--------------------" << std::endl;

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << meta->getType() << " . " << std::endl;
    std::cout << animal.getType() << " . " << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    meta->makeSound();
    animal.makeSound();


    std::cout << "--------------------" << std::endl;

    delete meta;
    delete dog;
    delete cat;

    std::cout << "--------------------" << std::endl;

    const WrongAnimal* wrongcat = new WrongCat();
    wrongcat->makeSound();
    delete wrongcat;


    return 0;
}