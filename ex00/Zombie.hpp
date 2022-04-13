#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string z_name;
	public:
		Zombie(const std::string &name = "");
		~Zombie();
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
		void	announce( void );
};

#endif
