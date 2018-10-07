/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 23:52:12 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/03 00:43:15 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	find_and_replace(std::string filename, std::string str1, std::string str2)
{
	std::ifstream	file_in(filename);
	std::ofstream	file_out(filename + ".replace");
	std::string		line;

	if (!file_in || !file_out)
	{
		std::cout << "Error reading files!" << std::endl;
		return ;
	}
	while (getline(file_in, line))
	{
		std::size_t pos;
		while ((pos = line.find(str1)) != std::string::npos)
			line.replace(pos, str1.length(), str2);
		file_out << line << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Usage: ./replace file_name string1 string2" << std::endl;
	else
		find_and_replace(av[1], av[2], av[3]);
	return (0);
}
