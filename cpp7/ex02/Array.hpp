#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
	public:
		Array() : array(new T[0]) {}
		Array(unsigned int n) : array(new T[n]) {}

	private:

}
