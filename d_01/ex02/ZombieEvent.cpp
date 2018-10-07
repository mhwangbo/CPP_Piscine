/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:06:28 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 17:01:50 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

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
	int	i;
	 std::string names[10] = {"Janise", "Dagny", "Ferdinand", "Lilli", "Phil", "Saran", "Ulrike", "Annamae", "Minerva", "Daryl"};

	srand(time(NULL));
    i = rand() % 10;
	return (new Zombie(names[i], this->_type));
}
