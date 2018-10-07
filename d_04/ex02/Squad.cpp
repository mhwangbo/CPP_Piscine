/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <mhwangbo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:22:40 by mhwangbo          #+#    #+#             */
/*   Updated: 2018/10/05 16:38:53 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void)
{
	_squad = NULL;
	_number = 0;
}

Squad::Squad(Squad const & copy)
{
	t_squad	*squad_1;
	t_squad	*squad_2;

	squad_1 = _squad;
	squad_2 = copy._squad;
	_squad = NULL;
	while (squad_2)
	{
		if (_squad == NULL)
		{
			_squad = new(t_squad);
			_squad->marines = squad_2->marines;
			_squad->next = NULL;
		}
		else
		{
			squad_1 = _squad;
			while (squad_1->next)
				squad_1 = squad_1->next;
			squad_1->next = new(t_squad);
			squad_1->next->marines = squad_2->marines;
			squad_1->next->next = NULL;
		}
		squad_2 = squad_2->next;
	}
	this->_number = copy._number;
}

Squad::~Squad(void)
{
	t_squad	*tmp;

	while (_squad)
	{
		tmp = _squad;
		delete (_squad->marines);
		_squad = _squad->next;
		delete (tmp);
	}
}

int		Squad::getCount() const
{
	return (this->_number);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_squad	*tmp;

	tmp = _squad;
	while (n != 0 && tmp)
	{
		tmp = tmp->next;
		n--;
	}
	return (tmp->marines);
}

int				Squad::push(ISpaceMarine* marine)
{
	t_squad	*tmp;

	if (marine == NULL)
		return (_number);
	if (_squad == NULL)
	{
		_squad = new(t_squad);
		_squad->marines = marine;
		_squad->next = NULL;
	}
	else
	{
		tmp = _squad;
		while (tmp->next)
		{
			if (tmp->marines == marine)
				return (_number);
			tmp = tmp->next;
		}
		tmp->next = new(t_squad);
		tmp->next->marines = marine;
		tmp->next->next = NULL;
	}
	_number++;
	return (_number);
}

Squad &	Squad::operator=(Squad const & copy)
{
	t_squad	*squad_1;
	t_squad	*squad_2;

    squad_1 = _squad;
    while (squad_1)
		delete squad_1->marines;

    if (this != &copy)
		_number = copy._number;

	squad_1 = _squad;
	squad_2 = copy._squad;
	_squad = NULL;
	while (squad_2)
	{
		if (_squad == NULL)
		{
			_squad = new(t_squad);
			_squad->marines = squad_2->marines;
			_squad->next = NULL;
		}
		else
		{
			squad_1 = _squad;
			while (squad_1->next)
				squad_1 = squad_1->next;
			squad_1->next = new(t_squad);
			squad_1->next->marines = squad_2->marines;
			squad_1->next->next = NULL;
		}
		squad_2 = squad_2->next;
	}
    return (*this);
}
