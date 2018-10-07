/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:54:12 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 10:05:32 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	return ;
}

Peon::Peon(Peon const &copy)
{
	std::cout << "Zog zog." << std::endl;
	*this = copy;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon & Peon::operator=(Peon const &copy)
{
	this->_name = copy.getName();
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name + " has been turned into a pink pony" << std::endl;
	return ;
}
