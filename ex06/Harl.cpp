#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*mess[4])( ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int key = 4;
	key = level == "DEBUG" ? 0 : key;
	key = level == "INFO" ? 1 : key;
	key = level == "WARNING" ? 2 : key;
	key = level == "ERROR" ? 3 : key;

	switch (key)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			(this->*mess[0])();
			std::cout << "\n";
		case 1:
			std::cout << "[ INFO ]\n";
			(this->*mess[1])();
			std::cout << "\n";
		case 2:
			std::cout << "[ WARNING ]\n";
			(this->*mess[2])();
			std::cout << "\n";
		case 3:
			std::cout << "[ ERROR ]\n";
			(this->*mess[3])();
			std::cout << "\n";
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
