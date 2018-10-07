/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:18:04 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/03 11:15:35 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	h;
	
	h.action("meleeAttack", "Enemy");
	h.action("rangedAttack", "Enemy");
	h.action("intimidatingShout", "Enemy");

	return (0);
}
