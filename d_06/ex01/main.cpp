/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 13:10:20 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 14:06:29 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

struct Data {
	std::string s1;
	int			n;
	std::string	s2;
};

void *	serialize(void)
{
	char	*s = new char[20];
	char	c[62];
	int		i;

	for (i = 0; i < 10; i++)
		c[i] = i + '0';
	for (i = 10; i < 36; i++)
		c[i] = i - 10 + 'a';
	for (i = 36; i < 62; i++)
		c[i] = i -36 + 'A';

	for (i = 0; i < 8; i++)
	{
		s[i] = c[rand() % 62];
	}
	for (i = 8; i < 12; i++)
		s[i] = c[rand() % 10];
	for (i = 12; i < 20; i++)
	{
		s[i] = c[rand() % 62];
	}
	return (reinterpret_cast<void*>(s));
}

Data * deserialize(void * raw)
{
	Data *data = new Data;
	char *tmp = new char[9];
	char *input = reinterpret_cast<char*>(raw);

	data->s1 = strncpy(tmp, input, 8);
	data->n = input[8];
	data->s2 = strncpy(tmp, input + 11, 8);
	return (data);
}

int		main(void)
{
	srand(time(NULL));

	void	*serial = serialize();
	Data	*deserial = deserialize(serial);

 	std::cout << "Address      : " << serial << std::endl;
	std::cout << "Deserialized : " << std::endl;
	std::cout << deserial->s1 << std::endl;
	std::cout << deserial->n << std::endl;
	std::cout << deserial->s2 << std::endl;
	return (0);
}
