/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:57:13 by achanek           #+#    #+#             */
/*   Updated: 2025/12/15 21:43:25 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("anas");
    ClapTrap b("khalid");

    a.attack("target1"); 
    a.takeDamage(3);   
    a.beRepaired(5);        
    for (int i = 0; i < 12; ++i)
        a.attack("chablo");

    ClapTrap copy = a;    
    ClapTrap assigned;
    assigned = b;  
    
    b.takeDamage(200);
    b.beRepaired(10);

    return 0;
}
