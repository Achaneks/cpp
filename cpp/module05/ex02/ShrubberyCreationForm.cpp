#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137) {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm("ShrubberyCreationForm",145,137), target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target){
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    if (&other != this)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}