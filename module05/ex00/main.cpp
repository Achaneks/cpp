/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 05:58:42 by achanek           #+#    #+#             */
/*   Updated: 2026/01/06 08:02:44 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Anas", 42);
        std::cout << a << std::endl;

        a.incrementGrade();
        std::cout << a << std::endl;

        a.decrementGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------------" << std::endl;

    try
    {
        Bureaucrat b("Kalid", 0);
    }
    catch (std::exception& e)
    {
        std::cout <<  e.what() << std::endl;
    }

    std::cout << "-------------------" << std::endl;

    try
    {
        Bureaucrat c("chablo", 1);
        c.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
