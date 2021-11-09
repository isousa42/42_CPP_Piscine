#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal("ines");
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "name = " << meta->getType() << std::endl;
    std::cout << "name of j = " << j->getType() << std::endl;
    std::cout << "name of i = " << i->getType() << std::endl;


    delete j;
    delete i;
    delete meta;

    return (0);
}