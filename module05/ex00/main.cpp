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

static void printSection(const std::string& title)
{
    std::cout << "\n--- " << title << " ---" << std::endl;
}

static void tryCreate(const std::string& name, int grade)
{
    try
    {
        Bureaucrat b(name, grade);
        std::cout << b << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << name << ": " << e.what() << std::endl;
    }
}

static void tryIncr(Bureaucrat& b)
{
    try
    {
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

static void tryDecr(Bureaucrat& b)
{
    try
    {
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    printSection("Normal use");
    Bureaucrat Anas("Anas", 2);
    std::cout << Anas << std::endl;
    tryIncr(Anas);
    tryDecr(Anas);

    printSection("Constructor checks");
    tryCreate("Highest", 1);
    tryCreate("Lowest", 150);
    tryCreate("TooHigh", 0);
    tryCreate("TooLow", 151);

    printSection("Boundary checks");
    Bureaucrat top("Top", 1);
    Bureaucrat bottom("Bottom", 150);
    tryIncr(top);
    tryDecr(bottom);

    return 0;
}
