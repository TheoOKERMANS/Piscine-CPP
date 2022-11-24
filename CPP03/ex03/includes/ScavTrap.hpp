#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected :
		ScavTrap( void );
		static const int hp = 100;
		static const int ep = 50;
		static const int ad = 30;

	public :
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& ct );
		ScavTrap& operator=( const ScavTrap& ct );
		~ScavTrap( void );

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif