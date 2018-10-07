/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:07:53 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:13 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent {

public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void		setZombieType(std::string type);
	std::string	getZombieType(void);
	Zombie		*newZombie(std::string name);
	Zombie		*randomChump(void);

private:
	std::string	_type;

};

#endif
