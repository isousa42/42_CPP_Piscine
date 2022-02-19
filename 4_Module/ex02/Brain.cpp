#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Constructor called for Brain" << std::endl;
    return ;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Default Constructor called for Brain" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return ;
}

Brain& Brain::operator=(const Brain brain)
{
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor called for Brain" << std::endl;
    return ;
}