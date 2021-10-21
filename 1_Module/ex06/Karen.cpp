#include "Karen.hpp"

Karen::Karen()
{
    funcs[0] = &Karen::debug;
    funcs[1] = &Karen::info;
    funcs[2] = &Karen::warning;
    funcs[3] = &Karen::error;
    std::cout << "Construtor called for Karen" << std::endl;
}

Karen::~Karen()
{
    std::cout << "Destructor called for Karen" << std::endl;
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    int i = 0;

    (!level.compare("DEBUG") && (i = 0));
    (!level.compare("INFO") && (i = 1));
    (!level.compare("WARNING") && (i = 2));
    (!level.compare("ERROR") && (i = 3));

    (this->*funcs[i])();
}