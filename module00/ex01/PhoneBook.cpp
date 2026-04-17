/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:03:47 by achanek           #+#    #+#             */
/*   Updated: 2025/12/18 14:43:26 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    size = 0;
    next = 0;
}


static  std::string correct_format(const std::string &s) {
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

void PhoneBook::print_all_contact()
{
    std::cout   << std::setw(10) <<"Indix"      <<  '|'
                << std::setw(10) <<"First Name" <<  '|'
                << std::setw(10) <<"Last Name"  <<  '|'
                << std::setw(10) <<"Nickname"   << 
                std::endl;
    for (int i = 0; i < size ;i++)
    {
        std::cout   << std::setw(10) <<(i + 1)                                          << "|"
                    << std::setw(10) <<correct_format(contacts[i].get_first_name())     << '|'
                    << std::setw(10) <<correct_format(contacts[i].get_last_name())      << '|'
                    << std::setw(10) <<correct_format(contacts[i].get_darkest_secret()) << std::endl;
    }
}

void PhoneBook::add_contact()
{   
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_number;
    std::string d_secret;
    
    std::cout << "First name: ";
    if (!std::getline(std::cin, f_name)) return;
    std::cout << "Last name: ";
    if (!std::getline(std::cin, l_name)) return;
    std::cout << "Nickname: ";
    if (!std::getline(std::cin, n_name)) return;
    std::cout << "Phone number: ";
    if (!std::getline(std::cin, p_number)) return;
    std::cout << "Darkest secret: ";
    if (!std::getline(std::cin, d_secret)) return;
    
    contacts[next].set_first_name(f_name);
    contacts[next].set_last_name(l_name);
    contacts[next].set_nick_name(n_name);
    contacts[next].set_phone_number(p_number);
    contacts[next].set_darkest_secret(d_secret);
    next = (next + 1) % 8;
    if (size < 8)
        size++;
}

void PhoneBook::print_cantact(int i)
{
    if ( i < 0 || i >= size)
    {
        std::cout << "invalide index\n";
        return ;
    }
    std::cout << "First name : "    << contacts[i].get_first_name() << std::endl
              << "Last name : "     << contacts[i].get_last_name() << std::endl
              << "Nickname : "      << contacts[i].get_nick_name() << std::endl
              << "Phone number : "  << contacts[i].get_phone_number() << std::endl
              << "Darkest secret : "<< contacts[i].get_darkest_secret() << std::endl;
}

void PhoneBook::search()
{
    std::string s;
    
    print_all_contact();
    std::cout << "Enter index to display: ";
    if (!std::getline(std::cin, s)) return;
    if (s.size()  != 1 ) 
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    else
        print_cantact(static_cast<int>(s[0] - '0' - 1));  
}



