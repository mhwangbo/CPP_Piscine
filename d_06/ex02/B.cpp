/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:43:21 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 15:44:44 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void){

}

B::B(B const & src){
	*this = src;
}

B::~B(void){

}

B & B::operator=(B const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
