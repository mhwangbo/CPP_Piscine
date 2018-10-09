/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:21:59 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 14:24:19 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {
	return ;
}

Base::Base(Base const & src) {
	*this = src;
}

Base::~Base() {
	return ;
}

Base &	Base::operator=(Base const & rhs) {
	if (this != &rhs)
		*this = rhs;
	return *this;
}
