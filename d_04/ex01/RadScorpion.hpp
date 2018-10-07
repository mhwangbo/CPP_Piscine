/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:57:09 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 11:57:59 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const & copy);
		~RadScorpion();
		using Enemy::operator=;

		void	takeDamage(int);
};

#endif
