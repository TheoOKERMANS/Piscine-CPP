#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		int	_val;
		const static int _bitStor = 8;

	public :
		Fixed( void );
		Fixed( const Fixed& c );
		Fixed&	operator=( const Fixed& c );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif