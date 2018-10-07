/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:04:18 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 09:12:38 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(value << _fractionalBits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(value * (1 << _fractionalBits)));
}

Fixed & Fixed::operator = (Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

float	Fixed::toFloat(void) const
{
	float tmp;

	tmp = getRawBits();
	return (tmp / (1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_fractionalBits);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream & operator << (std::ostream & out, Fixed const & fixed)
{
	out << fixed.toFloat();
	return out;
}
