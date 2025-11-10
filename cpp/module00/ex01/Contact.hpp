/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:03:14 by achanek           #+#    #+#             */
/*   Updated: 2025/11/08 15:45:50 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

public:
    void set_first_name(std::string s);
    void set_last_name(std::string s);
    void set_nick_name(std::string s);
    void set_phone_number(std::string s);
    void set_darkest_secret(std::string s);

    std::string get_first_name();
    std::string get_last_name();
    std::string get_nick_name();
    std::string get_phone_number();
    std::string get_darkest_secret();
};

#endif