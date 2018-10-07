/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 22:08:09 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:34:34 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap()
{
	_hit = 100;
	_maxHit = 100;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_melee = 60;
	_ranged = 20;
	_armor = 5;

	std::cout << "I am SUPER!" << std::endl;
}

SuperTrap::SuperTrap(std::string const name): FragTrap(name), NinjaTrap(name)
{
	_hit = 100;
	_maxHit = 100;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_melee = 60;
	_ranged = 20;
	_armor = 5;
	_name = name;

	std::cout << "I am SUPER!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy): FragTrap(copy), NinjaTrap(copy) {

	std::cout << "Wait... There's two SuperTrap?" << std::endl;
	*this = copy;
}

SuperTrap::~SuperTrap() {

	std::cout << "I was super...befor..." << std::endl;
}

SuperTrap &  SuperTrap::operator=(SuperTrap const &copy) {

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

void	SuperTrap::rangedAttack(std::string const & target) {

	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) {

	NinjaTrap::rangedAttack(target);
}
