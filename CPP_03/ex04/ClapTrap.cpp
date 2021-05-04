/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:28:08 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 16:01:58 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	std::cout << "\033[33m***** CLAPTRAP *****\033[0m" << std::endl;
	this->name = "";
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 50;
	this->maxEnergyPoint = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->level = 1;
}

ClapTrap::ClapTrap(std::string n)
{
	std::srand (time(NULL));
	this->name = n;
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 50;
	this->maxEnergyPoint = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->level = 1;
	std::cout << "\033[1m\033[33m***** CLAPTRAP *****\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "***** CLAPTRAP DESTRUCTOR *****" << std::endl;
}

void		ClapTrap::setName(std::string n)
{
	this->name = n;
}

int			ClapTrap::getMaxHitPoint()
{
	return (this->maxHitPoint);
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->armorDamageReduction;
	if ((int)amount < 0)
		std::cout << "CL4P-T: La barzelletta faceva ridere ma " << this->name << " non l'ha capita!" << std::endl;
	else
	{
		this->hitPoint -= amount;
		if (this->hitPoint < 0)
			this->hitPoint = 0;
		std::cout << "CL4P-T " << this->name << " se la prende ammale... Si dimentica " << amount << " barzellette poco divertenti! Glie ne restano: " << this->hitPoint;
		if (this->hitPoint == 0)
			std::cout << "! " << this->name << " ha finito le barzellette!";
		std::cout << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint + (int)amount > this->getMaxHitPoint())
		this->hitPoint = 100;
	else
		this->hitPoint += amount;
	std::cout << "CL4P-T " << this->name << " ha trovato su facebook " << amount << " barzellette penose! Può sfinire Carl ancora per " << this->hitPoint << " volte!" << std::endl;
}