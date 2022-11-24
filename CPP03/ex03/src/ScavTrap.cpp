#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->name = "";
	this->setHitPoints(this->hp);
	this->setEnergyPoints(this->ep);
	this->setAttackDamage(this->ad);
}

ScavTrap::ScavTrap( std::string name ) 
	: ClapTrap(name)
{
	std::cout << "ScavTrap: Name constructor called" << std::endl;
	this->setHitPoints(this->hp);
	this->setEnergyPoints(this->ep);
	this->setAttackDamage(this->ad);
}

ScavTrap::ScavTrap( const ScavTrap& ct )
	: ClapTrap(ct)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& ct )
{
	ClapTrap::operator=(ct);
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target 
			<< ", causing " << this->attackDamage 
			<< " points of damage! (" << this->energyPoints << " Energy)" 
			<< std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " has no energy !"
			<< std::endl;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " came into Gatekeeper mode !"
			<< std::endl;
}