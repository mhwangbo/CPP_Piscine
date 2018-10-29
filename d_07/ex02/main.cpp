/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 23:07:58 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/10 23:23:51 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

int	main()
{
	unsigned int	n = 10;
	Array<int> arr = Array<int>(n);

	for(int	i = 0; i < 10; i++)
		arr[i] = i;
	try
	{
		for(int i = 0; i <= 10; i++)
			std::cout << arr[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << "Size: " << arr.size() << std::endl;

	Array<int> cpy = Array<int>(arr);
	cpy[0] = 1000;
	for (int i = 0; i < 10; i++)
		std::cout << cpy[i] << std::endl;
	
	cpy = arr;
	for (int i = 0; i < 10; i++)
		std::cout << cpy[i] << std::endl;
	std::cout << "Size: " << arr.size() << std::endl;
	
	n = 5;
	Array<char> crr = Array<char>(n);

	for (int i = 0; i < 5; i++)
		crr[i] = 'a' + i;
	for (int i = 0; i < 5; i++)
		std::cout << crr[i] << std::endl;
	std::cout << "Size: " << crr.size() << std::endl;
	return (0);
}
