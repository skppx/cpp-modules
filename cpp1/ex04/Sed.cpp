#include "Sed.hpp"

Sed::Sed(std::string filename) : _infile(filename)
{
	this->_outfile = this->_infile + ".replace";
}

Sed::~Sed(void)
{
}

void	Sed::replace(std::string s1, std::string s2)
{
	std::ifstream input(this->_infile.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error: Unable to open input file" << std::endl;
		return;
	}
	
	std::ofstream output(this->_outfile.c_str());
	if(!output.is_open())
	{
		std::cerr << "Error: Unable to open output file" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(input, line))
	{
		std::string new_line;
		for (int i = 0; i < (int)line.length(); i++)
		{
			if (line.substr(i, s1.length()) == s1)
			{
				new_line += s2;
				i += s1.length() - 1;
			}
			else
				new_line += line[i];
		}
		output << new_line << std::endl;
	}

	input.close();
	output.close();
}
