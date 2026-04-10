/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:08:46 by achanek           #+#    #+#             */
/*   Updated: 2026/01/08 01:12:26 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec)
    : _name(name), _isSigned(false),
      _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const { return _name; }
bool AForm::getIsSigned() const { return _isSigned; }
int AForm::getGradeToSign() const { return _gradeToSign; }
int AForm::getGradeToExec() const { return _gradeToExec; }

void AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!_isSigned)
        throw FormNotSignedException();

    if (executor.getGrade() > _gradeToExec)
        throw GradeTooLowException();

    executeAction();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "AForm: grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "AForm: grade too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "AForm: form not signed";
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << f.getName()
       << " (sign grade: " << f.getGradeToSign()
       << ", exec grade: " << f.getGradeToExec()
       << ", signed: " << (f.getIsSigned() ? "yes" : "no") << ")";
    return os;
}
