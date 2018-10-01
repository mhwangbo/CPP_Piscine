#include "phone_book.hpp"

int	main(void)
{
	contact[8];
	int		contact_i;
	std::string	input;

	contact_i = 0;

	while (1)
	{
		std::count << "Please Enter your command: " << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			if (contact_i > 7)
				std::cout << "Memory is full" << std::endl;
			contact[contact_i++]::add_contact();
		}
		else if (input == "SEARCH")
		{
			for(int i = 0; i <= contact_i; i++)
				contact[i]::show_contact_list();
		}
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
