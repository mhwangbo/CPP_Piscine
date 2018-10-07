/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:40:43 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 10:18:47 by mhwangbo         ###   ########.fr       */
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
		bool	operator > (Fixed const &fixed);
		bool	operator < (Fixed const &fixed);
		bool	operator >= (Fixed const &fixed);
		bool	operator <= (Fixed const &fixed);
		bool	operator == (Fixed const &fixed);
		bool	operator != (Fixed const &fixed);
		Fixed	operator + (Fixed const &fixed);
		Fixed	operator - (Fixed const &fixed);
		Fixed	operator * (Fixed const &fixed);
		Fixed	operator / (Fixed const &fixed);
		// postfix
		Fixed	operator ++ (int);
		Fixed	operator -- (int);
		// prefix
		Fixed & operator ++ (void);
		Fixed & operator -- (void);
		float	toFloat(void) const;
		int		toInt(void) const;
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		static const Fixed & min(const Fixed & fixed_1, const Fixed & fixed_2);
		static const Fixed & max(const Fixed & fixed_1, const Fixed & fixed_2);
		

	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};

std::ostream & operator << (std::ostream & out, Fixed const & fixed);

#endif
