/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:05:59 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/11 23:10:23 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &);
		~Span();
		Span & operator=(Span const &);

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

	private:
		std::vector<int>	_vector;
};

#endif
