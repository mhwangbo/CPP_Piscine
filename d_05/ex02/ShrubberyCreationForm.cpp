/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:13:34 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 11:25:57 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default", 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator =(ShrubberyCreationForm const & src) {
	if (this != &src)
		return *this;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string name = this->getName() + "_shrubbery";
	const char *fileName = name.c_str();
	if (executor.getGrade() <= 137 && this->getSigned() == true)
	{
		std::ofstream ofs(fileName);
		if (ofs)
		{
			ofs << "    O    " << std::endl << "   OOO   " << std::endl << "  OOOOO  " << std::endl << " OOOOOOO " << std::endl << "OOOOOOOOO" << std::endl << "    |    " << std::endl << " XXXXXXX " << std::endl;
		}
		ofs.close();
	}
	else if (this->getSigned() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
