/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:03:47 by achanek           #+#    #+#             */
/*   Updated: 2025/10/21 16:17:27 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
    : size(0), next(0)
{}

void PhoneBook::newcontact(Contact &c)
{
    contacts[next] = c;
    if (size < 8)
        size++;
    next = (next + 1) % 8;
}

static  std::string correct_format(std::string &s) {
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

void PhoneBook::print_all_contact()
{
    std::cout   << "Indix"      <<  '|'
                << "First Name" <<  '|'
                << "Last Name"  <<  '|'
                << "Nickname"   <<  '|' << std::endl;
    for (int i = 0; i < size ;i++)
    {
        std::cout   << (i + 1)                                          << "|"
                    << correct_format(contacts[i].get_first_name())     << '|'
                    << correct_format(contacts[i].get_last_name())      << '|'
                    << correct_format(contacts[i].get_darkest_secret()) << std::endl;
    }
}

void PhoneBook::print_cantact(int i)
{
    if (i < 0 || i > 8)
        std::cout << "invalide index\n";
    std::cout << contacts[i].get_first_name() << std::endl
              << contacts[i].get_last_name() << std::endl
              << contacts[i].get_nick_name() << std::endl
              << contacts[i].get_phone_number() << std::endl
              << contacts[i].get_darkest_secret() << std::endl;
}

int PhoneBook::get_size() { return size;};

