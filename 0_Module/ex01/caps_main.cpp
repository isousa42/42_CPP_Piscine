#include <iostream>
#include <string>
#include <sstream>

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

void    add_contact(PhoneBook *phone_book, int i)
{
    std::string set;

    std::cout << "\nCREATING A NEW CONTACT:\n" << std::endl;
    std::cout << "Insert First Name: ";
    std::getline(std::cin, set);
    phone_book->set_contact(set, 0, i);
    std::cout << "Insert Last Name: ";
    std::getline(std::cin, set);
    phone_book->set_contact(set, 1, i);
    std::cout << "Insert Nickame: ";
    std::getline(std::cin, set);
    phone_book->set_contact(set, 2, i);
    std::cout << "Insert Phone Number: ";
    std::getline(std::cin, set);
    phone_book->set_contact(set, 3, i);
    std::cout << "Insert Darkest Secret: ";
    std::getline(std::cin, set);
    phone_book->set_contact(set, 4, i);
}

void    display_search(PhoneBook *phone_book, int round, int index)
{
    std::string display;
    int stop = index;
    int i = 0;

    std::cout << "\nCONTACTS IN CAPS:\n";

    if (round == 1)
        stop = 8;
    while (i < stop)
    {
        std::cout << i + 1 << " | " << phone_book->get_contact(5, i) << " | ";
        std::cout << phone_book->get_contact(6, i) << " | ";
        std::cout << phone_book->get_contact(7, i) << std::endl;
        i++;
    }
}

void    display_contact(PhoneBook *phone_book, int i)
{
    std::cout << "\nCONTACT NUMBER " << i + 1 << ":\n" << std::endl;
    std::cout << "First Name: ";
    std::cout << phone_book->get_contact(0, i) << std::endl;
    std::cout << "Last Name: ";
    std::cout << phone_book->get_contact(1, i) << std::endl;
    std::cout << "Nickame: ";
    std::cout << phone_book->get_contact(2, i) << std::endl;
    std::cout << "Phone Number: ";
    std::cout << phone_book->get_contact(3, i) << std::endl;
    std::cout << "Darkest Secret: ";
    std::cout << phone_book->get_contact(4, i) << std::endl;
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
  

    index = 0;
    std::cout << "Welcome to CAPS: Crappy Awesome Phone Software" << std::endl;
    while (1)
    {
        std::cout << "\nYou can ADD a contact, SEARCH it or EXIT the CAPS" << std::endl;
        std::cout << "\nInsert what you want to do: (please)" << std::endl;
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
            std::cout << "\nSEARCHING IN CAPS:\n" << std::endl;

            display_search(&phone_book, round, index);
            while (1)
            {
                if (round == 0 && index == 0)
                {
                    std::cout << " --> NOTHING TO SEARCH" << std::endl;
                    break ;
                }
                std::cout << "Insert the index of the contact you want to check: (please)" << std::endl;
                std::getline(std::cin, temp);
                if (temp.compare("EXIT") == 0)
                    exit(0);
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
                std::stringstream ss;
                ss << temp;
                ss >> search_index;
                if (search_index <= 0 || (round == 0 && search_index > index) || (round == 1 && search_index > 8))
                    control++;
                if (control == 0)
                {
                    std::stringstream ss;
                    ss << temp;
                    ss >> search_index;
                    display_contact(&phone_book, search_index - 1);
                    break ;
                }
                else
                {
                    std::cout << "INSERT A VALID INDEX!" << std::endl;
                    control = 0;
                }
            }
        }
        else if (command.compare("EXIT") == 0)
            exit(0);
        else
            continue ;
    }
}