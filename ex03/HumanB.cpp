#include "HumanB.hpp"

HumanB::HumanB(const std::string &Name): name(Name)
{}

HumanB::~HumanB()
{

}

void HumanB::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon_b->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon_b)
{
	if (this->weapon_b->getType() == "")
		this->weapon_b = NULL;
	this->weapon_b = &weapon_b;
}

