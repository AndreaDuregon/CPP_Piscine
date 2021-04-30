/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:27 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 18:53:28 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->level = 1;
}

FragTrap::FragTrap(std::string n)
{
	std::cout << "Name constructor called" << std::endl;
	this->name = n;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->level = 1;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = copy.name;
	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->level = copy.level;
}

FragTrap& FragTrap::operator = (FragTrap const &op)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = op.getName();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void		FragTrap::setHitPoint(int h)
{
	this->hitPoint = h;
}

// void		FragTrap::setMaxHitPoint(int m) cosnt
// {
// 	this->maxHitPoint = m;
// }

void		FragTrap::setEnergyPoint(int e)
{
	this->energyPoint = e;
}

// void		FragTrap::setMaxEnergyPoint(int e)
// {
// 	this->maxEnergyPoint = e;
// }

void		FragTrap::setLevel(int l)
{
	this->level = l;
}

void		FragTrap::setName(std::string n)
{
	this->name = n;
}

// void		FragTrap::setMeleeAttackDamage(int m)
// {
// 	this->meleeAttackDamage = m;
// }

// void		FragTrap::setRangedAttackDamage(int r)
// {
// 	this->rangedAttackDamage = r;
// }

// void		FragTrap::setArmorDamageReduction(int a)
// {
// 	this->armorDamageReduction = a;
// }

int			FragTrap::getHitPoint()
{
	return (this->hitPoint);
}

int			FragTrap::getMaxHitPoint()
{
	return (this->maxHitPoint);
}

int			FragTrap::getEnergyPoint()
{
	return (this->energyPoint);
}

int			FragTrap::getMaxEnergyPoint()
{
	return (this->maxEnergyPoint);
}

int			FragTrap::getLevel()
{
	return (this->level);
}

std::string	FragTrap::getName() const
{
	return (this->name);
}

int			FragTrap::getMeleeAttackDamage()
{
	return (this->meleeAttackDamage);
}

int			FragTrap::getRangedAttackDamage()
{
	return (this->rangedAttackDamage);
}

int			FragTrap::getArmorDamageReduction()
{
	return (this->armorDamageReduction);
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-T " << this->name << " attack " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-T " << this->name << " attack " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	amount -= this->armorDamageReduction;
	if ((int)amount < 0)
		std::cout << this->name << " takes no damage!" << std::endl;
	else
	{
		this->hitPoint -= amount;
		if (this->hitPoint < 0)
			this->hitPoint = 0;
		std::cout << "FR4G-T " << this->name << " take " << amount << " points of damage! Residual life points: " << this->hitPoint;
		if (this->hitPoint == 0)
			std::cout << this->name << " is dead!";
		std::cout << std::endl;
	}
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint + (int)amount > this->getMaxHitPoint())
		this->hitPoint = 100;
	else
		this->hitPoint += amount;
	std::cout << "FR4G-T " << this->name << " is been repaired for " << amount << " life points! Residual life points: " << this->hitPoint << std::endl;
}

void				FragTrap::attack1(std::string const &target)
{
	if (this->energyPoint - 25 < 0)
		std::cout << "FR4G-T " << this->name << " can't attack!" << std::endl;
	else
		std::cout << "FR4G-T " << this->name << " attack1 to " << target << std::endl;
}

void				FragTrap::attack2(std::string const &target)
{
	if (this->energyPoint - 25 < 0)
		std::cout << "FR4G-T " << this->name << " can't attack!" << std::endl;
	else
		std::cout << "FR4G-T " << this->name << " attack2 to " << target << std::endl;
}

void				FragTrap::attack3(std::string const &target)
{
	if (this->energyPoint - 25 < 0)
		std::cout << "FR4G-T " << this->name << " can't attack!" << std::endl;
	else
		std::cout << "FR4G-T " << this->name << " attack3 to " << target << std::endl;
}

void				FragTrap::attack4(std::string const &target)
{
	if (this->energyPoint - 25 < 0)
		std::cout << "FR4G-T " << this->name << " can't attack!" << std::endl;
	else
		std::cout << "FR4G-T " << this->name << " attack4 to " << target << std::endl;
}

void				FragTrap::attack5(std::string const &target)
{
	if (this->energyPoint - 25 < 0)
		std::cout << "FR4G-T " << this->name << " can't attack!" << std::endl;
	else
		std::cout << "FR4G-T " << this->name << " attack5 to " << target << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		num;

	srand(time(NULL));
	num = rand() % 5;
	if (num == 0)
		this->attack1(target);
	else if (num == 1)
		this->attack2(target);
	else if (num == 2)
		this->attack3(target);
	else if (num == 3)
		this->attack4(target);
	else if (num == 4)
		this->attack5(target);
}