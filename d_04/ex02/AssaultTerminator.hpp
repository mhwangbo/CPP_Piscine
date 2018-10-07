/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:17:31 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 14:18:42 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & copy);
		~AssaultTerminator(void);
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
		ISpaceMarine* clone(void) const;

		AssaultTerminator & operator=(AssaultTerminator const & copy);
};

#endif
