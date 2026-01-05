/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:13:13 by achanek           #+#    #+#             */
/*   Updated: 2025/12/16 13:54:28 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap d("Serena");

    std::cout << "\n=== Attack (ScavTrap version) ===" << std::endl;
    d.attack("Target");

    std::cout << "\n=== Who Am I ===" << std::endl;
    d.whoAmI();

    std::cout << "\n=== Copy Constructor ===" << std::endl;
    DiamondTrap copy(d);
    copy.whoAmI();

    std::cout << "\n=== Assignment Operator ===" << std::endl;
    DiamondTrap assign;
    assign = d;
    assign.whoAmI();

    std::cout << "\n=== End of main (destructors) ===" << std::endl;
    return 0;
}


