/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:41:03 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 17:09:56 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 120;
	this->maxEnergyPoint = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1;
}

SuperTrap::SuperTrap(std::string n) : ClapTrap(n)
{
	std::srand (time(NULL));
	this->name = n;
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 120;
	this->maxEnergyPoint = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1;
	std::cout << "\033[1m\033[33m***** SUPERTRAP *****\033[0m" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = copy.name;
	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->level = copy.level;
}

SuperTrap& SuperTrap::operator = (SuperTrap const &op)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = op.getName();
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "\033[1m\033[31m***** SUPERTRAP DESTRUCTOR *****" << std::endl;
}

void		SuperTrap::rangedAttack(std::string const &target)
{
	this->FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const &target)
{
	this->NinjaTrap::meleeAttack(target);
}