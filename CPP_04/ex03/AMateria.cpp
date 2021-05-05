/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:35:35 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 00:10:40 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()	{}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	this->xp = 0;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria	&AMateria::operator = (AMateria const &op)
{
	this->type = op.getType();
	this->xp = op.getXP();
	return (*this);
}

AMateria::~AMateria()	{}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

unsigned int		AMateria::getXP() const
{
	return (this->xp);
}

void				AMateria::use(ICharacter& target)
{
	void(target);
	this->xp += 10;
}