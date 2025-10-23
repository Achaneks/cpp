/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:04:46 by achanek           #+#    #+#             */
/*   Updated: 2025/10/23 11:55:41 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phoneb;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter command (ADD , SEARCH , EXIT) : ";
        if (!std::getline(std::cin,cmd)) break;
        if (cmd == "ADD")
            phoneb.add_contact();
        else if (cmd == "SEARCH")
            phoneb.search();
        else if (cmd == "EXIT")
            break ;
        else 
            continue;
    }
    return 0;
    
}


