/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:04:00 by achanek           #+#    #+#             */
/*   Updated: 2025/10/23 11:56:51 by achanek          ###   ########.fr       */
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
    void    search();
    void    print_all_contact();
    void    print_cantact(int i);
    void    add_contact();
};

#endif