#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

std::string toupper(std::string str)
{
	std::string res = "";

	std::string::iterator i = str.begin();
	while (i != str.end())
	{
		if (*i >= 97 && *i <= 122)
			res += *i - 32;
		else
			res += *i;
		i++;
	}
	return (res);
}

Intern::Intern(void){}

Intern::~Intern(void){}

Form*	Intern::makeForm(std::string formName, std::string target)
{
	Form*	res;
	std::map<std::string, int> mapNames;

	mapNames[""] = 0;
	mapNames["SHRUBBERY CREATION"] = 1;
	mapNames["ROBOTOMY REQUEST"] = 2;
	mapNames["PRESIDENTIAL PARDON"] = 3;

	switch(mapNames[toupper(formName)])
	{
		case 1:
			res = new ShrubberyCreationForm(target);
			break;
		case 2:
			res = new RobotomyRequestForm(target);
			break;
		case 3:
			res = new PresidentialPardonForm(target);
			break;
		default:
			throw (Intern::FormNameException());
			break;
	}
	return (res);
}

const char* Intern::FormNameException::what(void) const throw()
{
	return ("Intern: Form name doesn't exists");
}