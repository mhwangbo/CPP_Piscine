/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:35:25 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/06 16:07:02 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_HPP
# define SHIP_HPP
# include <iostream>

class	Ship
{
	public:
		Ship();
		Ship(std::string name, int health, int attack, int size, int color, int x, int y);
		virtual ~Ship();
		Ship(Ship const & copy);
		Ship & operator =(Ship const & copy);
		std::string	getName();
		int			getHealth();
		int			getAttack();
		int			getSize();
		int			getColor();
		virtual void	move(int direction) = 0;
		virtual	void	shoot() = 0;
		virtual void	takeDamage() = 0;

	private:
		std::string	_name;
		int			_health;
		int			_attack;
		int			_size;
		int			_color;
		int			_x;
		int			_y;
};

#endif
