#include "Zombie.hpp"

int	main()
{
	Zombie Zomb1("Zomb1");
	Zomb1.announce();
	randomChump("Zomb2");
	Zombie *Zomb3 = newZombie("Zomb3");
	Zomb3->announce();
	delete Zomb3;
}
