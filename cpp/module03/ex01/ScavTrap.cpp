/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:13:19 by achanek           #+#    #+#             */
/*   Updated: 2025/12/11 10:13:15 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap(){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap Constructor for the name " << this->name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other){
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other){
    this->name = other.name;
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    return *this;
}
ScavTrap::~ScavTrap(){
    	std::cout << "ScavTrap Deconstructor for " << this->name << " called" << std::endl;
}

void ScavTrap::guardGate(){
    
}

void ScavTrap::attack(const std::string &target){
    
}
