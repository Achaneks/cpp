/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:57:13 by achanek           #+#    #+#             */
/*   Updated: 2025/11/07 12:04:07 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");

    a.attack("target1");            // energy -1
    a.takeDamage(3);                // hp -3
    a.beRepaired(5);                // hp +5, energy -1

    // simulate many attacks until energy runs out
    for (int i = 0; i < 12; ++i)
        a.attack("somebody");

    // show copy & assignment
    ClapTrap copy = a;             // copy constructor
    ClapTrap assigned;
    assigned = b;                  // copy assignment

    // damage to zero
    b.takeDamage(200);
    b.beRepaired(10);              // should say cannot repair (destroyed)

    return 0;
}
