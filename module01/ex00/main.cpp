/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:48:59 by achanek           #+#    #+#             */
/*   Updated: 2025/11/18 15:33:12 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
     Zombie* heapZ = newZombie("Zombie_Heap");
    heapZ->announce();
    delete heapZ;
    randomChump("Zombie_Stack");
    return 0;
}