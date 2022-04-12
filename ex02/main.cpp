#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
		std::cout << "VALUE_STR: " << str << std::endl;
	std::string *p_str = &str;
		std::cout << "VALUE_PTR: " << p_str << std::endl;
	std::string &ref_str = str;
		std::cout << "VALUE_PTR: " << ref_str << std::endl;
	// std::string &ref_str = &str;
}
