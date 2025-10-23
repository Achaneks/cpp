#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook()
    : size(0), next(0)
{}

void PhoneBook::addContact(const Contact &c) {
    contacts[next] = c;
    if (size < 8) size++;
    next = (next + 1) % 8;
}

int PhoneBook::getSize() const {
    return size;
}

// helper: format a field for column (truncate if needed)
static std::string formatField(const std::string &s) {
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

void PhoneBook::displaySummary() const {
    std::cout << std::setw(10) << "Index" << "|" 
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < size; ++i) {
        // index shown to user as 1-based
        std::cout << std::setw(10) << (i + 1) << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::displayContact(int index) const {
    if (index < 0 || index >= size) {
        std::cout << "Invalid index\n";
        return;
    }
    const Contact &c = contacts[index];
    std::cout << "First name: " << c.getFirstName() << std::endl;
    std::cout << "Last name: " << c.getLastName() << std::endl;
    std::cout << "Nickname: " << c.getNickname() << std::endl;
    std::cout << "Phone number: " << c.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << c.getDarkestSecret() << std::endl;
}
