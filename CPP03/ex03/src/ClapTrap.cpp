#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) 
	: name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) 
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap: Name constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& ct )
	: name(ct.name), hitPoints(ct.hitPoints), energyPoints(ct.energyPoints)
	, attackDamage(ct.attackDamage)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& ct )
{
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	this->name = ct.name;
	this->hitPoints = ct.hitPoints;
	this->energyPoints = ct.energyPoints;
	this->attackDamage = ct.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target 
			<< ", causing " << this->attackDamage 
			<< " points of damage! (" << this->energyPoints << " Energy)" 
			<< std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " has no energy !"
			<< std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (amount < (unsigned int)this->hitPoints)
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " take " << amount 
			<< " damage ! (" << this->hitPoints << " PV)" << std::endl;
	}
	else if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " take " << this->hitPoints 
			<< " damage and died!" << std::endl;
		this->hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" 
			<< std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " recover " << amount 
			<< " PV ! (" << this->hitPoints << " PV / " << this->energyPoints 
			<< " Energy)" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " has no energy !"
			<< std::endl;
	}
}

std::string	ClapTrap::getName( void ) const
{
	return (this->name);
}

int			ClapTrap::getAttackDamage( void ) const
{
	return (this->attackDamage);
}

void		ClapTrap::setAttackDamage( int ad )
{
	this->attackDamage = ad;
}

void		ClapTrap::setEnergyPoints( int ep)
{
	this->energyPoints = ep;
}

void		ClapTrap::setHitPoints( int hp)
{
	this->hitPoints = hp;
}
