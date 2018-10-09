/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:55:08 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 12:09:57 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	std::cout << "---------------Create Intern-----------------" << std::endl;

	Intern	intern;

	Form*	shrub;
	Form*	robot;
	Form*	presi;

	shrub = intern.makeForm("shrubbery creation", "Garden");
	robot = intern.makeForm("robotomy request", "Robot");
	presi = intern.makeForm("presidential pardon", "Presi");
	std::cout << "shrub, shrubbery targeted on " << shrub->getName() << std::endl;
	std::cout << "robot, robotomy targeted on " << robot->getName() << std::endl;
	std::cout << "presi, presidential targeted on " << presi->getName() << std::endl;

	delete (shrub);
	delete (robot);
	delete (presi);
	return (0);
}
