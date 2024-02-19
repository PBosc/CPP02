#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int _fixed_value;
		static const int _fixed_length = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed&	operator=(const Fixed &obj);
		int		getRawBits(void) const;
		void	setRawBits(const int raw_bits);	
		~Fixed();
};

#endif