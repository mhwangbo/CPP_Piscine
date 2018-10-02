#include "ZombieEvent.hpp"
#include <cstdlib>
#include <time.h>

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

std::string	ZombieEvent::getZombieType(void) {
	return (this->_type);
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*ret = new Zombie(name, this->_type);
	return (ret);
}

Zombie		*ZombieEvent::randomChump(void)
{
	srand(time(NULL));
	int	random_length = rand() % 10 + 1;
	char	name[random_length];
	
	for (int i = 0; i < random_length; i++)
	{
		name[i] = (rand() % 26) + 97;
	}
	name[0] = toupper(name[0]);
	std::string ret(name, random_length);
	return (new Zombie(ret, this->_type));
}
