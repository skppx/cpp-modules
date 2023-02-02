#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template<typename T, typename size, typename F>
void	iter(T *array, size length, F func)
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void print(T value) 
{
    std::cout << value << " ";
}

#endif
