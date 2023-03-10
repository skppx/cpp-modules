#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
   public:
      Bureaucrat();
      Bureaucrat(std::string name, unsigned int grade);
      Bureaucrat(const Bureaucrat& copy);
      virtual ~Bureaucrat();
      Bureaucrat &operator=(const Bureaucrat& copy);
	  
	  std::string	getName(void)const;
	  unsigned int	getGrade(void)const;
	  void			incrGrade(void);
	  void			decrGrade(void);
	  void			signForm(Form& form);

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
	  
   protected:
   private:
	  std::string	_name;
	  unsigned int	_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif // BUREAUCRAT_H

