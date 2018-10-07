/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:38:39 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/06 16:08:11 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.hpp"

Ship::Ship() {
	return ;
}

Ship::Ship(std::string name, int health, int attack, int size, int color, int x, int y) : 
	_name(name), _health(health), _attack(attack), _size(size), _color(color), _x(x), _y(y) {
	return ;
}

Ship::~Ship() {
	return ;
}

Ship::Ship(Ship const & copy) {
	*this = copy;
}

Ship & Ship::operator=(Ship const & copy) {
	this->_name = getName(copy);
	this->_health = getHealth(copy);
	this->_attack = getAttack(copy);
	this->_size = getSize(copy);
	this->_color = getColor(copy);
	return (*this);
}

std::string	getName() {
	return (this->_name);
}

int			getHealth() {
	return (this->_health);
}

int			getAttack() {
	return (this->_attack);
}

int			getSize() {
	return (this->_size);
}

int			getColor() {
	return (this->_color);
}
