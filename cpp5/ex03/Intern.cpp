#include"Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
 
Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}
  
Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Form*	Intern::makePPF(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeRRF(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makeSCF(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string form_name, std::string target)
{
	std::string classNames[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm" };

	Form* (Intern::*createForm[3])(std::string) = {&Intern::makeSCF, &Intern::makePPF, &Intern::makeRRF};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == classNames[i])
		{
			Form *form = (this->*createForm[i])(target);
			return form;
		}
	}
	std::cout << "Form name not found" << std::endl;
	return NULL;
}
