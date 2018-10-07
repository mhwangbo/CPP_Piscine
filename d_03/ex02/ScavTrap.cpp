/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:08:29 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:00:52 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap() : ClapTrap()
{
	_hit = 100;
	_maxHit = 100;
	_energy = 50;
	_maxEnergy = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;

	std::cout <<
		"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"
		<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit = 100;
	_maxHit = 100;
	_energy = 50;
	_maxEnergy = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;

	std::cout <<
		"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "Yoo hoooooooooo!" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "My servos... are seizing..." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Hey! Over here! I'm over heere!" << std::endl;

	this->_hit = copy._hit;
	this->_maxHit = copy._maxHit;
	this->_energy = copy._energy;
	this->_maxEnergy = copy._maxEnergy;
	this->_level = copy._level;
	this->_name = copy.getName();
	this->_melee = copy._melee;
	this->_ranged = copy._ranged;
	this->_armor = copy._armor;

	return (*this);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " + this->_name + " attacks " + target + " at range, causing " << this->_ranged << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " + this->_name + " attacks " + target + ", causing " << this->_melee << " points of damage!" << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string skills[5] = {"Miniontrap", "Rubber Ducky", "Senseless Sacrifice", "Medbot", "Torgue Fiesta"};
	srand(time(NULL));
	int		i = rand() % 5;

	if (this->_energy >= 25)
	{
		this->_energy -= 25;
		std::cout << "Push this button, flip this dongle, voila! Help me! ::: ";
	std::cout << "ScavTrap " + this->_name + " used " + skills[i] + " on "+ target << std::endl;
	}
	else
		std::cout << "Coming up empty!" << std::endl;
}
