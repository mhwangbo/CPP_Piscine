/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:54:46 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 19:24:42 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde {

public:
	ZombieHorde(int	N);
	~ZombieHorde(void);
	void		announce(void);
	std::string	randomChump(void);

private:
	int		_n;
	Zombie	*_zombies;
};

#endif
