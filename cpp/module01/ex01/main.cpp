/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:20:20 by achanek           #+#    #+#             */
/*   Updated: 2025/11/18 16:03:32 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "Z_Anas");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
