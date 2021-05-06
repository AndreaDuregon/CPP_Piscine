/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:36:14 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:27:51 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")	{}

Cure::Cure(Cure const &copy) : AMateria(copy)	{}

Cure		&Cure::operator = (Cure const &op)
{
	AMateria::operator=(op);
	return (*this);
}

Cure::~Cure()	{}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}