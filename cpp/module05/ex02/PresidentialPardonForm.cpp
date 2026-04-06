#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5) {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) :AForm("PresidentialPardonForm",25,5), target(target){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target){
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    if (&other != this)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    AForm::execute(executor);
    std::cout << target << "has been pardoned by the president" << std::endl;
}