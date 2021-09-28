#include <iostream>
#include <string>
#include <sstream>

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

void    display_search(PhoneBook *phone_book, int round, int index)
{
    std::string display;
    int stop = index;
    int i = 0;

    if (round == 0 && index == 0)
        std::cout << "NOTHING TO SEARCH" << std::endl;
    if (round == 1)
        stop = 8;
    while (i < stop)
    {
        std::cout << i + 1 << " | " << phone_book->contact[i].display_first_name << " | ";
        std::cout << phone_book->contact[i].display_last_name << " | ";
        std::cout << phone_book->contact[i].display_nickname << std::endl;
        i++;
    }
}

void    display_contact(PhoneBook *phone_book, int i)
{
    std::cout << phone_book->contact[i].first_name << std::endl;
    std::cout << phone_book->contact[i].last_name << std::endl;
    std::cout << phone_book->contact[i].nickname << std::endl;
    std::cout << phone_book->contact[i].phone_number << std::endl;
    std::cout << phone_book->contact[i].darkest_secret << std::endl;
}

int main(void)
{
    std::string command;
    std::string temp;
    PhoneBook phone_book;
    int index;
    int round = 0;
    int search_index;
    int control = 0;
    std::stringstream ss;

    index = 0;
    std::cout << "Welcome to CAPS: Crappy Awesome Phone Software" << std::endl;
    while (1)
    {
        std::cout << "You can ADD a contact, SEARCH it or EXIT the CAPS" << std::endl;
        std::cout << "Insert what you want to do: (please)" << std::endl;
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
        {
            add_contact(&phone_book, index);
            index++;
            if (index == 8)
            {
                round++;
                index = 0;
            }
        }
        else if (command.compare("SEARCH") == 0)
        {
            display_search(&phone_book, round, index);
            while (1)
            {
                std::cout << "Insert the index of the contact you want to check: (please)" << std::endl;
                std::getline(std::cin, temp);
                int x = 0;
                while (temp[x])
                {
                    if (!std::isdigit(temp[x]))
                    {
                        control++;
                        break ;
                    }
                    x++;
                }
                if (control == 0)
                {
                    ss << temp;
                    ss >> search_index;
                    display_contact(&phone_book, search_index - 1);
                    break ;
                }
                else
                {
                    std::cout << "INSERT A VALID INDEX!" << std::endl;
                }

            }
        }
        else if (command.compare("EXIT") == 0)
            exit(0);
        else
            continue ;
    }
}