/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:00:43 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/06 16:07:47 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include <iostream>
#include <ncurses.h>

Player::Player() {
	return ;
}

Player::Player(std::string name, int health, int attack, int size, int color, int x, int y) :
	Ship(name, health, attack, size, color, x, y) {
	return ;
}

Player::~Player() {
	return ;
}

Player(Player const & copy) {
	*this = copy;
}

void	Player::move(int direction);
void	Player::shoot();
void	Player::takeDamage();
