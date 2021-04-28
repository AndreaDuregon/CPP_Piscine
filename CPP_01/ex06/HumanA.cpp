/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:05:09 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/28 14:27:57 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : weapon(w)
{
	this->name = n;
}

HumanA::~HumanA()	{}

void		HumanA::attack()
{
	std::cout << this->name << " attacks with is " << this->weapon.getType() << std::endl;
}