#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int size; // current number of stored contacts (0..8)
    int next; // index to store next contact (circular 0..7)

public:
    PhoneBook();
    void addContact(const Contact &c);
    int getSize() const;
    void displaySummary() const; // prints the 4-column table
    void displayContact(int index) const; // prints full contact details
};

#endif
