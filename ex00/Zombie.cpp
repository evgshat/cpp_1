#include "Zombie.hpp"

std::string	Zombie::GetName(std::string name)
{
	return (name);
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "KILL: " << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

