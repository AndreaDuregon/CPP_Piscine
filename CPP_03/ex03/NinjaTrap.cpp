/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:13:56 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 16:04:29 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hitPoint = 60;
	this->maxHitPoint = 60;
	this->energyPoint = 120;
	this->maxEnergyPoint = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->level = 1;
}

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	std::srand (time(NULL));
	this->name = n;
	this->hitPoint = 60;
	this->maxHitPoint = 60;
	this->energyPoint = 120;
	this->maxEnergyPoint = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->level = 1;
	std::cout << "\033[1m\033[33m***** NINJATRAP *****\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = copy.name;
	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->level = copy.level;
}

NinjaTrap& NinjaTrap::operator = (NinjaTrap const &op)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = op.getName();
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "***** NINJATRAP DESTRUCTOR *****" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &f)
{
	std::cout << "\033[1m\033[37mNNJ4-T " << this->name << " elimina il profilo facebook di " << f.getName() << "... Cosí magari smette di dire cazzate...\033[0m" << std::endl;
}	

void	NinjaTrap::ninjaShoebox(ScavTrap &s)
{
	std::cout << "\033[1m\033[37mNNJ4-T " << this->name << " prende a pizze " << s.getName() << "... Non si sa mai che glie ne abbiano date poche da ragazzino...\033[0m" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &c)
{
	std::cout << "\033[1m\033[37mNNJ4-T " << this->name << " cerca di distrarre " << c.getName() << " con un sonaglietto... Un po di tregua...\033[0m" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &n)
{
	std::cout << "\033[1m\033[37mNNJ4-T " << this->name << " non ce la fa piû... Apre il cancello della comunità e lascia che " << n.getName() << " venga mangiato dagli zombie...\033[0m" << std::endl;
}