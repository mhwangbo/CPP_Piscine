/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:29:31 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 15:43:18 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void){

}

A::A(A const & src){
	*this = src;
}
	
A::~A(void){

}

A & A::operator=(A const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
