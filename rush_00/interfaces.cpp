/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interfaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:46:36 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 08:17:23 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interfaces.hpp"

Interfaces::Interfaces() {
	return ;
}

Interfaces::Interfaces(int maxX, int maxY, int posX, int posY) : _maxX(maxX), _maxY(maxY), _posX(posX), _posY(posY), _end(FALSE)
{
	_player = new Player(posX, posY, maxX, maxY);
	return ;
}

Interfaces::~Interfaces() {
	return ;
}

Interfaces::Interfaces (Interfaces const & copy) {
	*this = copy;
}

Interfaces & Interfaces::operator=(Interfaces const & copy) {
	this->_maxX = copy.getMaxX();
	this->_maxY = copy.getMaxY();
	this->_posX = copy.getPosX();
	this->_posY = copy.getPosY();

	return (*this);
}

void	Interfaces::startMessage () {
        mvprintw(15, 10, " .-. .--.  .    .--..---.  --.--.   ..       ..    .--. .---..--.  .-. \n");
        mvprintw(16, 10, "(   )|   )/ \\  :    |        |  |\\  | \\     // \\   |   :|    |   )(   )\n");
        mvprintw(17, 10, " `-. |--'/___\\ |    |---     |  | \\ |  \\   //___\\  |   ||--- |--'  `-. \n");
        mvprintw(18, 10, "(   )|  /     \\:    |        |  |  \\|   \\ //     \\ |   ;|    |  \\ (   )\n");
        mvprintw(19, 10, " `-' ' '       ``--''---'  --'--'   '    ''       `'--' '---''   ` `-' \n");
	attron (A_BLINK | A_BOLD);
	mvprintw (22, 30, "press 'ENTER' to start game");
	attroff (A_BLINK | A_BOLD);
	mvprintw (23, 34, "press 'q' to quit");

   refresh ();
}

int		Interfaces::getMaxX() const {
	return (this->_maxX);
}

int		Interfaces::getMaxY() const {
	return (this->_maxY);
}

int		Interfaces::getPosX() const {
	return (this->_posX);
}

int		Interfaces::getPosY() const {
	return (this->_posY);
}

void	Interfaces::setEnd(bool end) {
	this->_end = end;
}

bool	Interfaces::getEnd() const {
	return (this->_end);
}

void	Interfaces::infoWindow(WINDOW * window) {
	box(window, '|', '-');
	mvwprintw(window, 2, 2, "HEALTH: ");
	for (int i = 0; i < _player->getHealth(); i++)
		mvwprintw(window, 2, 10 + (2 * i), "o ");
	mvwprintw(window, 1, 80, "SPACE: Missile");
	mvwprintw(window, 2, 80, "ARROW: Move");
	mvwprintw(window, 3, 80, "  Q  : Exit");

	wrefresh(window);
}

void	Interfaces::gameWin(WINDOW * window) {
	box(window, '|', '-');
	wrefresh(window);
}


void	Interfaces::moveMissile() {
	if (_player->getMissile() == NULL)
		return ;
	Missile *tmp;
	if ((tmp = _player->getMissile()) != NULL)
		tmp->move();
}

void	Interfaces::gameControl(WINDOW * window, WINDOW * info) {
	int	direction = 0;
	
	while (this->_end != TRUE)
	{
		direction = getch();
		switch (direction)
		{
			case KEY_UP:
				_player->move(UP);
				break ;
			case KEY_DOWN:
				_player->move(DOWN);
				break ;
			case KEY_RIGHT:
				_player->move(RIGHT);
				break ;
			case KEY_LEFT:
				_player->move(LEFT);
				break ;
			case (int)' ':
				_player->shoot();
				break ;
			case (int)'q':
				_end = TRUE;
				break ;
		}
		moveMissile();
		print(window);
		infoWindow(info);
		wrefresh(window);
	}

	endwin ();
}

void	Interfaces::print(WINDOW * window) {
	werase (window);

	box(window, '|', '-');
	mvwprintw(window, _player->getY(), _player->getX(), ">");
	mvwprintw(window, _player->getY(), _player->getX() - 1, "#");
	if (_player->getMissile())
	{
		Missile *tmp = _player->getMissile();
		while (tmp)
		{
			mvwprintw(window, tmp->getY(), tmp->getX(), "o");
			tmp = tmp->getNext();
		}
	}
}
