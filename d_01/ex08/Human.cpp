/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 00:47:04 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/03 11:15:34 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*f[3])(std::string const & target) =
		{&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	const std::string list[3] = {"meleeAttack","rangedAttack","intimidatingShout"};

	for (int i = 0; i < 3; i++)
	{
		if (list[i] == action_name)
			(this->*f[i])(target);
	}
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee Attack on " + target + "!" << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Range Attack on " + target + "!" << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Shout!!! " + target + " freezed!" << std::endl;
}
