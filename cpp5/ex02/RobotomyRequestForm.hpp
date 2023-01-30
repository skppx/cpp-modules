#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
   public:
      RobotomyRequestForm(const RobotomyRequestForm& copy);
      RobotomyRequestForm(const std::string &target);
      virtual ~RobotomyRequestForm();
      RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);
	  void	execute(const Bureaucrat& executor)const;

   protected:
   private:
      RobotomyRequestForm();
	  std::string _target;
};
#endif // ROBOTOMYREQUESTFORM_H
