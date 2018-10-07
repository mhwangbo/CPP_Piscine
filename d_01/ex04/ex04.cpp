/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:51:56 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 20:01:53 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*pointer = &str;
	std::string	&reference = str; 

	std::cout << str << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;

	return (0);
}
