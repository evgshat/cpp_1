#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
	this->z_name = name;
}

Zombie::~Zombie()
{
	std::cout << "KILL: " << this->z_name << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
