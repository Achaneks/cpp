/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:13:13 by achanek           #+#    #+#             */
/*   Updated: 2025/12/13 13:44:31 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    std::cout << "=== Create FragTrap ===" << std::endl;
    FragTrap a("Serena");

    std::cout << "\n=== Attack ===" << std::endl;
    a.attack("Target");

    std::cout << "\n=== High Five ===" << std::endl;
    a.highFivesGuys();

    std::cout << "\n=== Copy Constructor ===" << std::endl;
    FragTrap b(a);

    std::cout << "\n=== Assignment Operator ===" << std::endl;
    FragTrap c;
    c = a;

    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}

