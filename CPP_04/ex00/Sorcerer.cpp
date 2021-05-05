/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:51:28 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 11:47:09 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string n, std::string t)
{
	this->name = n;
	this->title = t;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	this->name = copy.name;
	this->title = copy.title;
}

Sorcerer		&Sorcerer::operator = (Sorcerer const &op)
{
	this->name = op.getName();
	this->title = op.getTitle();
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName() const
{
	return (this->name);
}

std::string		Sorcerer::getTitle() const
{
	return (this->title);
}

void			Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream	&operator << (std::ostream &out, Sorcerer &s)
{
	out << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}