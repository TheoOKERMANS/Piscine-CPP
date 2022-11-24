#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& ct );
		ScavTrap& operator=( const ScavTrap& ct );
		~ScavTrap( void );

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif