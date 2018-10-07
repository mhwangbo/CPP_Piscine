/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:06:46 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 17:26:10 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class	ScavTrap
{
	private:
		int			_hit;
		int			_maxHit;
		int			_energy;
		int			_maxEnergy;
		int			_level;
		std::string	_name;
		int			_melee;
		int			_ranged;
		int			_armor;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap const &copy);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName() const;
		void		challengeNewcomer(std::string const & target);
};

#endif
