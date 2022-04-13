#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p_str = &str;
	std::string &ref_str = str;

	//addres
	std::cout << "ADDR STR: " << &str << std::endl;
	std::cout << "ADDR P_STR: " << p_str << std::endl;
	std::cout << "ADDR REF_STR: " << &ref_str << std::endl;

	//values
	std::cout << "VAL STR: " << str << std::endl;
	std::cout << "VAL P_STR: " << *p_str << std::endl;
	std::cout << "VAL REF_STR: " << ref_str << std::endl;
}
