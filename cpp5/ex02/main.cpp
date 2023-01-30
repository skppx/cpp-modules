#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{/*
	try
	{
		Bureaucrat("Bob", 0);
	}

	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat("Bob", 200);
	}

	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat Bob = Bureaucrat("Bob", 1);
		Bob.incrGrade();
	}

	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Bob = Bureaucrat("Bob", 150);
		Bob.decrGrade();
	}

	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Bob = Bureaucrat("Bob", 42);
		Bob.incrGrade();
		std::cout << Bob << std::endl;
		Bob.decrGrade();
		std::cout << Bob << std::endl;
	}

	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}*/

    Bureaucrat    pattick("Patrick", 10);

    std::cout << pattick << std::endl;

    try
    {
        pattick.incrGrade();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Form tmp("tmp", 200, 100);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Form initialisation error : "
        << e.what() << std::endl;
    }

}
