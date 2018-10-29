/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 09:52:54 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/11 22:04:54 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	std::list<int>	lst1;

	lst1.push_back(4);
	lst1.push_back(14);
	lst1.push_back(26);
	lst1.push_back(18);
	lst1.push_back(42);

	try {
		std::cout << easyfind(lst1, 18) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(lst1, 5) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}
