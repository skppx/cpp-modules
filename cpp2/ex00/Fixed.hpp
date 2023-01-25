#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed& operator=(const Fixed& copy);

		void	setRawBits(const int rawBits);
		int		getRawBits() const;

	private:
		static const int	_nbFracBits = 8;
		int					_nbFixedPoint;
};

#endif
