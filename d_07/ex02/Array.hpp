/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:25:08 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/10 23:10:09 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class	Array
{
	public:
		Array<T>() : _array(NULL), _size(0) {};
		
		Array<T>(unsigned int n) : _size(n) {
			if (_size == 0)
				_array = NULL;
			else
				_array = new T[n];
		};
		
		Array<T>(Array<T> const & src): _array(NULL), _size(0) {
			*this = src;
		};
		
		~Array<T>() {};
		
		Array & operator=(Array<T> const & rhs) {
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = (rhs._array[i]);
			return (*this);
		};

		T &		operator[](unsigned int n) {
			if (n >= _size)
				throw std::exception();
			return(_array[n]);
		};

		unsigned int	size() {
			return (this->_size);
		};

	private:
		T*				_array;
		unsigned int	_size;
};

#endif
