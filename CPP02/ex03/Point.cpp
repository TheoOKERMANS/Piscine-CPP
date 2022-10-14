#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
}

Point::Point( const float xf, const float yf ) : x(xf), y(yf)
{
}

Point::Point( const Point &p )
{
	*this = p;
}

Point&	Point::operator=( const Point &p )
{
	this->x = Fixed(p.getX());
	this->y = Fixed(p.getY());
	return (*this);
}

Point::~Point( void )
{
}

const Fixed&	Point::getX( void ) const
{
	return ((const_cast<Point *>(this))->x);
}

const Fixed&	Point::getY( void ) const
{
	return ((const_cast<Point *>(this))->y);
}

//-------------------------bsp-------------------------

bool	exeptions( Point const a, Point const b, Point const c )
{
	if (a.getX().toFloat() == b.getX().toFloat() && b.getX().toFloat() == c.getX().toFloat())
		return (0);
	if (a.getY().toFloat() == b.getY().toFloat() && b.getY().toFloat() == c.getY().toFloat())
		return (0);
	if (a.getX().toFloat() == b.getX().toFloat() && a.getY().toFloat() == b.getY().toFloat())
		return (0);
	if (a.getX().toFloat() == c.getX().toFloat() && a.getY().toFloat() == c.getY().toFloat())
		return (0);
	if (c.getX().toFloat() == b.getX().toFloat() && c.getY().toFloat() == b.getY().toFloat())
		return (0);
	return (1);
}

float	getFunction( Point const a, Point const b )
{
	return ( (b.getY().toFloat() - a.getY().toFloat()) 
		/ (b.getX().toFloat() - a.getX().toFloat()) );
}

float	getStartingPoint( Point const a, Point const b )
{
	return ( a.getY().toFloat() -  (getFunction(a, b) * a.getX().toFloat()));
}

const Point	getLeftLowPoint( Point const a, Point const b, Point const c )
{
	const Point res;
	int			twoOnLeft = 0;
	
	res = a;
	if (res.getX() > )
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (exeptions(a, b, c) == 0)
		return (0);
	return(1);
}

//-------------------------Print-------------------------

void	printFunction( Point const a, Point const b )
{
	std::cout << "f(x) = " << getFunction(a, b) << "x + " 
		<< getStartingPoint(a, b) << std::endl;
}