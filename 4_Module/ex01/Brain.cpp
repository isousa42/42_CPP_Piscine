#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Constructor called for Brain" << std::endl;
    return ;
}

Brain::Brain(const Brain &Brain)
{
    std::cout << "Default Constructor called for Brain" << std::endl;
    *this = Brain;
    return ;
}

Brain& Brain::operator=(const Brain &Brain)
{
    (void)Brain;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor called for Brain" << std::endl;
    return ;
}