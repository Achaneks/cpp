/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:13:02 by achanek           #+#    #+#             */
/*   Updated: 2025/12/11 09:15:22 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructed (default)!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name),
      hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap " << name << " copy-constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " cannot attack: no hit points left!" << std::endl;
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " cannot attack: no energy left!" << std::endl;
        return;
    }
    energyPoints -= 1;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " is already at 0 hit points." << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! Remaining HP: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot be repaired: no hit points (destroyed)!" << std::endl;
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " cannot repair: no energy left!" << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints -= 1;

    std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount
              << " hit points! Current HP: " << hitPoints << std::endl;
}

