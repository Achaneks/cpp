/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:13:13 by achanek           #+#    #+#             */
/*   Updated: 2025/12/11 11:25:57 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Creating ScavTrap a ===" << std::endl;
    ScavTrap a("Serena");

    std::cout << "\n=== a attacks target1 ===" << std::endl;
    a.attack("target1");

    std::cout << "\n=== a enters guard mode ===" << std::endl;
    a.guardGate();

    std::cout << "\n=== Copy-constructing b from a ===" << std::endl;
    ScavTrap b(a);

    std::cout << "\n=== b attacks target2 ===" << std::endl;
    b.attack("target2");

    std::cout << "\n=== Creating c (default) ===" << std::endl;
    ScavTrap c;

    std::cout << "\n=== Assigning c = a ===" << std::endl;
    c = a;

    std::cout << "\n=== c attacks target3 ===" << std::endl;
    c.attack("target3");

    std::cout << "\n=== End of main, destructors will run in reverse order ===" << std::endl;
    return 0;
}
