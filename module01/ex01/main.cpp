/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:20:20 by achanek           #+#    #+#             */
/*   Updated: 2025/11/18 17:08:31 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
    int N = 10;
    Zombie* horde = zombieHorde(N, "Z_Anas");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
