#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook {

    private:

        Contact _contact[8];
    
    public:

        PhoneBook();
        ~PhoneBook();

        void                set_contact(std::string set, int control, int index);
        std::string const   get_contact(int control, int index) const;
};

#endif