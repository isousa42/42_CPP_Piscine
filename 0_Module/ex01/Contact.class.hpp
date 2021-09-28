#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>

class Contact {

    public:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::string display_first_name;
    std::string display_last_name;
    std::string display_nickname;

    void    get_FirstName()
    {
        std::getline(std::cin, first_name);
        if (first_name.length() > 10)
        {
            display_first_name = first_name.substr(0,9);
            display_first_name.append(".");
        }
        else
            display_first_name = first_name;
    }

    void    get_LastName()
    {
        std::getline(std::cin, last_name);
        if (last_name.length() > 10)
        {
            display_last_name = last_name.substr(0,9);
            display_last_name.append(".");
        }
        else
            display_last_name = last_name;
    }

    void    get_NickName()
    {
        std::getline(std::cin, nickname);
        if (nickname.length() > 10)
        {
            display_nickname = nickname.substr(0,9);
            display_nickname.append(".");
        }
        else
            display_nickname = nickname;
    }

    void    get_PhoneNumber()
    {
        std::getline(std::cin, phone_number);
    }

    void    get_DarkestSecret()
    {
        std::getline(std::cin, darkest_secret);
    }

};

#endif