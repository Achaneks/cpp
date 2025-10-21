/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:03:47 by achanek           #+#    #+#             */
/*   Updated: 2025/10/21 14:07:33 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::newcontact(Contact &c)
{
    contacts[next] = c;
    if (size < 8)
        size++;
    next = (next + 1) % 8;
};

void PhoneBook::print_all_contact() {

};

void PhoneBook::print_cantact(int i)
{
    if (i < 0 || i > 8)
        std::cout << "invalide index\n";
    std::cout << contacts[i].get_first_name() << std::endl
              << contacts[i].get_last_name() << std::endl
              << contacts[i].get_nick_name() << std::endl
              << contacts[i].get_phone_number() << std::endl
              << contacts[i].get_darkest_secret() << std::endl;
};

int PhoneBook::get_size() { return size; };