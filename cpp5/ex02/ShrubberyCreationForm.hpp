#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form
{
   public:
      ShrubberyCreationForm(const ShrubberyCreationForm& copy);
      ShrubberyCreationForm(const std::string &target);
      virtual ~ShrubberyCreationForm();
      ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);
	  void	execute(const Bureaucrat& executor)const;

   protected:
   private:
	  ShrubberyCreationForm();
	  std::string _target;

};
#endif // SHRUBBERYCREATIONFORM_H

