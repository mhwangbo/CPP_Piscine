/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:22 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 08:11:09 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ncurses.h>
#include <ctime>
#include "interfaces.hpp"
#include "Missile.hpp"
#include "player.hpp"

int	main()
{
	int 		direction;
	Interfaces* interfaces = new Interfaces(100, 30, 2, 15);
	initscr ();
	keypad (stdscr, TRUE);
	curs_set (0);
	noecho ();
	nodelay(stdscr,TRUE);
	srand (time(NULL));
	interfaces->startMessage();
	while ((direction = getch()) != 10)
	{
		if (direction== (int) 'q')
		{
			interfaces->setEnd(TRUE);
			break ;
		}
	}

	move(0, 0);
	erase();

	direction = 0;
	
	WINDOW	* gameWindow = newwin(30, 100, 1, 1);
	WINDOW	* infoWindow = newwin(5, 100, 32, 1);
	refresh();
	interfaces->gameWin(gameWindow);
	interfaces->infoWindow(infoWindow);
	interfaces->gameControl(gameWindow, infoWindow);

	return (0);
}
