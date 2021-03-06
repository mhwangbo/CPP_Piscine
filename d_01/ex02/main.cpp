/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:18 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 19:24:36 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int
main(void)
{
    Zombie      *random;
    Zombie      *notRd;
    ZombieEvent zombie_event;

    zombie_event.setZombieType("rotten");
    random = zombie_event.randomChump();
    random->announce();
    delete random;

    zombie_event.setZombieType("running");
    notRd = zombie_event.newZombie("Bad One");
    notRd->announce();
    delete notRd;
    return (0);
}
