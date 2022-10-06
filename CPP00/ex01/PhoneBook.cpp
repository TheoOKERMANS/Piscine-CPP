#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_nbContact = 0;
}

PhoneBook::~PhoneBook( void )
{

}

int PhoneBook::getNbContact( void )
{
	return (this->_nbContact);
}

void PhoneBook::addContact( Contact c)
{
	if (this->_nbContact < 8)
	{
		this->_contacts[this->_nbContact] = c;
		this->_nbContact++;
	}
	else
		this->_contacts[7] = c;
}

Contact PhoneBook::getContact( int index )
{
	return (this->_contacts[index]);
}