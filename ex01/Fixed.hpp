#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int _fixed_value;
		static const int _fixed_length = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int value);
		Fixed(const float value);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(const int raw_bits);	
		Fixed&	operator=(const Fixed &obj);
		~Fixed();
};
std::ostream&	operator<<(std::ostream& os, const Fixed &obj);

#endif