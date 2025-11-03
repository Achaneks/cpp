/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:11:08 by achanek           #+#    #+#             */
/*   Updated: 2025/11/03 14:15:58 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; return 0;
	}
	
	Harl	Harl;
	
	Harl.complain(av[1]);
}