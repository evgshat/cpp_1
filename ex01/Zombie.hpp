#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string z_name;
	public:
		Zombie();
		~Zombie();
		void	SetName(std::string name);
		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);
#endif








