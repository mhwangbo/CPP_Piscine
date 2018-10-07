/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:27:55 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 21:18:30 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	Brain	tmp;
	this->_brain = tmp;
}

Human::~Human(void)
{
	return ;
}

Brain const&	Human::getBrain(void)
{
    return (this->_brain);
}

std::string	Human::identify(void)
{
	return(this->_brain.identify());
}
