#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_nbContact;

	public:
		PhoneBook();
		~PhoneBook();
		void addContact( Contact c );
		Contact getContact( int index );
		int getNbContact( void );
};

# endif