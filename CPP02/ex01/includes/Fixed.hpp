#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private :
		int	_val;
		const static int _bitStor = 8;

	public :
		Fixed( void );
		Fixed( const Fixed& c );
		Fixed( const int val );
		Fixed( const float val );
		Fixed&	operator=( const Fixed& c );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream &out, const Fixed& fxd );

#endif