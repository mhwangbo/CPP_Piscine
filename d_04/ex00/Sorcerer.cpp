/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 08:56:51 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 09:44:01 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name + ", " + _title + ", is born !" << std::endl;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name + ", " + _title + ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &copy)
{
	this->_name = copy.getName();
	this->_title = copy.getTitle();
	return (*this);
}

std::string	Sorcerer::getName() const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->_title);
}

std::ostream & operator << (std::ostream & out, Sorcerer const & s)
{
	out << "I am " + s.getName() + ", " + s.getTitle() + ", and I like ponies !" <<std::endl;
	return out;
}

void	Sorcerer::polymorph(Victim const & target)
{
	target.getPolymorphed();
	return ;
}

void	Sorcerer::polymorph(Peon const & target)
{
	target.getPolymorphed();
	return ;
}
