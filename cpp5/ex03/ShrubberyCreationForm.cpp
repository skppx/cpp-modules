#include"ShrubberyCreationForm.hpp"
 
ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target)
{
	std::cout  << "ShrubberyCreationForm copy constructor called" << std::endl;
}
 
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm assignation constructor called" << std::endl;
	if (this == &copy)
			return *this;
	//do copy
	return *this;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("SCF", 145, 137), _target(target)
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSign() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() >= this->getExecGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::string str = (this->_target + "_shrubbery");
		std::ofstream file(str.c_str());
		file <<"               ,@@@@@@@," << std::endl;
		file <<"       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		file <<"    ,&\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		file <<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		file <<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		file <<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		file <<"   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		file <<"       |o|        | |         | |" << std::endl;
		file <<"       |.|        | |         | |" << std::endl;
		file <<" jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		file.close();
	}
}
