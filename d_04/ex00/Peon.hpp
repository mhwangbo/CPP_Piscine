/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:44:28 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 11:02:33 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(std::string name);
		~Peon();
		Peon(Peon const &copy);
		Peon & operator=(Peon const &copy);
		void	getPolymorphed() const;

};

#endif
