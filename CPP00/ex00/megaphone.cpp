#include <iostream>

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
}