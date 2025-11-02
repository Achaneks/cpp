/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:19:08 by achanek           #+#    #+#             */
/*   Updated: 2025/11/01 22:19:10 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Zombie created (constructor called)" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) const {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
