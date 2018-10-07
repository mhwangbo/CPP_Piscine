/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:36:35 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 16:59:21 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
class	FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &);
		~FragTrap();
		FragTrap & operator=(FragTrap const &copy);
		
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName() const;
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
