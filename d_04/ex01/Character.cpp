/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:06:30 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 12:33:24 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	return ;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(Character const & copy)
{
	*this = copy;
}

Character & Character::operator=(Character const &copy)
{
	this->_name = copy.getName();
	this->_ap = copy.getAP();
	this->_weapon = copy.getWeapon();
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

int					Character::getAP() const
{
	return (this->_ap);
}

AWeapon*			Character::getWeapon() const
{
	return (this->_weapon);
}

void				Character::recoverAP()
{
	if (_ap + 10 > 40)
		_ap = 40;
	else
		_ap += 10;
}

void				Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void				Character::attack(Enemy* enemy)
{
	int		apCost = _weapon->getAPCost();

	if (_ap - apCost < 0)
		return ;
	
	std::cout << _name + " attacks " + enemy->getType() + " with a " + _weapon->getName() << std::endl;
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete(enemy);
	_ap -= apCost;
}

std::ostream & operator <<(std::ostream & out, Character const & c)
{
	out << c.getName() + " has " << c.getAP() << " AP and";
	if (!c.getWeapon())
		out << " is unarmed";
	else
		out << " wields a " + c.getWeapon()->getName();
	out << std::endl;
	return (out);
}
