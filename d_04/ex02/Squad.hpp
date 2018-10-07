/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:22:37 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 16:36:14 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
	typedef struct	s_squad
	{
		ISpaceMarine	*marines;
		s_squad			*next;
	}				t_squad;

private:
	int			_number;
	t_squad*	_squad;

public:

	Squad(void);
	Squad(Squad const & copy);
	~Squad(void);

	int		getCount() const;
	ISpaceMarine*	getUnit(int n) const;
	int		push(ISpaceMarine* marine);

	Squad & operator=(Squad const & copy);
};

#endif
