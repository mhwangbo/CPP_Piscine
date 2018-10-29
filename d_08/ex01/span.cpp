/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:30:21 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/11 23:27:20 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <numeric>

#include <iostream>

Span::Span() {
	_vector.reserve(0);
}

Span::Span(unsigned int n) {
	_vector.reserve(n);
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span() {}

Span & Span::operator=(Span const & rhs) {
	this->_vector = rhs._vector;
	return (*this);
}

void	Span::addNumber(int n) {
	if (this->_vector.size() < this->_vector.capacity())
		this->_vector.push_back(n);
	else
		throw std::overflow_error("Error: FULL");
}

int		Span::shortestSpan() {
	std::vector<int>	tmp = _vector;

	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin() - 1);
	tmp.pop_back();
	return (tmp[std::distance(tmp.begin(), std::min_element(tmp.begin(), tmp.end()))]);
}

int		Span::longestSpan() {
	std::vector<int>::iterator	min = std::min_element(_vector.begin(), _vector.end());
	std::vector<int>::iterator	max = std::max_element(_vector.begin(), _vector.end());
	return (_vector[std::distance(_vector.begin(), max)] - _vector[std::distance(_vector.begin(), min)]);
}
