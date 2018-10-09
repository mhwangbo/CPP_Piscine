/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:44:47 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 15:45:21 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void){

}

C::C(C const & src){
	*this = src;
}

C::~C(void){

}

C & C::operator=(C const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
