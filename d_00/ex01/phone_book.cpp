/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:51:10 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/01 20:35:49 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	contact::add_contact(void)
{
	std::cout << std::setw(18) << "First Name: ";
	getline(std::cin, first_name);
	std::cout << std::setw(18) << "Last Name: ";
	getline(std::cin, last_name);
	std::cout << std::setw(18) << "Nickname: ";
	getline(std::cin, nickname);
	std::cout << std::setw(18) << "Login: ";
	getline(std::cin, login);
	std::cout << std::setw(18) << "Postal Address: ";
	getline(std::cin, postal_address);
	std::cout << std::setw(18) << "Email Address: ";
	getline(std::cin, email_address);
	std::cout << std::setw(18) << "Phone Number: ";
	getline(std::cin, phone_number);
	std::cout << std::setw(18) << "Birthday: ";
	getline(std::cin, birthday);
	std::cout << std::setw(18) << "Favorite Meal: ";
	getline(std::cin, favorite_meal);
	std::cout << std::setw(18) << "Underwear Color: ";
	getline(std::cin, underwear_color);
	std::cout << std::setw(18) << "Darkest Secret: ";
	getline(std::cin, darkest_secret);
}

std::string		truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}

void	contact::show_contact_list(void)
{
	std::string	tmp = truncate(first_name, 10);
	std::cout << std::setw(10) << tmp << '|';
	tmp = truncate(last_name, 10);
	std::cout << std::setw(10) << tmp << '|';
	tmp = truncate(nickname, 10);
	std::cout << std::setw(10) << tmp << std::endl;
}

void	contact::show_contact_detail(void)
{
	std::cout << std::endl;
	std::cout << std::setw(18) << "First Name: " << first_name << std::endl;
	std::cout << std::setw(18) << "Last Name: " << last_name << std::endl;
	std::cout << std::setw(18) << "Nickname: " << nickname << std::endl;
	std::cout << std::setw(18) << "Login: " << login << std::endl;
	std::cout << std::setw(18) << "Postal Address: " << postal_address << std::endl;
	std::cout << std::setw(18) << "Email Address: " << email_address << std::endl;
	std::cout << std::setw(18) << "Phone Number: " << phone_number << std::endl;
	std::cout << std::setw(18) << "Birthday: " << birthday << std::endl;
	std::cout << std::setw(18) << "Favorite Meal: " << favorite_meal << std::endl;
	std::cout << std::setw(18) << "Underwear Color: " << underwear_color << std::endl;
	std::cout << std::setw(18) << "Darkest Secret: " << darkest_secret << std::endl;
	std::cout << std::endl;
}
