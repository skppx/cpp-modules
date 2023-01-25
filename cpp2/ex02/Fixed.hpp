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

		bool	operator>(const Fixed &copy) const;
		bool	operator<(const Fixed &copy) const;
		bool	operator>=(const Fixed &copy) const;
		bool	operator<=(const Fixed &copy) const;
		bool	operator==(const Fixed &copy) const;
		bool	operator!=(const Fixed &copy) const;

		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;
		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static			Fixed& min(Fixed &a, Fixed &b);
		static const	Fixed& min(const Fixed &a, const Fixed &b) ;
		static			Fixed& max(Fixed &a, Fixed &b);
		static const	Fixed& max(const Fixed &a, const Fixed &b) ;

	private:
		static const int	_nbFracBits = 8;
		int					_nbFixedPoint;
};

std::ostream & operator<<(std::ostream &o, Fixed const &c);

#endif
