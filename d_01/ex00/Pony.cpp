/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:01:51 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 17:02:09 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

std::string	Pony::getName(void) {
	 return (this->_name);
}

std::string Pony::getColor(void) {
	return (this->_color);
}

std::string	Pony::getBreed(void) {
	return (this->_breed);
}

int			Pony::getAge(void) {
	return (this->_age);
}

int			Pony::getHeight(void) {
	return (this->_height);
}

void		Pony::setName(std::string name) {
	this->_name = name;
}

void		Pony::setColor(std::string color) {
	this->_color = color;
}

void		Pony::setBreed(std::string breed) {
	this->_breed = breed;
}

void		Pony::setAge(int age) {
	this->_age = age;
}

void		Pony::setHeight(int height) {
	this->_height = height;
}
