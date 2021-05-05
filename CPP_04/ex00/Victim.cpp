/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:51:49 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:08:57 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string n)
{
	this->name = n;
	std::cout << "Some random victim called "<< this->name << " just appared!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	this->name = copy.name;
}

Victim		&Victim::operator = (Victim const &op)
{
	this->name = op.getName();
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::string		Victim::getName() const
{
	return (this->name);
}

void			Victim::getPolymorphed() const
{
	std::cout << this->name << "  has been turned into a cute little sheep!" << std::endl;
}

std::ostream	&operator << (std::ostream &out, Victim &v)
{
	out << "I'm " << v.getName() << "  and I like otters!" << std::endl;
	return (out);
}