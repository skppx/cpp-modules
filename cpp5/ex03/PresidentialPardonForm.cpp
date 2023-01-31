#include "PresidentialPardonForm.hpp"
#include "cstdlib"
#include "time.h"
 
PresidentialPardonForm::PresidentialPardonForm() : Form()
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target)
{
	std::cout  << "PresidentialPardonForm copy constructor called" << std::endl;
}
 
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm assignation constructor called" << std::endl;
	if (this == &copy)
			return *this;
	//do copy
	return *this;
}
 
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PPF", 25, 5), _target(target)
{
}


void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->getSign() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() >= this->getExecGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << _target << " has been forgiven by Zaphod BeeBblerx" << std::endl;
}
