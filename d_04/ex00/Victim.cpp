/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:24:50 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 10:04:36 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	return ;
}
Victim::Victim(std::string name) : _name(name)
{
	std::cout
		<< "Some random victim called " + _name + " just popped !"
		<< std::endl;
	return ;
}

Victim::~Victim()
{
	std::cout
		<< "Victim " + _name + " just died for no apparent reason !"
		<< std::endl;
	return ;
}

Victim::Victim(Victim const &copy)
{
	*this = copy;
}

Victim & Victim::operator=(Victim const &copy)
{
	this->_name = copy.getName();
	return (*this);
}

std::string	Victim::getName() const
{
	return (this->_name);
}

void	Victim::getPolymorphed() const
{
	std::cout
		<< this->_name + " has been turned into a cute little sheep !"
		<< std::endl;
	return ;
}

std::ostream & operator << (std::ostream & out, Victim const & v)
{
	out << "I'm " + v.getName() + " and I like otters !" << std::endl;
	return (out);
}
