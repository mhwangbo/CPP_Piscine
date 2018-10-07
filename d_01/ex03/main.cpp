/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:24:45 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 19:48:15 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <stdlib.h>

int		main(void)
{
	ZombieHorde tmp1 = ZombieHorde(10);
	ZombieHorde tmp2 = ZombieHorde(5);
	std::cout << "-------print 10 Zombies--------------" << std::endl;
	tmp1.announce();
	std::cout << "-------print 5 Zombies--------------" << std::endl;
	tmp2.announce();
	return (0);
}
