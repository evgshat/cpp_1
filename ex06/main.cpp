#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;
	if (argc == 2)
		Harl.complain(std::string(argv[1]));
	else
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	return (0);
}
