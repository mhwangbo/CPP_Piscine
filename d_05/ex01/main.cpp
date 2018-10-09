/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:55:08 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/08 20:52:33 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

	std::cout << "--------------Create Form------------" << std::endl;
	Form form = Form("Form", 80, 20);
	std::cout << form;
	try
	{
		machine.signForm(form);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form;
	try
	{
		machine.signForm(form);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------Error Case-------------" << std::endl;
	Bureaucrat machine2 = Bureaucrat("Tom", 100);
	Form form2 = Form("Form2", 80, 20);
	std::cout << machine2;
	std::cout << form2;
	try
	{
		machine2.signForm(form2);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form2;

	return (0);
}
