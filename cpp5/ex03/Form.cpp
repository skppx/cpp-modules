#include"Form.hpp"
 
Form::Form() : _name("Default"), _is_signed(false), _sign_grade(0), _exec_grade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}
 
Form::Form(const Form &copy) : _name(copy._name), _is_signed(copy._is_signed), _sign_grade(copy._sign_grade), _exec_grade(copy._exec_grade)
{
	std::cout  << "Form copy constructor called" << std::endl;
	*this = copy;
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

unsigned int Form::getSignGrade(void)const
{
	return this->_sign_grade;
}

unsigned int Form::getExecGrade(void)const
{
	return this->_exec_grade;
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_sign_grade)
		_is_signed = true;
	else
		throw GradeTooLowException();
	
}

Form::Form(const std::string name, const int _grade_sign, const int _grade_exec) : _name(name), _is_signed(false), _sign_grade(_grade_sign), _exec_grade(_grade_exec)
{
    if (_grade_exec < 1 || _grade_sign < 1)
        throw Form::GradeTooHighException();
    else if (_grade_exec > 150 || _grade_sign > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form constrcutor called" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << "Name: " << rhs.getName() << std::endl;
	o << "Sign: " << rhs.getSign() << std::endl;
	o << "Sign grade: " << rhs.getSignGrade() << std::endl;
	o << "Execution grade: " << rhs.getExecGrade() << std::endl;
	return o;
}
