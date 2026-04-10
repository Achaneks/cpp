/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 05:17:38 by achanek           #+#    #+#             */
/*   Updated: 2026/01/08 01:17:20 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class AForm; // forward declaration

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    // Orthodox Canonical Form
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    // Getters
    const std::string& getName() const;
    int getGrade() const;

    // Actions
    void incrementGrade();
    void decrementGrade();

    void signForm(AForm& form) const;
    void executeForm(AForm const & form) const;

    // Exceptions
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

// Operator overload
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif