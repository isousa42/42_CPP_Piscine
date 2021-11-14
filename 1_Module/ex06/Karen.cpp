#include "Karen.hpp"

Karen::Karen()
{
    funcs[0] = &Karen::debug;
    funcs[1] = &Karen::info;
    funcs[2] = &Karen::warning;
    funcs[3] = &Karen::error;
    return ;
}

Karen::~Karen()
{
    return ;
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
    return ;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
    return ;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
    return ;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}

void Karen::complain(std::string level)
{
    int i = 0;

    (!level.compare("DEBUG") && (i = 0));
    (!level.compare("INFO") && (i = 1));
    (!level.compare("WARNING") && (i = 2));
    (!level.compare("ERROR") && (i = 3));

    (this->*funcs[i])();
    return ;
}