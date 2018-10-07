/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:54:44 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:19:45 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
	private:

	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &copy);
		~SuperTrap();
		SuperTrap & operator=(SuperTrap const &copy);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
};

#endif
