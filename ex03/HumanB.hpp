#ifndef	HUMAN_B_HPP
#define	HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon	*weapon_b;
	public:
		HumanB(const std::string &Name = "");
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& weapon_b);


};

#endif
