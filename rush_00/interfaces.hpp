/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interfaces.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 00:36:46 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 08:15:22 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACES_HPP
# define INTERFACES_HPP
# include <ncurses.h>
# include "player.hpp"

# define UP 0
# define DOWN 1
# define RIGHT 2
# define LEFT 3

class	Interfaces
{
	public:
		Interfaces();
		Interfaces(int maxX, int maxY, int posX, int posY);
		~Interfaces();
		Interfaces(Interfaces const & copy);
		Interfaces & operator=(Interfaces const & copy);

		void	startMessage();
		int		getMaxX() const;
		int		getMaxY() const;
		int		getPosX() const;
		int		getPosY() const;
		void	setEnd(bool);
		bool	getEnd() const;
		void	gameWin(WINDOW *);
		void	infoWindow(WINDOW *);
		void	moveMissile();
		void	gameControl(WINDOW *, WINDOW *);
		void	print(WINDOW *);

	private:
		int		_maxX;
		int		_maxY;
		int		_posX;
		int		_posY;
		bool	_end;
		Player	*_player;
};

#endif
