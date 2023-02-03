#ifndef ARRAY_HPP
#define ARRAY_HPP 

#include <exception>

template<typename T>
class Array
{
	public:
		Array() : _size(0), _array(new T[0]) {}
		
		Array(unsigned int n) : _size(n), _array(new T[n]) {}
		
		Array(const Array& copy) : _size(copy.size()), _array(new T[copy.size()])
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		}
		
		Array& operator=(const Array& copy)
		{
			if (this == &copy)
				return *this;
			else
			{
				delete [] _array;
				_array = new T[copy.size()];
				_size = copy.size();
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = copy._array[i];
			}
			return *this;
		}
		
		T& operator [](unsigned int i) const
		{
			if (i >= _size)
				throw WrongIndex();
			return _array[i];
		}

		unsigned int size(void) const
		{
			return _size;
		}
		
		~Array(void)
		{
			delete [] _array;
		}

		class WrongIndex : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Wrong index";
				}
		};

	private:
		unsigned int	_size;
		T*				_array;

};

#endif
