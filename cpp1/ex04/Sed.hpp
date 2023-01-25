#ifndef SEV_HPP
#define SEV_HPP

#include <iostream>
#include <fstream>
#include <cstring>

class Sed
{
	private:
		std::string _infile;
		std::string _outfile;

	public:
		Sed(std::string filename);
		~Sed();

		void	replace(std::string s1, std::string s2);
};

#endif
