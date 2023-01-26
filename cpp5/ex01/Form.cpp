
#include"Form.hpp"
 
Form::Form() : _is_signed(false)
{
	std::cout << "Form default constructor called" << std::endl;
}
 
Form::Form(const Form &copy)
{
	std::cout  << "Form copy constructor called" << std::endl;
}
 
Form &Form::operator=(const Form &copy)
{
	std::cout << "Form assignation constructor called" << std::endl;
	if (this == &copy)
			return *this;
	//do copy
	return *this;
}
 
Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName(void)const
{
	return this->_name;
}

bool	Form::getSign(void)const
{
	return this->_is_signed;
}

unsigned const int Form::getSignGrade(void)const
{
	return this->_sign_grade;
}

unsigned const int Form::getExecGrade(void)const
{
	return this->_exec_grade;
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->getGrade())
		_is_signed = true;
	else
		throw GradeTooLowException
	
}

std::ostream& Form::operator<<(std::ostream& o, const Form& rhs)
{
	o << "Name: " << rhs.getName() << std::endl;
	o << "Sign: " << rhs.getSign() << std::endl;
	o << "Sign grade: " << rhs.getSignGrade() << std::endl;
	o << "Execution grade: " << rhs.getExecGrade() << std::endl;
	return o;
}
