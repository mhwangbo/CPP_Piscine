/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:29:15 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 11:46:15 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Default", 72, 45) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator =(RobotomyRequestForm const & src) {
	if (this != &src)
		return *this;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	if (executor.getGrade() <= 45 && this->getSigned() == true)
	{
		std::cout << "drilllllllllllll" << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->getName() << " has been robotomized successfully." << std::endl;
		else
			std::cout << "It's a failure." << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
