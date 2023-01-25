#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed& operator=(const Fixed& copy);

		void	setRawBits(const int rawBits);
		int		getRawBits() const;
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		static const int	_nbFracBits = 8;
		int					_nbFixedPoint;
};

std::ostream & operator<<(std::ostream &o, Fixed const &c);

#endif
