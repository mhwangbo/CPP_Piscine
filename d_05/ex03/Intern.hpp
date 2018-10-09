/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:57:00 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 12:09:56 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{

public:
	Intern();
	Intern(Intern const & src);
	~Intern();
	Intern & operator=( Intern const &);

	Form*	makeForm(std::string form, std::string name);
};

#endif
