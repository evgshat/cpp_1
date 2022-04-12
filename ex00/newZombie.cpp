#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*Zomb;
	Zomb = new Zombie();
	Zomb->SetName(name);
	return Zomb;
}
