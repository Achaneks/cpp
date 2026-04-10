#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;

public:
    // Orthodox Canonical Form
    AForm();
    AForm(const std::string& name, int gradeToSign, int gradeToExec);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    // Getters
    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    // Core functionality
    void beSigned(const Bureaucrat& b);

    // 🔥 Template method
    void execute(Bureaucrat const & executor) const;

    // 🔥 Polymorphic behavior
    virtual void executeAction() const = 0;

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

    class FormNotSignedException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

// Operator overload
std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif