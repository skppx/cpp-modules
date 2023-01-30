#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#inlcude "Form.hpp"

class ShrubberyCreationForm : public Form
{
   public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(const ShrubberyCreationForm& copy);
      virtual ~ShrubberyCreationForm();
      ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);

   protected:
   private:
};
#endif // SHRUBBERYCREATIONFORM_H

