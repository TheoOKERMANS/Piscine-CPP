#include "Contact.hpp"

Contact::Contact()
{
	this->_firstName = "NULL";
	this->_lastName = "NULL";
	this->_nickName = "NULL";
	this->_phoneNumber = "NULL";
	this->_darkestSecret = "NULL";
}

Contact::~Contact()
{

}

std::string Contact::getFirstName( void )
{
	return (this->_firstName);
}

std::string Contact::getLastName( void )
{
	return (this->_lastName);
}

std::string Contact::getNickName( void )
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber( void )
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret( void )
{
	return (this->_darkestSecret);
}

void Contact::setFirstName( std::string val )
{
	this->_firstName = val;
}

void Contact::setLastName( std::string val )
{
	this->_lastName = val;
}

void Contact::setNickName( std::string val )
{
	this->_nickName = val;
}

void Contact::setPhoneNumber( std::string val )
{
	this->_phoneNumber = val;
}

void Contact::setDarkestSecret( std::string val )
{
	this->_darkestSecret = val;
}