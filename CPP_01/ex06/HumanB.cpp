/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:05:41 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/28 14:53:49 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	this->name = n;
}

HumanB::~HumanB()	{}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

void		HumanB::attack()
{
	std::cout << this->name << " attacks with is " << this->weapon->getType() << std::endl;
}