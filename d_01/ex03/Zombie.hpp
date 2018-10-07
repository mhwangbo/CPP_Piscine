/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:05:31 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 19:41:20 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void	setZombieType(std::string type);
	void	setZombieName(std::string name);
	void	announce(void);

private:
	std::string	_name;
	std::string	_type;
};

#endif
