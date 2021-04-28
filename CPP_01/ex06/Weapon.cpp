/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:04:47 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/28 12:52:21 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()	{}

Weapon::Weapon(std::string t)
{
	this->type = t;
}

Weapon::~Weapon()	{}

void				Weapon::setType(std::string s)
{
	this->type = s;
}

const std::string	&Weapon::getType()
{
	return (this->type);
}