/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:40:43 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/03 14:35:41 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class	Fixed {
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(int const value);
		Fixed(float const value);
		Fixed & operator = (Fixed const &fixed);
		float	toFloat(void) const;
		int		toInt(void) const;
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		

	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};

std::ostream & operator << (std::ostream & out, Fixed const & fixed);

#endif
