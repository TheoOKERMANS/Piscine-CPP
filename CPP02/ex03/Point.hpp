#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private :
		Fixed	x;
		Fixed	y;

	public :
		Point( void );
		Point( const float xf, const float yf );
		Point( const Point &p );
		Point&	operator=( const Point &p );
		~Point( void );

		const Fixed&	getX( void ) const;
		const Fixed&	getY( void ) const;
		void			printPos( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
bool	operator==( const Point &p1, const Point &p2 );
void	printFunction( Point const a, Point const b );

#endif