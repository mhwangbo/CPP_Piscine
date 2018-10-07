/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:36:28 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 21:01:41 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap() : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100), _level(1), _melee(30), _ranged(20), _armor(5)
{
	std::cout <<
		"Look out everybody! Things are about to get awesome!" 
		<< std::endl;
}

FragTrap::FragTrap(std::string name) : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100), _level(1), _name(name), _melee(30), _ranged(20), _armor(5)
{
	std::cout <<
		"Look out everybody! Things are about to get awesome!" 
		<< std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "Ooh yeah, watch me! Watch me go!" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Here I come to save the day!" << std::endl;
	
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

std::string	FragTrap::getName() const
{
	return (this->_name);
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " at range, causing " << this->_ranged << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + ", causing " << this->_melee << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
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

void		FragTrap::beRepaired(unsigned int amount)
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string skills[5] = {"Blight bot", "Shhh... trap", "Mechomagician", "Funzerker", "Clap-in-the-box"};
	std::string quote[5] = {"All burn before the mighty Siren-trap!", "Shoot him... he's the real one...", "Fly mini-trap! Fly!", "I'm a sexy dinosaur! Rawr!", "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!"};
	srand(time(NULL));
	int		i = rand() % 5;

	if (this->_energy >= 25)
	{
		this->_energy -= 25;
		std::cout << quote[i] + " ::: ";
	std::cout << "FR4G-TP " + this->_name + " used " + skills[i] + " on "+ target << std::endl;
	}
}
