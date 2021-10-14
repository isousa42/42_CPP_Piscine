#include "Contact.class.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
    return ;
}

void    Contact::set_FirstName(std::string first_name)
{
    _first_name = first_name;
    if (first_name.length() > 10)
    {
        _display_first_name = first_name.substr(0,9);
        _display_first_name.append(".");
    }
    else
    {
        unsigned long size = 10;
        _display_first_name = first_name;
        while (size > first_name.length())
        {
            _display_first_name.append(" ");
            size--;
        }
    }
}

void    Contact::set_LastName(std::string last_name)
{
    _last_name = last_name;
    if (last_name.length() > 10)
    {
        _display_last_name = last_name.substr(0,9);
        _display_last_name.append(".");
    }
    else
    {
        unsigned long size = 10;
        _display_last_name = last_name;
        while (size > last_name.length())
        {
            _display_last_name.append(" ");
            size--;
        }
    }
}

void    Contact::set_NickName(std::string nickname)
{
    _nickname = nickname;
    if (nickname.length() > 10)
    {
        _display_nickname = nickname.substr(0,9);
        _display_nickname.append(".");
    }
    else
    {
        unsigned long size = 10;
        _display_nickname = nickname;
        while (size > nickname.length())
        {
            _display_nickname.append(" ");
            size--;
        }
    }
}

void    Contact::set_PhoneNumber(std::string phone_number)
{
    _phone_number = phone_number;
}

void    Contact::set_DarkestSecret(std::string darkest_secret)
{
    _darkest_secret = darkest_secret;
}

std::string const Contact::get_variable(int control) const
{
    if (control == 0)
        return (_first_name);
    else if (control == 1)
        return (_last_name);
    else if (control == 2)
        return (_nickname);
    else if (control == 3)
        return (_phone_number);
    else if (control == 4)
        return (_darkest_secret);
    else if (control == 5)
        return (_display_first_name);
    else if (control == 6)
        return (_display_last_name);
    else if (control == 7)
        return (_display_nickname);
    else
        return (NULL);
}