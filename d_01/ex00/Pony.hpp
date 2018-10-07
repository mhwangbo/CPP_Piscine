/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:02:12 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/02 21:26:45 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony {

public:
	std::string	getName(void);
	std::string	getColor(void);
	std::string	getBreed(void);
	int			getAge(void);
	int			getHeight(void);

	void		setName(std::string name);
	void		setColor(std::string color);
	void		setBreed(std::string breed);
	void		setAge(int age);
	void		setHeight(int height);

private:
	std::string _name;
	std::string	_color;
	std::string _breed;
	int			_age;
	int			_height;

};

#endif
