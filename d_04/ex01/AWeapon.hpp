/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:44:32 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 12:22:40 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon
{
	private:
		std::string	_name;
		int			_damage;
		int			_apcost;

	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon const & copy);
		AWeapon & operator=(AWeapon const &copy);

		std::string	const & getName() const;
		int			getAPCost() const;
		int			getDamage() const;
		virtual void	attack() const = 0;
};

#endif
