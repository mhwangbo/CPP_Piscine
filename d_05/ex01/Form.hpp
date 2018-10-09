/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:58:36 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/08 20:47:16 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class	Form
{
	public:
		Form();
		Form(std::string, int, int);
		~Form();
		Form(Form const & src);
		Form & operator =(Form const & src);

		std::string	getName() const;
		int			getSignedGrade() const;
		int			getExecGrade() const;
		bool		getSigned() const;
		void		beSigned(Bureaucrat &);
		void		setSigned();
		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const &);
				~GradeTooHighException() throw();
				GradeTooHighException &	operator=(GradeTooHighException const &);
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const &);
				~GradeTooLowException() throw();
				GradeTooLowException & operator=(GradeTooLowException const &);

				virtual const char* what() const throw();
		};

	private:
		std::string	const	_name;
		int const			_signGrade;
		int const			_execGrade;
		bool				_signed;
};

std::ostream & operator <<(std::ostream &, Form const &);

#endif
