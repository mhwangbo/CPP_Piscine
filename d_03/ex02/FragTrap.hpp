/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:36:35 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 21:59:29 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:
	
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &);
		~FragTrap();
		FragTrap & operator=(FragTrap const &copy);
		
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
