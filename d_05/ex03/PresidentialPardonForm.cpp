/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:40:14 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 11:46:01 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default", 25, 5) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator =(PresidentialPardonForm const & src) {
	if (this != &src)
		return *this;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= 5 && this->getSigned() == true)
		std::cout << this->getName() << " has been pardonned by Zafod Beeblebrox." << std::endl;
	else if (this->getSigned() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
