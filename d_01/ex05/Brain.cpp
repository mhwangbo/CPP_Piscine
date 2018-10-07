/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:13:16 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 21:17:37 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string	Brain::identify(void) const
{
	std::stringstream s;
	s << this;
	return(s.str());
}
