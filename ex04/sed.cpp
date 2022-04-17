#include "sed.hpp"

void Sed::replace(const std::string& file, const std::string& s1, const std::string& s2)
{
	std::ifstream	outFile (file);
	std::ofstream	inFile (file + ".replace");

	outFile.open(file, std::ios::out);
	inFile.open(file, std::ios::in);

	// if (!outFile.is_open() || inFile.is_open())
	// 	throw("Error file open");
	if (!s1.size() || !s2.size())
		throw("Wrong argument. Empty str.");
	// outFile.strlen();
	// int len_file = outFile.size();
	// int len_s1   = s1.size();
	// int len_s2   = s1.size();

	int for_s1 = 0;
	int for_s2 = 0;
	for (int for_f = 0; for_f < len_file; for_f++)
	{
		while (file[for_f] == s1[for_s1] && file[for_f] != '\0' && s1[for_s1] != '\0')
		{
			for_f++;
			for_s1++;
		}
		if (s1[for_s1] == '\0')
		{
			for_f = for_f - len_s1;

			while (s2[for_s2] != '\0')
			{
				file[for_f] = s2[for_s2];
				for_f++;
				for_s2++;
			}
			if (len_s2 < for_s1)
			{
				int diff = len_s2 = for_s1;
				for_f = for_f - diff;
			}
			else if (len_s2 > for_s1)
			{
				int diff = len_s2 = for_s1;
				for_f = for_f + diff;
			}
		}
		for_s2 = 0;
		for_s1 = 0;

	}
}
