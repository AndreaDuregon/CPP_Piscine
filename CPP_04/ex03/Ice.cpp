/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:35:55 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:27:43 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")	{}

Ice::Ice(Ice const &copy) : AMateria(copy)	{}

Ice		&Ice::operator = (Ice const &op)
{
	AMateria::operator=(op);
	return (*this);
}

Ice::~Ice() {}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}