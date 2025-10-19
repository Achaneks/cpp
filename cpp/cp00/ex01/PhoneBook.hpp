


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int size;
        int next;
    public:
        void newcontact(Contact &c);
        void print_all_contact();
        void print_cantact(int i);
        int get_size();

};



#endif