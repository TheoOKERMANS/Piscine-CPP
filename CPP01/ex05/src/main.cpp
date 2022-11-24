#include "Harl.hpp"

int main(void)
{
	Harl h;
	std::string str;
	
	std::cin >> str;
	while (str != "exit")
	{
		h.complain(str);
		std::cin >> str;
	}
	return (0);
}