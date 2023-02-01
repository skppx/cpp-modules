#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "stdlib.h"
#include <iostream>

Base::~Base()
{
}

Base*	generate(void)
{
	srand(time(0));
	int num = rand();
	switch(num % 3)
	{
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
		default: return new A();
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "True class type : A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "True class type : B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "True class type : C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "True class type : A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not A class" << std::endl;
	}
	
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "True class type : B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not B class" << std::endl;
	}
	
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "True class type : C" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not C class" << std::endl;
	}
}

int main(void)
{
	Base* base = generate();
	identify(base);
	identify(*base);

	delete base;
	return (0);
}
