/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:37:06 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:25:40 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
	for (int i = 0; i < 4; i++)
		this->list[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource	&MateriaSource::operator = (MateriaSource const &op)
{
	if (this != &op)
	{
		this->count = op.count;
		for (int i = 0; i < 4; i++)
		{
			this->list[i] = op.list[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->list[i])
			delete this->list[i];
}

void			MateriaSource::learnMateria(AMateria *m)
{
	if (this->count > 3)
		return ;
	this->list[this->count] = m;
	this->count += 1;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < this->count; i++)
		if (this->list[i]->getType().compare(type) == 0)
			return (this->list[i]->clone());
	return (NULL);
}