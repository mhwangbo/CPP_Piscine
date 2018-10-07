/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:15:23 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:02:34 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	std::cout << "/******************** FragTrap ********************\\" << std::endl << std::endl << "---> Create:" << std::endl;
	FragTrap	fragT("Frag");

	std::cout << std::endl << "---> Attacks:" << std::endl;
	fragT.rangedAttack("Killer");
	fragT.meleeAttack("Killer");

	std::cout << std::endl << "---> fragT dies:" << std::endl;
	fragT.takeDamage(105);

	std::cout << std::endl << "---> fragT repaired:" << std::endl;
	fragT.beRepaired(100);

	std::cout << std::endl << "---> random:" << std::endl;
	fragT.vaulthunter_dot_exe("Killer");
	fragT.takeDamage(1);
	return (0);
}
