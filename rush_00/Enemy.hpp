/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:19:15 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 20:39:30 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "GameObject.hpp"
# include "Missile.hpp"
# include <ctime>

class   Enemy : public GameObject
{
	public:
		Enemy(int, int, Enemy*, Enemy*);
		~Enemy();
		Enemy(Enemy const & copy);
		using GameObject::operator=;
		void	move();
		void	setHit();
		int		getHit();
		void	destroy();

	private:
		int             _hit;
		int             _mX;
		int             _mY;
		static int		_number;
		Missile			*_missile;
};

#endif
