#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
   public:
      PresidentialPardonForm(const std::string &target);
      PresidentialPardonForm(const PresidentialPardonForm& copy);
      virtual ~PresidentialPardonForm();
      PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);
	  void	execute(const Bureaucrat& executor)const;

   protected:
   private:
      PresidentialPardonForm();
	  std::string _target;
};
#endif // PRESIDENTIALPARDONFORM_H
