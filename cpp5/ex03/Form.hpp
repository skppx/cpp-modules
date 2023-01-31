#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
   public:
      Form(const Form& copy);
	  Form(const std::string _name, const int _grade_sign, const int _grade_exec);
      virtual ~Form();
      Form &operator=(const Form& copy);

	  class	GradeTooHighException : public std::exception
	  {
		  public:
			  const char* what() const throw()
			  {
				  return "Grade too high";
			  }
	  };
	  
	  class	GradeTooLowException : public std::exception
	  {
		  public:
			  const char* what() const throw()
			  {
				  return "Grade too low";
			  }
	  };
	  
	  class	NotSignedException : public std::exception
	  {
		  public:
			  const char* what() const throw()
			  {
				  return "Not signed";
			  }
	  };


	  std::string	getName(void)const;
	  bool			getSign(void)const;
	  unsigned int getSignGrade(void)const;
	  unsigned int getExecGrade(void)const;
	  void			beSigned(const Bureaucrat& b);
	  virtual void			execute(const Bureaucrat& executor)const = 0;

   private:
	  const std::string		_name;
	  bool					_is_signed;
	  unsigned const int	_sign_grade;
	  unsigned const int	_exec_grade;
	protected:
	  std::string			_target;
	  Form();

};

std::ostream& operator<<(std::ostream& o, const Form& rhs);

#endif // FORM_H
