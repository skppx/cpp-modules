#include "Bureaucrat.hpp"
 
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}
 
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;

	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}
 
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat assignation constructor called" << std::endl;
	if (this == &copy)
			return *this;
	//do copy
	return *this;
}
 
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string	Bureaucrat::getName(void)const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void)const
{
	return this->_grade;
}

void		Bureaucrat::incrGrade(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade++;
}

void		Bureaucrat::decrGrade(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade--;
}

void		Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}

	catch(std::exception& e)
	{
		std::cerr << this->getName() << "couldn't sign" << form.getName() << "because" << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << this->getName() << "couldn't execute" << form.getName() << "because" << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << "Name: " << rhs.getName() << std::endl;
	o << "Sign: " << rhs.getGrade() << std::endl;
	return o;
}
