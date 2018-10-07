/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:02:45 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 12:33:01 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string	_name;
		int			_ap;
		AWeapon*	_weapon;

	public:
		Character(std::string const & name);
		Character();
		Character(Character const & copy);
		Character & operator=(Character const &copy);
		~Character();

		void				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		std::string const &	getName() const;
		int					getAP() const;
		AWeapon*			getWeapon()const;
};

std::ostream & operator <<(std::ostream & out, Character const & c);

#endif
