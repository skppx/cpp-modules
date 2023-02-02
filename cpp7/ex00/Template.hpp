#ifndef TEMPLATE_HPP
#define	TEMPLATE_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T		min(T a, T b) 
{
    return ((a < b) ? a : b);
}

template <typename T>
T		max(T a, T b) 
{
    return ((a > b) ? a : b);
}

#endif
