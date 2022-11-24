#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	this->name = "";
	this->hitPoints = FragTrap::hp;
	this->energyPoints = ScavTrap::ep;
	this->attackDamage = FragTrap::ad;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
:ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitPoints = FragTrap::hp;
	this->energyPoints = ScavTrap::ep;
	this->attackDamage = FragTrap::ad;
	std::cout << "DiamondTrap: Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& cp ) 
	: ClapTrap(cp)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& cp )
{
	ClapTrap::operator=(cp);
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->name << " and my ClapTrap name is "
	<< ClapTrap::name << " !" << std::endl;
}

std::string	DiamondTrap::getName( void ) const
{
	return (this->name);
}