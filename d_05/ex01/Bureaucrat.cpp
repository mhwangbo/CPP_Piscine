/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:40:10 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/08 20:39:13 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	return ;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & src) {
	_grade = src.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName() const {
	return (_name);
}

int			Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::signForm(Form & form) {
	if (this->_grade <= form.getSignedGrade() && form.getSigned() == 0) {
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.setSigned();
	}
	else if (this->_grade > form.getSignedGrade()) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because grade is too low." << std::endl;
	}
	else if (form.getSigned() == 1) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because the form is already signed." << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & src) {

	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return o;
}

void		Bureaucrat::addGrade(int add) {
	if ((this->_grade + add) < 1)
		throw Bureaucrat::GradeTooHighException();
	else if ((this->_grade + add) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += add;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) {
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooHighException &		Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &) {
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("ERROR : too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) {
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

Bureaucrat::GradeTooLowException &		Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &) {
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("ERROR : too low");
}
