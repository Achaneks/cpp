/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:44:33 by achanek           #+#    #+#             */
/*   Updated: 2025/11/03 11:50:39 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    std::cout << "Test: DEBUG" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "Test: INFO" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "Test: WARNING" << std::endl;
    harl.complain("WARNGING");
    std::cout << std::endl;

    std::cout << "Test: ERROR" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "Test: unknown" << std::endl;
    harl.complain("SILLY");
    std::cout << std::endl;

    return 0;
}
