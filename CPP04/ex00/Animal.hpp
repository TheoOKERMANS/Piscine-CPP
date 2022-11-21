#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string	type;

	public :
		Animal( void );
		Animal( const Animal& cp );
		Animal&	operator=( const Animal& cp );
		~Animal( void );

		virtual void	makeSound( void ) const;

		std::string	getType( void ) const;
		void	setType( std::string data );
};

#endif