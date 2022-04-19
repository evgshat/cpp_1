#include "HumanB.hpp"

HumanB::HumanB(const std::string &Name): name(Name)
{}

HumanB::~HumanB()
{

}

void HumanB::attack() const
{
    if (this->weapon_b == NULL)
        std::cout << this->name << " has not a weapon " << std::endl;
    else
	    std::cout << this->name << " attacks with their " << this->weapon_b->getType() << std::endl;

}

void	HumanB::setWeapon(Weapon& weapon_b)
{
	if (weapon_b.getType() == "")
		this->weapon_b = NULL;
    else
	    this->weapon_b = &weapon_b;
}

