/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:31:01 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 17:04:43 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int		main()
{
	std::cout << "---------------Create Marines---------------" << std::endl;
	ISpaceMarine* bob = new (TacticalMarine);
	ISpaceMarine* jim = new (AssaultTerminator);

	std::cout << "----------------Create Squad----------------" << std::endl;
	ISquad* vlc = new (Squad);
	vlc->push(bob);
	vlc->push(jim);
	
	std::cout << "-------------------Attack-------------------" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		std::cout << "***********************************" << std::endl;
		ISpaceMarine* cur = vlc->getUnit(i);
		ISpaceMarine* cloned = cur->clone();
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "**************cloned**************" << std::endl;
		cloned->battleCry();
	}

	std::cout << "-------------------Delete-------------------" << std::endl;
	delete(vlc);
	return (0);
}
