/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:35:25 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 07:28:24 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP
# include <iostream>
# include "Missile.hpp"

class	Player
{
	public:
		Player();
		Player(int, int, int, int);
		virtual ~Player();
		Player(Player const & copy);
		Player & operator =(Player const & copy);
		int			getHealth() const;
		int			getX() const;
		int			getY() const;
		int			getMX() const;
		int			getMY() const;
		Missile*	getMissile() const;
		void		move(int direction);
		void		shoot();
		void		takeDamage();

	private:
		int			_health;
		int			_x;
		int			_y;
		int			_mX;
		int			_mY;
		Missile*	_missile;
};

#endif
