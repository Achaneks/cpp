#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
    std::srand(std::time(0));
    Bureaucrat boss("boss", 1);

    AForm* f1 = new ShrubberyCreationForm("home");
    AForm* f2 = new RobotomyRequestForm("Bender");
    AForm* f3 = new PresidentialPardonForm("Marvin");

    boss.signForm(*f1);
    boss.executeForm(*f1);

    boss.signForm(*f2);
    boss.executeForm(*f2);

    boss.signForm(*f3);
    boss.executeForm(*f3);

    delete f1;
    delete f2;
    delete f3;
}