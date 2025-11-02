#include "Contact.hpp"

Contact::Contact()
    : firstName(), lastName(), nickname(), phoneNumber(), darkestSecret()
{}

void Contact::setFirstName(const std::string &s) { firstName = s; }
void Contact::setLastName(const std::string &s) { lastName = s; }
void Contact::setNickname(const std::string &s) { nickname = s; }
void Contact::setPhoneNumber(const std::string &s) { phoneNumber = s; }
void Contact::setDarkestSecret(const std::string &s) { darkestSecret = s; }

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }

bool Contact::isFilled() const {
    return !firstName.empty() &&
           !lastName.empty() &&
           !nickname.empty() &&
           !phoneNumber.empty() &&
           !darkestSecret.empty();
}
