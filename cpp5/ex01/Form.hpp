#ifndef FORM_HPP
#define FORM_HPP
 
class Form
{
   public:
      Form();
      Form(const Form& copy);
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


	  std::string	getName(void)const;
	  bool			getSign(void)const;
	  unsigned const int getSignGrade(void)const;
	  unsigned const int getExecGrade(void)const;
	  void			beSigned(const Bureaucrat& b)

   protected:
   private:
	  std::string			_name;
	  bool					_is_signed;
	  unsigned const int	_sign_grade;
	  unsigned const int	_exec_grade;

};

std::ostream& operator<<(std::ostream& o, const Form& rhs);
#endif // FORM_H

