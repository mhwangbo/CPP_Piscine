/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:34:51 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/06 16:07:29 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "Ship.hpp"

class	Player : public Ship
{
	public:
		Player();
		Player(std::string name, int health, int attack, int size, int color, int x, int y);
		~Player();
		Player(Player const & copy);
		using Ship::operator=;

		void	move(int direction);
		void	shoot();
		void	takeDamage();
};

#endif
