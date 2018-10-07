/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 08:56:47 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 09:44:24 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class	Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;

	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(Sorcerer const &copy);
		Sorcerer & operator=(Sorcerer const &copy);
	
		std::string	getName() const;
		std::string getTitle() const;
		void	polymorph(Victim const & target);
		void	polymorph(Peon const & target);

};

std::ostream & operator << (std::ostream & out, Sorcerer const & s);

#endif
