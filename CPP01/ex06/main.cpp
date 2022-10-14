#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc  == 2)
	{
		Harl h;
		h.complain(argv[1]);
	}
	return (1);
}