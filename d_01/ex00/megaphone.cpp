#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		for (int i = 0; av[1][i]; i++)
			av[1][i] = toupper(av[1][i]);
		std::cout << av[1];
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;

	return (0);
}
