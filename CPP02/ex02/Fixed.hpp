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
		static Fixed&	min( Fixed& f1, Fixed& f2);
		static const Fixed&	min( const Fixed& f1, const Fixed& f2);
		static Fixed&	max( Fixed& f1, Fixed& f2);
		static const Fixed&	max( const Fixed& f1, const Fixed& f2);

		Fixed&			operator++( void );
		Fixed			operator++( int );
		Fixed&			operator--( void );
		Fixed			operator--( int );
};

std::ostream&	operator<<( std::ostream &out, const Fixed& fxd );
bool			operator>( const Fixed& f1, const Fixed& f2 );
bool			operator<( const Fixed& f1, const Fixed& f2 );
bool			operator>=( const Fixed& f1, const Fixed& f2 );
bool			operator<=( const Fixed& f1, const Fixed& f2 );
bool			operator==( const Fixed& f1, const Fixed& f2 );
bool			operator!=( const Fixed& f1, const Fixed& f2 );
Fixed			operator+( const Fixed& f1, const Fixed& f2 );
Fixed			operator-( const Fixed& f1, const Fixed& f2 );
Fixed			operator*( const Fixed& f1, const Fixed& f2 );
Fixed			operator/( const Fixed& f1, const Fixed& f2 );

#endif