#ifndef	REPLACE_HPP
#define	REPLACE_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void empty(void);
	public:
		void complain(std::string level);
};

#endif
