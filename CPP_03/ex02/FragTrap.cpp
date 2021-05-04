/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:27 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 12:40:25 by aduregon         ###   ########.fr       */
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
	std::srand (time(NULL));
	this->name = n;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->level = 1;
	std::cout << "\033[33m***** FRAGTRAP *****\033[0m" << std::endl;
	std::cout << "FR4G-T " << this->name << " si sveglia... È pronto per rovinare la giornata di Carl!" << std::endl;
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
	std::cout << "***** FRAGTRAP DESTRUCTOR *****" << std::endl;
}

void		FragTrap::setHitPoint(int h)
{
	this->hitPoint = h;
}

void		FragTrap::setEnergyPoint(int e)
{
	this->energyPoint = e;
}

void		FragTrap::setLevel(int l)
{
	this->level = l;
}

void		FragTrap::setName(std::string n)
{
	this->name = n;
}

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
	std::cout << "FR4G-T " << this->name << " colpisce uno " << target << " al piede, causando " << this->rangedAttackDamage << " danni e un buco sul piede!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-T " << this->name << " colpisce uno " << target << " all'orecchio, causando " << this->meleeAttackDamage << " danni ma lo zombie non ha bisogno di sentire!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	amount -= this->armorDamageReduction;
	if ((int)amount < 0)
		std::cout << "FR4G-T: La barzelletta faceva ridere ma " << this->name << " non l'ha capita!" << std::endl;
	else
	{
		this->hitPoint -= amount;
		if (this->hitPoint < 0)
			this->hitPoint = 0;
		std::cout << "FR4G-T " << this->name << " se la prende ammale... Si dimentica " << amount << " barzellette poco divertenti! Glie ne restano: " << this->hitPoint;
		if (this->hitPoint == 0)
			std::cout << "! " << this->name << " ha finito le barzellette!";
		std::cout << std::endl;
	}
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint + (int)amount > this->getMaxHitPoint())
		this->hitPoint = 100;
	else
		this->hitPoint += amount;
	std::cout << "FR4G-T " << this->name << " ha trovato su facebook " << amount << " barzellette penose! Può sfinire Carl ancora per " << this->hitPoint << " volte!" << std::endl;
}

void				FragTrap::attack1(std::string const &target)
{	
	std::cout << "\033[36mFR4G-T " << this->name << ": 'Carl, sai come si chiama il prete che non si può toccare? Don touch... CARL! DON TOUCH!!!' - " << target << " è frastornato!\033[0m" << std::endl;
}

void				FragTrap::attack2(std::string const &target)
{	
	std::cout << "\033[36mFR4G-T " << this->name << ": 'Carl, sai perchè non ti devi mai fidare di un americano? Perché ti USA... CARL! TI USA!!!' - " << target << " è in difficoltà!\033[0m" << std::endl;
}

void				FragTrap::attack3(std::string const &target)
{
	std::cout << "\033[36mFR4G-T " << this->name << ": 'Carl, sai cosa c'è davanti alla torre di Giotto? La torre Digiannove... CARL! LA TORRE DIGIANNOVE!!!' - " << target << " è confuso!\033[0m" << std::endl;
}

void				FragTrap::attack4(std::string const &target)
{
	std::cout << "\033[36mFR4G-T " << this->name << ": 'Carl, sai dove vivevano i dinosauri? In via d'estinzione... CARL! IN VIA D'ESTINZIONE!!!' - " << target <<  " è sfinito!\033[0m" << std::endl;
}

void				FragTrap::attack5(std::string const &target)
{
	std::cout << "\033[36mFR4G-T " << this->name << ": 'Carl, sai perché ci metto un minuto a fare colazione? Perchè soffro di eiacolazione precoce... CARL! EIACOLAZIONE PRECOCE!!!' - " << target <<  " impazzisce!\033[0m" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energyPoint < 25)
	{
		std::cout << "\033[36mFR4G-T " << this->name << " ha finito le battute penose!\033[0m" << std::endl;
	}
	else
	{
		this->energyPoint -= 25;
		int attacco = rand() % 5;
		if (attacco == 0)
			this->attack1(target);
		else if (attacco == 1)
			this->attack2(target);
		else if (attacco == 2)
			this->attack3(target);
		else if (attacco == 3)
			this->attack4(target);
		else if (attacco == 4)
			this->attack5(target);
	}
}


