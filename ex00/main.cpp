#include "Zombie.hpp"

int main()
{
	//стек
	Zombie	zomb("Hehe");
	zomb.announce();
	zomb.randomChump("Vavav");
	//в куче
	Zombie *zomb_1 = zomb.newZombie("Kek");
	zomb_1->announce();
	delete zomb_1;
}
