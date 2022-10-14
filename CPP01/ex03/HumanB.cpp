#include "HumanB.hpp"

HumanB::HumanB( std::string name ) 
	: name(name), weapon(nullptr)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon != nullptr)
		std::cout << this->weapon->getType();
	else
		std::cout << "hands";
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}