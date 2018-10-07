/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:24:55 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 10:05:34 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class	Victim
{
	public:
		Victim();
		Victim(std::string name);
		~Victim();
		Victim(Victim const &copy);
		Victim & operator=(Victim const &copy);

		std::string	getName() const;
		void		getPolymorphed() const;

	protected:
		std::string	_name;
};

std::ostream & operator << (std::ostream & out, Victim const & v);

#endif
