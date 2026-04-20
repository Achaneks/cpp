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

static void printTitle(const std::string& title)
{
    std::cout << "\n== " << title << " ==" << std::endl;
}

int main()
{
    printTitle("Valid construction and grade changes");
    try
    {
        Bureaucrat bureaucrat("Anas", 42);

        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    printTitle("Constructor lower boundary");
    try
    {
        Bureaucrat lowest("Lowest", 150);
        std::cout << lowest << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    printTitle("Constructor upper boundary");
    try
    {
        Bureaucrat highest("Highest", 1);
        std::cout << highest << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    printTitle("Invalid constructor grades");
    try
    {
        Bureaucrat tooHigh("TooHigh", 0);
        std::cout << tooHigh << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat tooLow("TooLow", 151);
        std::cout << tooLow << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    printTitle("Increment boundary");
    try
    {
        Bureaucrat top("Top", 1);
        top.incrementGrade();
        std::cout << top << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    printTitle("Decrement boundary");
    try
    {
        Bureaucrat bottom("Bottom", 150);
        bottom.decrementGrade();
        std::cout << bottom << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    printTitle("Copy and assignment");
    try
    {
        Bureaucrat original("Original", 73);
        Bureaucrat copy(original);
        Bureaucrat assigned("Assigned", 120);

        assigned = original;
        std::cout << original << std::endl;
        std::cout << copy << std::endl;
        std::cout << assigned << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
