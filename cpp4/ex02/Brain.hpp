#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain& copy);
		virtual ~Brain();
		Brain &operator=(const Brain& copy);

	private:
		std::string _ideas[100];
};

#endif
