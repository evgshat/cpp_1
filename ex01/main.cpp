#include "Zombie.hpp"

int main()
{
	Zombie *zombs;
	Zombie zomb("alone");
	zomb.announce();

	zombs = zomb.zombieHorde(5, "bebek");
	for (int i = 0; i < 5; i++)
		zombs[i].announce();
	delete [] zombs;
}
