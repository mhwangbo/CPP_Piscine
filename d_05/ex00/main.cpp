/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:55:08 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/08 17:57:55 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout << "----------Create machine----------" << std::endl;
	Bureaucrat machine = Bureaucrat("Tim", 1);
	std::cout << machine;

	try
	{
		std::cout << "----------add (5)----------" << std::endl;
		machine.addGrade(5);
		std::cout << machine;
		std::cout << "----------add (100)----------" << std::endl;
		machine.addGrade(100);
		std::cout << machine;
		std::cout << "----------add (100)----------" << std::endl;
		machine.addGrade(100);
		std::cout << machine;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "----------minus (5)----------" << std::endl;
		machine.addGrade(-5);
		std::cout << machine;
		std::cout << "----------minus (100)----------" << std::endl;
		machine.addGrade(-100);
		std::cout << machine;
		std::cout << "----------minus (100)----------" << std::endl;
		machine.addGrade(-100);
		std::cout << machine;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}




	return (0);
}
