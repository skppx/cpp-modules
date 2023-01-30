#include "RobotomyRequestForm.hpp"
#include "cstdlib"
#include "time.h"
 
RobotomyRequestForm::RobotomyRequestForm() : Form()
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target)
{
	std::cout  << "RobotomyRequestForm copy constructor called" << std::endl;
}
 
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm assignation constructor called" << std::endl;
	if (this == &copy)
			return *this;
	//do copy
	return *this;
}
 
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RRF", 72, 45), _target(target)
{
}

void RobotomyRequestForm::execute(const Bureaucrat& executor)const
{
	if (this->getSign() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() >= this->getExecGrade())
		throw Form::GradeTooLowException();
	else
	{
		int number = srand(time(0));
		if (number % 2)
			std::cout << "*bruit de perceuses* " << _target << " has been robotomizedi" << std::endl;
		else
			std::cout << "*bruit de perceuses* " << _target << " robotomization failed" << std::endl;
	}

}
