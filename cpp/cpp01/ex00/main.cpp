/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:48:59 by achanek           #+#    #+#             */
/*   Updated: 2025/11/01 22:04:48 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* newZombie(std::string name);
void randomChump(std::string name);
int main()
{
     Zombie* heapZ = newZombie("Heapy");
    heapZ->announce();
    delete heapZ; 

    randomChump("Stacky");
    return 0;
}