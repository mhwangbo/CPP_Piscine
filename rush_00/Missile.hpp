/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 05:53:38 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/07 07:28:36 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_HPP
# define MISSILE_HPP

# include <ctime>

class	Missile
{
	public:
		Missile(int, int, Missile*, Missile*);
		~Missile();
		Missile(Missile const & copy);
		Missile & operator=(Missile const & copy);
		int		getX() const;
		int		getY() const;
		Missile	*getNext() const;
		Missile	*getPrev() const;
		void	setNext(Missile *next);
		void	setPrev(Missile *prev);
		void	move();

	private:
		int	_x;
		int	_y;
		Missile	*_next;
		Missile	*_prev;
		clock_t	_start;
} ;

#endif
