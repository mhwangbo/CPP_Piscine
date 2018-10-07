/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:07:48 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 12:41:43 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int 	main(void)
{
	std::cout << "----------------Create Character----------------" << std::endl;
	Character* zaz = new Character("Zaz");
	Character* jaj = new Character("Jaj");
	std::cout << *zaz;
	std::cout << *jaj;

	std::cout << "-------------------Create Enemy-----------------" << std::endl;
	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();

	std::cout << "-------------------Create Weapon-----------------" << std::endl;
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << "------------------------Equip--------------------" << std::endl;
	zaz->equip(pr);
	jaj->equip(pf);
	std::cout << *zaz;
	std::cout << *jaj;

	std::cout << "-----------------------Attack--------------------" << std::endl;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	zaz->attack(a);
	zaz->attack(a);
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	zaz->attack(a);
	zaz->attack(a);
	std::cout << *zaz;
	jaj->attack(b);
	zaz->attack(a);

	std::cout << "-----------------------Recover-------------------" << std::endl;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->attack(a);

	std::cout << "------------------------Kill---------------------" << std::endl;
	jaj->attack(b);

	return (0);
}
