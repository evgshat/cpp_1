#ifndef	HUMAN_A_HPP
#define	HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon	&weapon_a;
	public:
		HumanA(const std::string &Name, Weapon& Weapon_a);
		~HumanA();
		void	attack() const;

};

#endif
