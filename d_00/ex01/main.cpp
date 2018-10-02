/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:51:55 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/01 20:32:57 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int		input_number(int contact_i)
{
	int	num;

	std::cout << "Choose and index: ";
	std::cin >> num;
	while (std::cin.fail() || num >= contact_i)
	{
		std::cout << "Invalid Input or Out of Range! Choose an index: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> num;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (num);
}


void	search(contact *people, int contact_i)
{
	std::cout << std::setw(10) << "Idx" << '|' << std::setw(10) << "First Name" << '|' << std::setw(10) << "Last Name" << '|' << std::setw(10) << "Nickname" << std::endl;
	for(int i = 0; i < contact_i; i++)
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		people[i].show_contact_list();
	}
	people[input_number(contact_i)].show_contact_detail();
}

int	main(void)
{
	contact		people[8];
	int			contact_i;
	std::string	input;

	contact_i = 0;

	while (1)
	{
		std::cout << "Please Enter your command: ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			if (contact_i > 7)
				std::cout << "Memory is full" << std::endl;
			else 
				people[contact_i++].add_contact();
		}
		else if (input == "SEARCH" && contact_i == 0)
			std::cout << "Contact is empty. You need some friend :(" << std::endl;
		else if (input == "SEARCH")
			search(people, contact_i);
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
