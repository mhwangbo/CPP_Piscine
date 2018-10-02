#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
