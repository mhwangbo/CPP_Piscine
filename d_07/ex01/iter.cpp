/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:39:28 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/10 22:20:00 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *arr, unsigned int n, void (*f)(T))
{
	for (unsigned int i = 0; i < n; i++)
	{
		f(arr[i]);
	}
}

template <typename T>
void	putchar(T c) {
	std::cout << c << std::endl;
}

int		main()
{
	std::string	arr[] = {"aaa", "bbb", "ccc"};
	char		c[] = {'a', 'b', 'c'};
	int			a[] = {1, 2, 3, 4, 5};

	::iter(arr, 3, ::putchar);
	::iter(c, 3, ::putchar);
	::iter(a, 5, ::putchar);

	return 0;
}
