#include<vector>
#include<iostream>
#include<exception>
#include<algorithm>
#include"easyfind.hpp"

int main()
{
	std::vector<int> tab(42, 50);
	tab[21] = 21;

	try
	{
		std::vector<int>::iterator	it;
		it = easyfind(tab, 21);
		std::cout << *it << std::endl;
		std::replace(it, it+1, 21, 42);
		std::cout << *it << std::endl;
		std::cout << tab[21] << std::endl;
		std::cout << *easyfind(tab, 21) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
