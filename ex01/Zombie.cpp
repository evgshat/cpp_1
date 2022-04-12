#include "Zombie.hpp"

Zombie::Zombie()
{

}

// Zombie::Zombie(std::string name)
// {
// 	this->name = name;
// }

Zombie::~Zombie()
{
	std::cout << "KILL: " << this->z_name << std::endl;
}

void	Zombie::SetName(std::string name)
{
	this->z_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
