/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:38:14 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 11:48:41 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const & copy);
		~SuperMutant();
		using Enemy::operator=;

		void	takeDamage(int);
};

#endif
