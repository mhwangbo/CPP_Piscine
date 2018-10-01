#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class	contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

	public:
		int	add_contact(void);
		void	show_contact_list(void);
		void	show_contact_detail(int i);
};

#endif
