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

	size_t pos;
	std::string line;
	while (std::getline(input, line))
	{
		pos = 0;
		while((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		output << line << std::endl;
	}

	input.close();
	output.close();
}
