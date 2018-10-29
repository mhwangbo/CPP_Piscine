/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 23:27:53 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/11 23:40:45 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
		typedef	std::stack<T>	base;
	
	public:
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(MutantStack const & rhs) : base(rhs) {};
		typedef typename base::container_type::iterator iterator;
		using	base::operator=;

		iterator	begin() {return (base::c.begin());};
		iterator	end() {return (base::c.end());};
};

#endif
