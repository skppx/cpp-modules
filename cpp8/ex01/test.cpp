#include <vector>
#include <iostream>

void print(std::vector <int> const &a) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';

   std::cout << std::endl;
}

int main()
{
	int tab[] = {0, 1, 2, 3 ,4 ,5};
	std::vector<int> vec(tab, tab+6);
	print(vec);
	vec.resize(10);
	print(vec);
	vec.push_back(42);
	print(vec);
	try
	{
		vec.at(12) = 42;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	print(vec);
}
