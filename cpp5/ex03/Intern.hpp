#ifndef INTERN_HPP
#define INTERN_HPP
 
#include "Form.hpp"

class Intern
{
   public:
      Intern();
      virtual ~Intern();
	  Form*	makeForm(std::string form_name, std::string target);

   protected:
   private:
	  Form* makePPF(std::string target);
	  Form* makeRRF(std::string target);
	  Form* makeSCF(std::string target);
	  
	  
	  
};
#endif // INTERN_H

