#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl h;
	std::string str;
	
	std::cin >> str;
	while (str != "exit")
	{
		h.complain(str);
		std::cin >> str;
	}
	return (1);
}