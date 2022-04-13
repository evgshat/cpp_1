#include "HumanA.hpp"

HumanA::HumanA(const std::string &Name, Weapon &Weapon_a): weapon_a(Weapon_a)
{
	this->name = Name;
}

HumanA::~HumanA()
{

}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon_a.getType() << std::endl;
}
