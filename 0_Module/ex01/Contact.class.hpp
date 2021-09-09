#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>

class Contact {

    public:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    int phone_number;
    std::string darkest_secret;

    void    get_FirstName()
    {
        std::getline(std::cin, first_name);
    }

    void    get_LastName()
    {
        std::cin >> last_name;
    }

    void    get_NickName()
    {
        std::cin >> nickname;
    }

    void    get_PhoneNumber()
    {
        std::cin >> phone_number;
    }

    void    get_DarkestSecret()
    {
        std::cin >> darkest_secret;
    }

};

#endif