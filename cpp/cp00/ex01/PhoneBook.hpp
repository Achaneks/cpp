/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:04:00 by achanek           #+#    #+#             */
/*   Updated: 2025/10/21 16:13:18 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    PhoneBook();
    void newcontact(Contact &c);
    void print_all_contact();
    void print_cantact(int i);
    int get_size();
};

#endif