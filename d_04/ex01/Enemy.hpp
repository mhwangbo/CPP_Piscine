/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:23:40 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 12:26:27 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class	Enemy
{
	private:
		std::string	_type;
		int			_hp;

	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy(Enemy const & copy);
		Enemy & operator=(Enemy const &copy);

		std::string	const & getType() const;
		int					getHP() const;

		virtual void		takeDamage(int);
};

#endif
