#include "sed.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc < 4)
		{
			std::cout << "Wrong arguments" << std::endl;
			exit (0);
		}
		Sed::replace(argv[1], argv[2], argv[3]);
	}
	catch(const char *error)
	{
		std::cerr << error << std::endl;
	}
}
