#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected :
		std::string name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;

	public :
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& ct );
		ClapTrap& operator=( const ClapTrap& ct );
		~ClapTrap( void );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		std::string	getName( void ) const;
		int			getAttackDamage( void ) const;

		void		setAttackDamage( int ad);
		void		setEnergyPoints( int ep);
		void		setHitPoints( int hp);
};

#endif