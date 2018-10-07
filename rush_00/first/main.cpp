/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:35:36 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/06 16:18:53 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>

int		main(void)
{
	int	health = 5;

	initscr();
	WINDOW * win = newwin(3, 12, 1, 1);
	box(win, '|', '-');
	mvwprintw(win, 0, 3, "HEALTH");
	for (int i = 0, x = 1, y = 1; i < health; i++, x += 2)
		mvwprintw(win, y, x, "o");
	refresh();
	wrefresh (win);
	getch();
	endwin();

	return 0;
}
