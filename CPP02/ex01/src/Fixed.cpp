#include "Fixed.hpp"

Fixed::Fixed( void ) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& c)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Fixed::Fixed( const int val )
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = val << this->_bitStor;
}

Fixed::Fixed( const float val )
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (int)roundf(val * (1 << this->_bitStor));
}

Fixed&	Fixed::operator=( const Fixed& c )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = c.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_val);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream& operator<<( std::ostream &out, const Fixed& fxd )
{
	out << fxd.toFloat();
	return (out);
}