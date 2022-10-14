#include "FileManager.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		FileManager fm;
		if (fm.setFile(argv[1]) == 0)
			return (1);
		if (fm.replace(argv[2], argv[3]) == 0)
			return (1);
		
	}
	return (1);
}