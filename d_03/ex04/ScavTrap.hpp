/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:06:46 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:20:47 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap const &copy);
		
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		challengeNewcomer(std::string const & target);
};

#endif
