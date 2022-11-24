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

bool	operator==( const Point &p1, const Point &p2 )
{
	if (p1.getX() != p2.getX())
		return (0);
	if (p1.getY() != p2.getY())
		return (0);
	return (1);
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

void			Point::printPos( void ) const
{
	std::cout << this->x.toFloat() << "/" << this->y.toFloat();
}

//-------------------------bsp-------------------------

bool	exeptions( Point const a, Point const b, Point const c )
{
	//Verification si tout les point sont sur la meme ligne
	if (a.getX().toFloat() == b.getX().toFloat() && b.getX().toFloat() == c.getX().toFloat())
		return (0);
	if (a.getY().toFloat() == b.getY().toFloat() && b.getY().toFloat() == c.getY().toFloat())
		return (0);
	//Verification que 2 points ne sont pas a la meme position
	if (a.getX().toFloat() == b.getX().toFloat() && a.getY().toFloat() == b.getY().toFloat())
		return (0);
	if (a.getX().toFloat() == c.getX().toFloat() && a.getY().toFloat() == c.getY().toFloat())
		return (0);
	if (c.getX().toFloat() == b.getX().toFloat() && c.getY().toFloat() == b.getY().toFloat())
		return (0);
	//Tout est ok
	return (1);
}

float	getFunction( Point const a, Point const b )
{
	if ((b.getY().toFloat() - a.getY().toFloat()) == 0 
		|| (b.getX().toFloat() - a.getX().toFloat()) == 0)
		return (0.0f);
	return ( (b.getY().toFloat() - a.getY().toFloat()) 
		/ (b.getX().toFloat() - a.getX().toFloat()) );
}

float	getStartingPoint( Point const a, Point const b )
{
	return ( a.getY().toFloat() -  (getFunction(a, b) * a.getX().toFloat()));
}

const Point	getLeftLowPoint( Point const a, Point const b )
{
	if (a.getX() > b.getX())
		return (b);
	else if (a.getX() == b.getX() && a.getY() > b.getY())
			return (b);
	return (a);
}

const Point	getOtherPoint( Point const a, Point const b, Point const leftlow )
{	
	if ((a == leftlow) == 1)
		return (b);
	return (a);
}

int getSizeLine( float function, float statringPoint, Point const c )
{
	if (function * c.getX().toFloat() + statringPoint > c.getY().toFloat())
		return (-1);
	else if (function * c.getX().toFloat() + statringPoint < c.getY().toFloat())
		return (1);
	return (0);
}

bool isRightSide(Point const a, Point const b, Point const thirdPoint, Point const fourthPoint)
{
	Point const p1 = getLeftLowPoint(a, b);
	Point const p2 = getOtherPoint(a, b, p1);
	float function = getFunction(p1, p2);
	float statringPoint = getStartingPoint(p1, p2);

	if (a.getX() == b.getX() && b.getX() == fourthPoint.getX())
		return (0);
	if (getSizeLine(function, statringPoint, thirdPoint) 
		== getSizeLine(function, statringPoint, fourthPoint))
		return (1);
	return (0);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (exeptions(a, b, c) == 0)
		return (0);
	if (isRightSide(a, b, c, point) == 0)
		return (0);
	if (isRightSide(a, c, b, point) == 0)
		return (0);
	if (isRightSide(b, c, a, point) == 0)
		return (0);
	return(1);
}

//-------------------------Print-------------------------

void	printFunction( Point const a, Point const b )
{
	std::cout << "f(x) = " << getFunction(a, b) << "x + " 
		<< getStartingPoint(a, b) << std::endl;
}