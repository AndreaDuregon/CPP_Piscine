/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:36:38 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:30:54 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()	{}

Character::Character(std::string name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(Character const &copy)
{
	this->name = copy.name;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = copy.inventory[i];
}

Character	&Character::operator = (Character const &op)
{
	this->name = op.getName();
	for(int i = 0; i < 4; i++)
		this->inventory[i] = op.inventory[i];
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx > 3)
		return ;
	if (this->inventory[idx])
		this->inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx > 3)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}

