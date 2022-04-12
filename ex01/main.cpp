#include "Zombie.hpp"

int	main()
{
	int N = 10;

	Zombie *zombs;
	zombs = zombieHorde(N, "Bobo");
	for (int i = 0; i < N; i++)
		zombs[i].announce();
	delete []zombs;
}
