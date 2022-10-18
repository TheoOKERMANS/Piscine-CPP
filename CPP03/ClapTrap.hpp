#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private :
		std::string name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;

	public :
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& ct );
		ClapTrap& operator=( const ClapTrap& ct );
		~ClapTrap( void );

};

/*
Point( void );
		Point( const float xf, const float yf );
		Point( const Point &p );
		Point&	operator=( const Point &p );
		~Point( void );
*/
#endif