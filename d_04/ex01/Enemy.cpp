/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:23:43 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 12:09:08 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp)
{
	return ;
}

Enemy::Enemy(Enemy const & copy)
{
	*this = copy;
	return ;
}

Enemy::~Enemy(){
	return ;
}

Enemy & Enemy::operator=(Enemy const &copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return (*this);
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else
	{
		if (_hp - damage < 0)
			_hp = 0;
		else
			_hp -= damage;
	}
	return ;
}

std::string const &	Enemy::getType() const
{
	return (this->_type);
}

int					Enemy::getHP() const
{
	return (this->_hp);
}
