/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 09:53:18 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/11 22:03:03 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template < typename T >
int		easyfind( T & x, int y)
{
	typename T::iterator	it = std::find(x.begin(), x.end(), y);
	if (it != x.end())
			return *it;
	throw std::logic_error("No match");
}

#endif
