/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:23:52 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:06:14 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	_hit = 60;
	_maxHit = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_melee = 60;
	_ranged = 5;
	_armor = 0;
	std::cout << "I am a newly graduated ninja!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap(name)
{
	_hit = 60;
	_maxHit = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_melee = 60;
	_ranged = 5;
	_armor = 0;
	_name = name;

	std::cout << "I am a newly graduated ninja!!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy): ClapTrap(copy) {

	std::cout << "Clone Technique!" << std::endl;
	*this = copy;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "(poke) There is no reaction. It just seems like a dead ninja." << std::endl;
}

NinjaTrap &  NinjaTrap::operator=(NinjaTrap const &copy) 
{
	std::cout << "One more me!" << std::endl;

	this->_name = copy.getName();
	this->_hit = copy._hit;
	this->_maxHit = copy._maxHit;
	this->_energy = copy._energy;
	this->_maxEnergy = copy._maxEnergy;
	this->_level = copy._level;
	this->_melee = copy._melee;
	this->_ranged = copy._ranged;
	this->_armor = copy._armor;
	
	return (*this);
}

void		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " + this->_name + " attacks " + target + " at range, causing " << this->_ranged << " points of damage!" << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NinjaTrap " + this->_name + " attacks " + target + ", causing " << this->_melee << " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {

	std::cout << this->getName() << " used Gust Slash on " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	std::cout << this->getName() << " used Ninjutsu on " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {

	std::cout << this->getName() << " use Hellfrog Medium on " << target.getName() << std::endl;
}
