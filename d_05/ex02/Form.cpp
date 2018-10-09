/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:52:17 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/09 00:18:12 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signGrade(80), _execGrade(20), _signed(false) {
	return ;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false) {
	return ;
}

Form::~Form() {
	return ;
}

Form::Form(Form const & src): _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade) {

	*this = src;
}

Form & Form::operator =(Form const & src) {
	_signed = src.getSigned();
	return (*this);
}

std::string	Form::getName() const {
	return (_name);
}

std::string	Form::getType() const {
	return (_name);
}

int			Form::getSignedGrade() const {
	return (_signGrade);
}

int			Form::getExecGrade() const {
	return (_execGrade);
}

bool		Form::getSigned() const {
	return (_signed);
}

void	Form::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->_signGrade)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->_signed == 1)
		std::cout << this->_name << " cannot sign " << this->_name << " becuase the form is already signed." << std::endl;
	else
		std::cout << b.getName() << " signs " << this->_name << "." << std::endl;
		this->setSigned();
}

void	Form::setSigned() {
	this->_signed = true;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) {
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &		Form::GradeTooHighException::operator=(GradeTooHighException const &) {
	return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Error : Form - too high");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) {
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &		Form::GradeTooLowException::operator=(GradeTooLowException const &) {
	return *this;
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Error : Form - too low");
}

std::ostream &	operator<<(std::ostream & out, Form const & src) {

	out << src.getName() << ", Form sign require : grade " << src.getSignedGrade() << ", exec require : " << src.getExecGrade() << ", signed status : " << src.getSigned() << std::endl;
	return out;
}
