/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:04:18 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 10:44:18 by mhwangbo         ###   ########.fr       */
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

bool	Fixed::operator > (Fixed const &fixed)
{
	return (this->_fixedValue > fixed.getRawBits());
}

bool	Fixed::operator < (Fixed const &fixed)
{
	return (this->_fixedValue < fixed.getRawBits());
}

bool	Fixed::operator >= (Fixed const &fixed)
{
	return (this->_fixedValue >= fixed.getRawBits());
}

bool	Fixed::operator <= (Fixed const &fixed)
{
	return (this->_fixedValue <= fixed.getRawBits());
}

bool	Fixed::operator == (Fixed const &fixed)
{
	return (this->_fixedValue == fixed.getRawBits());
}

bool	Fixed::operator != (Fixed const &fixed)
{
	return (this->_fixedValue != fixed.getRawBits());
}

Fixed	Fixed::operator + (Fixed const &fixed)
{
	Fixed	ret;

	ret.setRawBits(this->_fixedValue + fixed._fixedValue);
	return (ret);
}

Fixed	Fixed::operator - (Fixed const &fixed)
{
	Fixed	ret;

	ret.setRawBits(this->_fixedValue - fixed._fixedValue);
	return (ret);
}

Fixed	Fixed::operator * (Fixed const &fixed)
{
	Fixed	ret;

	ret._fixedValue = (this->_fixedValue * fixed._fixedValue) >> this->_fractionalBits;;
	return (ret);
}

Fixed	Fixed::operator / (Fixed const &fixed)
{
	Fixed	ret;

	ret._fixedValue = (this->_fixedValue << this->_fractionalBits) / fixed._fixedValue;
	return (ret);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	ret;

	ret = *this;
	this->_fixedValue++;
	return (ret);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	ret;

	ret = *this;
	this->_fixedValue--;
	return (ret);
}

Fixed &	Fixed::operator ++ (void)
{
	this->_fixedValue++;
	return (*this);
}

Fixed & Fixed::operator -- (void)
{
	this->_fixedValue--;
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

const Fixed & Fixed::min(const Fixed & fixed_1, const Fixed & fixed_2)
{
	if (fixed_1.getRawBits() > fixed_2.getRawBits())
		return (fixed_2);
	return (fixed_1);
}

const Fixed & Fixed::max(const Fixed & fixed_1, const Fixed & fixed_2)
{
	if (fixed_1.getRawBits() > fixed_2.getRawBits())
		return (fixed_1);
	return (fixed_2);
}
