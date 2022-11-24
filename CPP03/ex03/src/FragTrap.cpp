#include "FragTrap.hpp"

FragTrap::FragTrap( void ) 
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->name = "";
	this->setHitPoints(this->hp);
	this->setEnergyPoints(this->ep);
	this->setAttackDamage(this->ad);
}

FragTrap::FragTrap( std::string name ) 
	: ClapTrap(name)
{
	std::cout << "FragTrap: Name constructor called" << std::endl;
	this->setHitPoints(this->hp);
	this->setEnergyPoints(this->ep);
	this->setAttackDamage(this->ad);
}

FragTrap::FragTrap( const FragTrap& ct )
	: ClapTrap(ct)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& ct )
{
	ClapTrap::operator=(ct);
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->getName() << " want to hive five !"
		<< std::endl;
}