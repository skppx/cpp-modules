#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class NotFoundException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Error, element not found");
		}
};


template <class T>
typename T::iterator easyfind(T& tab, int tofind)
{
	typename T::iterator iterator;

	iterator = std::find(tab.begin(), tab.end(), tofind);
	if (iterator == tab.end())
		throw NotFoundException();
	else
		return iterator;
}

#endif
