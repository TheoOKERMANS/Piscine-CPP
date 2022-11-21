#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected :
		std::string	type;

	public :
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& cp );
		WrongAnimal&	operator=( const WrongAnimal& cp );
		~WrongAnimal( void );

		void	makeSound( void ) const;

		std::string	getType( void ) const;
		void	setType( std::string data );
};

#endif