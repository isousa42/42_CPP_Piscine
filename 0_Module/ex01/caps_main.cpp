#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

void    add_contact(PhoneBook *phone_book, int i)
{
    phone_book->contact[i].get_FirstName();
    phone_book->contact[i].get_LastName();
    phone_book->contact[i].get_NickName();
    phone_book->contact[i].get_PhoneNumber();
    phone_book->contact[i].get_DarkestSecret();
}

int main(void)
{
    std::string command;
    PhoneBook phone_book;

    std::cout << "Welcome to CAPS: Crappy Awesome Phone Software" << std::endl;
    while (1)
    {
        std::cout << "You can ADD a contact, SEARCH it or EXIT the CAPS" << std::endl;
        std::cout << "Insert what you want to do: (please)" << std::endl;
        std::cin >> command;
        if (command.compare("ADD") == 0)
        {
            add_contact(&phone_book, 0);
            std::cout << phone_book.contact[0].first_name << std::endl;
            std::cout << phone_book.contact[0].last_name << std::endl;
            std::cout << phone_book.contact[0].nickname << std::endl;
            std::cout << phone_book.contact[0].phone_number << std::endl;
            std::cout << phone_book.contact[0].darkest_secret << std::endl;


        }
        else if (command.compare("SEARCH") == 0)
            std::cout << "NOTHING TO SEARCH" << std::endl;
        else if (command.compare("EXIT") == 0)
            exit(0);
        else
            continue ;
    }
}