/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:03:06 by achanek           #+#    #+#             */
/*   Updated: 2025/10/21 14:46:10 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string &s) { first_name = s; };
void Contact::set_last_name(std::string &s) { last_name = s; };
void Contact::set_nick_name(std::string &s) { nick_name = s; };
void Contact::set_phone_number(std::string &s) { phone_number = s; };
void Contact::set_darkest_secret(std::string &s) { darkest_secret = s; };

std::string Contact::get_first_name() { return first_name; };
std::string Contact::get_last_name() { return last_name; };
std::string Contact::get_nick_name() { return nick_name; };
std::string Contact::get_phone_number() { return phone_number; };
std::string Contact::get_darkest_secret() { return darkest_secret; };


