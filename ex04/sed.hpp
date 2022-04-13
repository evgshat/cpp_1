#ifndef	REPLACE_HPP
#define	REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Sed
{
	public:
	static void replace(const std::string& file, const std::string& s1, const std::string& s2);
};

#endif
