/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:55:08 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 11:58:23 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	std::cout << "--------ShrubberyCreationForm---------" << std::endl;
	Bureaucrat a = Bureaucrat("a", 149);
	Bureaucrat b = Bureaucrat("b", 20);
	ShrubberyCreationForm SForm = ShrubberyCreationForm("Garden");
	SForm.setSigned();
	try
	{
		a.executeForm(SForm);
		SForm.execute(a);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		SForm.execute(b);
		std::cout << SForm;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------RobotomyRequestForm---------" << std::endl;
	Bureaucrat c = Bureaucrat("c", 149);
	Bureaucrat d = Bureaucrat("d", 20);
	RobotomyRequestForm RForm = RobotomyRequestForm("Jade");
	RForm.setSigned();
	try
	{
		RForm.execute(c);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		RForm.execute(d);
		std::cout << RForm;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------PresidentialPardonForm---------" << std::endl;
	Bureaucrat g = Bureaucrat("g", 100);
	Bureaucrat f = Bureaucrat("f", 4);
	PresidentialPardonForm PForm = PresidentialPardonForm("Mr");
	PForm.setSigned();
	try
	{
		PForm.execute(g);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		PForm.execute(f);
		std::cout << PForm;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
