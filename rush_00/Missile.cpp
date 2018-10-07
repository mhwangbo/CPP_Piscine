/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 06:11:13 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 07:38:44 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.hpp"

Missile::Missile(int x, int y, Missile *next, Missile *prev) : _x(x), _y(y), _next(next), _prev(prev) {
	_start = clock ();
	return ;
}

Missile::~Missile() {
	return ;
}

Missile::Missile(Missile const & copy) {
	*this = copy;
}

Missile & Missile::operator =(Missile const & copy) {
	_x = copy.getX();
	_y = copy.getY();
	_next = copy.getNext();
	_prev = copy.getPrev();
	return (*this);
}

int		Missile::getX() const {
	return (_x);
}

int		Missile::getY() const {
	return (_y);
}

Missile*	Missile::getNext() const {
	return (_next);
} 

Missile*	Missile::getPrev() const {
	return (_prev);
}

void	Missile::setNext(Missile *next) {
	_next = next;
}

void	Missile::setPrev(Missile *prev) {
	_prev = prev;
}

void	Missile::move() {
	clock_t	now = clock ();
	
	if (_next != NULL)
		_next->move();
	double diff = (double) now - (double) _start;
	diff /= CLOCKS_PER_SEC;
	if (diff >= 0.05)
	{
		_start = now;
		_x++;
	}
}
