/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:46:06 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 19:34:25 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() {}

Squad::Squad(Squad const &copy)
{
	this->num = copy.num;
	for(int i = 0; i < this->num; i++)
		this->sp[i] == copy.sp[i];
}

Squad	&Squad::operator = (Squad const &op)
{
	this->num = op.getCount();
	for(int i = 0; i < this->num; i++)
		this->sp[i] = op.getUnit(i);
	return (*this);
}

Squad::~Squad()
{
	delete [] this->sp;
}

int				Squad::getCount() const
{
	return (this->num);
}

ISpaceMarine	*Squad::getUnit(int i) const
{
	if (i >= this->num)
		return (NULL);
	return (this->sp[i]);
}

int				Squad::push(ISpaceMarine *s)
{
	this->sp[this->num] = s;
	this->num++;
	return (this->num);
}