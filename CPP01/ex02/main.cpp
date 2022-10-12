#include <iostream>

int main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "Adresse de la string en memoire : " << &brain << std::endl;
	std::cout << "Adresse stocke dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse stocke dans stringREF : " << &stringREF << std::endl;

	std::cout << "La valeur de la string : " << brain << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
	return (1);
}