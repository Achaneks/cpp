/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 05:58:42 by achanek           #+#    #+#             */
/*   Updated: 2026/01/08 01:28:39 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "===== TEST 1: VALID SIGNING =====" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 10);
        Form tax("TaxForm", 20, 30);

        std::cout << alice << std::endl;
        std::cout << tax << std::endl;

        alice.signForm(tax);

        std::cout << tax << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 2: GRADE TOO LOW =====" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 100);
        Form secret("SecretForm", 10, 20);

        std::cout << bob << std::endl;
        std::cout << secret << std::endl;

        bob.signForm(secret);

        std::cout << secret << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 3: INVALID FORM CONSTRUCTION =====" << std::endl;
    try
    {
        Form broken("BrokenForm", 0, 200);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 4: MULTIPLE BUREAUCRATS =====" << std::endl;
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 150);
        Form contract("Contract", 50, 50);

        intern.signForm(contract);
        boss.signForm(contract);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

