#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>

class Contact {

    private:

        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;

        std::string _display_first_name;
        std::string _display_last_name;
        std::string _display_nickname;

    public:

        Contact();
        ~Contact();
        void    set_FirstName(std::string first_name);
        void    set_LastName(std::string last_name);
        void    set_NickName(std::string nickname);
        void    set_PhoneNumber(std::string phonebook);
        void    set_DarkestSecret(std::string darkest_secret);
        std::string const get_variable(int control) const;
};

#endif