/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:45:22 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 19:48:33 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(int N)
{
	this->_n = N;
	this->_zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		this->_zombies[i].setZombieType("Runner");
		this->_zombies[i].setZombieName(randomChump());
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	return ;
}

void		ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_n; i++)
		this->_zombies[i].announce();
}

std::string	ZombieHorde::randomChump(void)
{
    int     i;
    std::string names[10] = {"Janise", "Dagny", "Ferdinand", "Lilli", "Phil", "Saran", "Ulrike", "Annamae", "Minerva", "Daryl"};

    i = rand() % 10;
    return (names[i]);
}
