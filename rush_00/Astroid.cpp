/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Astroid.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 15:39:28 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 18:07:03 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Astroid.hpp"
#include <cstdlib>

int		Astroid::_number = 0;
Astroid::Astroid(int x, int y, Astroid *next, Astroid *prev) : GameObject(x, y, next, prev) {
	_mX = 98;
	_mY = 28;
	_hit = 0;
	_number++;
	return ;
}

Astroid::~Astroid() {
	return ;
}

Astroid::Astroid(Astroid const & copy) : GameObject(copy) {
	*this = copy;
}

void	Astroid::setHit() {
	_hit = 1;
}

int		Astroid::getHit() {
	return (_hit);
}

void	Astroid::move() {
	clock_t	now = clock ();
	int		arr[3] = {-1, 0, 1};

	if (_next != NULL)
		_next->move();
	double diff = (double) now - (double) _start;
	diff /= CLOCKS_PER_SEC;
	if (diff >= 0.10) {
		_start = now;
		_x--;
		if (_x == 0)
		{
			Astroid	*tmp = this;
			if (tmp->_prev != NULL)
				tmp->_prev->setNext(_next);
			if (tmp->_next != NULL)
				tmp->_next->setPrev(_prev);
			if (tmp->_prev == NULL)
				tmp = NULL;
			else
				delete(tmp);
			_number -= 1;
			return ;
		}
	}
	if (_next == NULL && _number < 30) {
		setNext(new Astroid(_mX - (rand() % _mX/2), rand() % _mY + 1, NULL, this));
	}
//		_x += arr[rand() % 2];
//		_y += arr[rand() % 3];
}
