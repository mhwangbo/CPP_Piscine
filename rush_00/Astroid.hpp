/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Astroid.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 15:35:17 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 19:27:54 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTROID_HPP
# define ASTROID_HPP

# include "GameObject.hpp"
# include <ctime>

class	Astroid : public GameObject
{
	public:
		Astroid(int, int, Astroid*, Astroid*);
		~Astroid();
		Astroid(Astroid const & copy);
		using GameObject::operator=;
		void	move();
		void	setHit();
		int		getHit();

	private:
		int		_hit;
		int		_mX;
		int		_mY;
		static int	_number;
};

#endif
