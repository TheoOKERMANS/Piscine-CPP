#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected :
		std::string	type;

	public :
		Animal( void );
		Animal( const Animal& cp );
		Animal&	operator=( const Animal& cp );
		virtual ~Animal( void ) = 0;

		virtual void	makeSound( void ) const;

		std::string	getType( void ) const;
		void	setType( std::string data );
};

#endif