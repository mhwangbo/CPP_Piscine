/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 05:53:38 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 19:29:55 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_HPP
# define MISSILE_HPP

# include <ctime>
# include "GameObject.hpp"

class	Missile : public GameObject
{
	public:
		Missile(int, int, Missile*, Missile*);
		~Missile();
		Missile(Missile const & copy);
		Missile & operator=(Missile const & copy);
		void	destroy();
		void	move();
} ;

#endif
