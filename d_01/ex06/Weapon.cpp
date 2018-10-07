/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 23:27:49 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 23:42:08 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)
{
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const&	Weapon::getType()
{
	return (this->_type);
}

void				Weapon::setType(std::string str)
{
	this->_type = str;
}
