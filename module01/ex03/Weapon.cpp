/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:22:27 by achanek           #+#    #+#             */
/*   Updated: 2025/11/15 16:48:42 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string type) : type(type) {}

Weapon::~Weapon() {}

const std::string Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string newType) {
    this->type = newType;
}