#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : type(type)
{
}

Weapon::~Weapon( void )
{
}

std::string&	Weapon::getType( void )
{
	std::string&	res = this->type;

	return (res);
}

void			Weapon::setType( std::string newVal )
{
	this->type = newVal;
}