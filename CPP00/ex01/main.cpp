#include "PhoneBook.hpp"

std::string	getInput(std::string txt)
{
	std::string res;

	std::cout << txt;
	std::cin >> res;
	return (res);
}

int	isNumber(std::string res)
{
	std::string::const_iterator it = res.begin();
    while (it != res.end() && std::isdigit(*it)) 
		++it;
    return !res.empty() && it == res.end();
}

int correctIndex(std::string res, int nbContact)
{
	if (isNumber(res) == 0)
	{
		std::cout << "Not a number" << std::endl;
		return (0);
	}
	if (stoi(res) > nbContact)
	{
		std::cout << "Higher than number of contact" << std::endl;
		return (0);
	}
	if (stoi(res) < 1)
	{
		std::cout << "Lower than 1" << std::endl;
		return (0);
	}
	return (1);
}

int getIndex(int nbContact)
{
	std::string res;

	std::cout << "Index : ";
	std::cin >> res;
	while (correctIndex(res, nbContact) == 0)
	{
		std::cout << "Index : ";
		std::cin >> res;
	}
	return (stoi(res));
}

void	adding(PhoneBook *pb)
{
	Contact c;

	c.setFirstName(getInput("First name : "));
	c.setLastName(getInput("Last name : "));
	c.setNickName(getInput("Nickname : "));
	c.setPhoneNumber(getInput("Phone number : "));
	c.setDarkestSecret(getInput("Darkest secret : "));
	pb->addContact(c);
}

std::string getFormatedString(std::string str)
{
	std::string res;
	int len;
	int i;

	res = "";
	len = str.length();
	if (len < 10)
	{
		i = 0;
		while (i < 10 - len)
		{
			res += " ";
			i++;
		}
		res += str;
	}
	else
		res += str.substr(0, 9) + ".";
	return (res);
}

std::string	getContactInfo(Contact c, int index)
{
	std::string res;
	int	len;

	res = getFormatedString(std::to_string(index + 1)) + "|";
	res += getFormatedString(c.getFirstName()) + "|";
	res += getFormatedString(c.getLastName()) + "|";
	res += getFormatedString(c.getNickName());
	return (res);
}

void printContactInfo(Contact c)
{
	std::cout << "First name : " << c.getFirstName() << std::endl;
	std::cout << "Last name : " << c.getLastName() << std::endl;
	std::cout << "Nickname : " << c.getNickName() << std::endl;
	std::cout << "Phone number : " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << c.getDarkestSecret() << std::endl;
}

void	searching(PhoneBook *pb)
{
	int	i;
	Contact c;

	std::cout << "Contacts :" << std::endl;
	if (pb->getNbContact() == 0)
		return ;
	i = 0;
	while (i < pb->getNbContact())
	{
		std::cout << getContactInfo(pb->getContact(i), i) << std::endl;
		i++;
	}
	i = getIndex(pb->getNbContact());
	printContactInfo(pb->getContact(i - 1));
}

int main()
{
	PhoneBook	pb;
	std::string	input;

	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			adding(&pb);
		else if (input == "SEARCH")
			searching(&pb);
		else if (input == "EXIT")
			break;
	}
}