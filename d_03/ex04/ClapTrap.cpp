/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:46:03 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 21:58:41 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

ClapTrap::ClapTrap()
{
	std::cout << "Let's get this party started!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Let's get this party started!" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Holy crap, that worked?" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "I'm too pretty to die!" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &copy)
{
	std::cout << "Holy crap, that worked?" << std::endl;

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

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int attack = amount - this->_armor;
	if (attack < 0)
		attack = 0;
	int	hit = this->_hit - (amount - this->_armor);

	if (hit < 0)
	{
		std::cout << "No, nononono NO! [hp = 0]" << std::endl;
		this->_hit = 0;
	}
	else
	{
		std::cout << "Why did they build me out of galvanized flesh?! [hp = " << hit << "]" << std::endl;
		this->_hit = hit;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int	repair = this->_hit + amount;
	if (repair > this->_maxHit)
	{
		std::cout << "You can't keep a good 'bot down! [hp = ";
		std::cout << this->_maxHit;
		std::cout << "]" << std::endl;
		this->_hit = this->_maxHit;
	}
	else
	{
		std::cout << "Hahahahaha! I'm alive! [hp = ";
		std::cout << (this->_hit + amount);
		std::cout << "]" << std::endl;
		this->_hit = repair;
	}
}
