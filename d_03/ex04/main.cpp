/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:55:17 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/04 22:18:27 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <cstdlib>
#include <iostream>

int		main() {

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

	std::cout << std::endl << "/******************** ScavTrap ********************\\" << std::endl << std::endl << "---> Create:" << std::endl;
	ScavTrap	scavT("Scav");

	std::cout << std::endl << "---> Attack:" << std::endl;
	scavT.rangedAttack("Monster");
	scavT.takeDamage(15);
	scavT.meleeAttack("Monster");
	scavT.takeDamage(20);

	std::cout << std::endl << "---> scavT dies:" << std::endl;
	scavT.takeDamage(103);
	scavT.takeDamage(103);

	std::cout << std::endl << "---> scavT repaired:" << std::endl;
	scavT.beRepaired(100);
	scavT.beRepaired(100);

	std::cout << std::endl << "---> random:" << std::endl;
	scavT.challengeNewcomer("Monster");
	scavT.challengeNewcomer("Monster");
	scavT.challengeNewcomer("Monster");

	std::cout << std::endl << "/******************** NinjaTrap ********************\\" << std::endl << std::endl << "---> Create:" << std::endl;
	NinjaTrap	ninjaT("Ninja");
	NinjaTrap	enemy("Enemy");

	std::cout << std::endl << "---> ninjaShoebox:" << std::endl;
	ninjaT.ninjaShoebox(fragT);
	ninjaT.ninjaShoebox(scavT);
	ninjaT.ninjaShoebox(enemy);

	std::cout << std::endl << "/******************** SuperTrap ********************\\" << std::endl << std::endl << "---> Create:" << std::endl;
	SuperTrap	superT("Super");
	SuperTrap	superT_2("Super_2");

	std::cout << std::endl << "---> Attacks:" << std::endl;
	superT.rangedAttack("Enemy");
	superT.meleeAttack("Enemy");

	std::cout << std::endl << "---> NinjaShoebox:" << std::endl;
	superT.ninjaShoebox(fragT);
	superT.ninjaShoebox(scavT);
	superT.ninjaShoebox(ninjaT);

	std::cout << std::endl << "---> Random:" << std::endl;
	superT_2.vaulthunter_dot_exe("Enemy");
	superT_2.vaulthunter_dot_exe("Enemy");
	superT_2.vaulthunter_dot_exe("Enemy");
	superT_2.vaulthunter_dot_exe("Enemy");
	superT_2.vaulthunter_dot_exe("Enemy");

	return 0;
}
