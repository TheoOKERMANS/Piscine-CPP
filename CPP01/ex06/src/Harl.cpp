#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-"
	<< "triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
	this->info();
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger ! If you did, I wouldn’t "
	<< "be asking for more !" << std::endl;
	std::cout << std::endl;
	this->warning();
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years whereas you started working here since "
	<< "last month." << std::endl;
	std::cout << std::endl;
	this->error();
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager "
	<< "now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	static std::map<std::string, int> s_mapStringValues;

	s_mapStringValues[""] = 0;
	s_mapStringValues["DEBUG"] = 1;
	s_mapStringValues["INFO"] = 2;
	s_mapStringValues["WARNING"] = 3;
	s_mapStringValues["ERROR"] = 4;
	switch(s_mapStringValues[level])
	{
		case 1:
			this->debug();
			break;
		case 2:
			this->info();
			break;
		case 3:
			this->warning();
			break;
		case 4:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}