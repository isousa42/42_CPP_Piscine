#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void    PhoneBook::set_contact(std::string set, int control, int index)
{
    if (control == 0)
        _contact[index].set_FirstName(set);
    else if (control == 1)
        _contact[index].set_LastName(set);
    else if (control == 2)
        _contact[index].set_NickName(set);
    else if (control == 3)
        _contact[index].set_PhoneNumber(set);
    else if (control == 4)
        _contact[index].set_DarkestSecret(set);
}

std::string const   PhoneBook::get_contact(int control, int index) const
{
    return(_contact[index].get_variable(control));
}