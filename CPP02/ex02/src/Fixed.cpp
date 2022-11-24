#include "Fixed.hpp"

Fixed::Fixed( void ) : _val(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& c)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Fixed::Fixed( const int val )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_val = val << this->_bitStor;
}

Fixed::Fixed( const float val )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_val = (int)roundf(val * (1 << this->_bitStor));
}

Fixed&	Fixed::operator=( const Fixed& c )
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_val = c.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_val);
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_val / (float)(1 << this->_bitStor));
}

int		Fixed::toInt( void ) const
{
	return (this->_val >> this->_bitStor);
}

Fixed&			Fixed::min( Fixed& f1, Fixed& f2)
{
	if (f2.toFloat() < f1.toFloat())
		return (f2);
	return (f1);
}

const Fixed&	Fixed::min( const Fixed& f1, const Fixed& f2)
{
	if (f2.toFloat() < f1.toFloat())
		return (f2);
	return (f1);
}

Fixed&			Fixed::max( Fixed& f1, Fixed& f2)
{
	if (f2.toFloat() > f1.toFloat())
		return (f2);
	return (f1);
}

const Fixed&	Fixed::max( const Fixed& f1, const Fixed& f2)
{
	if (f2.toFloat() > f1.toFloat())
		return (f2);
	return (f1);
}

//----------------Operator----------------
std::ostream&	operator<<( std::ostream &out, const Fixed& fxd )
{
	out << fxd.toFloat();
	return (out);
}

bool				operator>( const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (1);
	return (0);
}

bool				operator<( const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (1);
	return (0);
}
bool				operator>=( const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (1);
	return (0);
}

bool				operator<=( const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (1);
	return (0);
}

bool				operator==( const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() == f2.toFloat())
		return (1);
	return (0);
}

bool				operator!=( const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() != f2.toFloat())
		return (1);
	return (0);
}

Fixed			operator+( const Fixed& f1, const Fixed& f2)
{
	return Fixed((f1.toFloat() + f2.toFloat()));
}

Fixed			operator-( const Fixed& f1, const Fixed& f2)
{
	return Fixed((f1.toFloat() - f2.toFloat()));
}

Fixed			operator*( const Fixed& f1, const Fixed& f2)
{
	return Fixed((f1.toFloat() * f2.toFloat()));
}

Fixed			operator/( const Fixed& f1, const Fixed& f2)
{
	return Fixed((f1.toFloat() / f2.toFloat()));
}

Fixed&			Fixed::operator++( void )
{
	this->_val++;
	return (*this);
}

Fixed			Fixed::operator++( int )
{
	Fixed	temp = *this;
	this->_val++;
	return (temp);
}

Fixed&			Fixed::operator--( void )
{
	this->_val--;
	return (*this);
}

Fixed			Fixed::operator--( int )
{
	Fixed	temp = *this;
	this->_val--;
	return (temp);
}