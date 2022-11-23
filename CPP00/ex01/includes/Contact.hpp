#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		~Contact();
		std::string getFirstName( void );
		std::string getLastName( void );
		std::string getNickName( void );
		std::string getPhoneNumber( void );
		std::string getDarkestSecret( void );
		void setFirstName( std::string val );
		void setLastName( std::string val );
		void setNickName( std::string val );
		void setPhoneNumber( std::string val );
		void setDarkestSecret( std::string val );
};

#endif