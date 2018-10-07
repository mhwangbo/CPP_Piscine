/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:43:43 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 16:38:32 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class	ISquad
{
	public:
		virtual	~ISquad() {}
		virtual int	getCount() const = 0;
		virtual	ISpaceMarine*	getUnit(int) const = 0;
		virtual int	push(ISpaceMarine*) = 0;
};

#endif
