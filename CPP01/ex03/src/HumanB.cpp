#include "HumanB.hpp"

HumanB::HumanB( std::string name ) 
	: weapon(NULL), name(name)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon != NULL)
		std::cout << this->weapon->getType();
	else
		std::cout << "hands";
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}