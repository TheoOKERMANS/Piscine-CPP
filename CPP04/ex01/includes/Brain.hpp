#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private :
		std::string	ideas[100];
	public :
		Brain( void );
		Brain( const Brain &cp );
		Brain&	operator=( const Brain &cp );
		~Brain( void );

		std::string	getIdea( int i ) const;
};

#endif