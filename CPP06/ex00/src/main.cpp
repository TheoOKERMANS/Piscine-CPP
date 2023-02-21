#include "Converter.hpp"

int	main(int argc, char** argv)
{
	Converter c;
	int i = 1;
	while (i < argc)
	{
		try
		{
			c.inputStr(argv[i]);
			c.printData();
		}
		catch(std::exception& e)
		{
			std::cout << "Cannot operate because : " << e.what() << std::endl;
		}
		std::cout << std::endl;
		i++;
	}
	return 0;
}