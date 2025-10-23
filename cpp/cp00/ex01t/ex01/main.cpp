#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "cstdlib"

static std::string readNonEmptyLine(const std::string &prompt) {
    std::string s;
    while (true) {
        std::cout << prompt;
        if (!std::getline(std::cin, s)) return std::string(); // EOF handling
        if (!s.empty()) return s;
        std::cout << "Field cannot be empty. Please enter again.\n";
    }
}

int main() {
    PhoneBook pb;
    std::string cmd;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd)) break; // EOF -> exit
        if (cmd == "EXIT") {
            break;
        } else if (cmd == "ADD") {
            Contact c;
            std::string s;

            s = readNonEmptyLine("First name: ");
            if (s.empty()) continue;
            c.setFirstName(s);

            s = readNonEmptyLine("Last name: ");
            if (s.empty()) continue;
            c.setLastName(s);

            s = readNonEmptyLine("Nickname: ");
            if (s.empty()) continue;
            c.setNickname(s);

            s = readNonEmptyLine("Phone number: ");
            if (s.empty()) continue;
            c.setPhoneNumber(s);

            s = readNonEmptyLine("Darkest secret: ");
            if (s.empty()) continue;
            c.setDarkestSecret(s);

            if (c.isFilled()) {
                pb.addContact(c);
                std::cout << "Contact added.\n";
            } else {
                std::cout << "Could not add contact: some fields empty.\n";
            }

        } else if (cmd == "SEARCH") {
            if (pb.getSize() == 0) {
                std::cout << "PhoneBook is empty.\n";
                continue;
            }
            pb.displaySummary();
            std::cout << "Enter index to display: ";
            std::string idxStr;
            if (!std::getline(std::cin, idxStr)) break;
            // simple numeric validation
            bool validNum = true;
            for (size_t i = 0; i < idxStr.length(); ++i)
                if (!isdigit(idxStr[i])) validNum = false;
            if (!validNum || idxStr.empty()) {
                std::cout << "Invalid index\n";
                continue;
            }
            int idx = std::atoi(idxStr.c_str());
            if (idx <= 0 || idx > pb.getSize()) {
                std::cout << "Invalid index\n";
                continue;
            }
            pb.displayContact(idx - 1);
        } else {
            // ignore unknown commands
            continue;
        }
    }

    return 0;
}
