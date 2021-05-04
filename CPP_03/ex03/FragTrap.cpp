/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:27 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 16:00:58 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hitPoint = 0;
	this->maxHitPoint = 100;
	this->energyPoint = 0;
	this->maxEnergyPoint = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::srand (time(NULL));
	this->name = n;
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 100;
	this->maxEnergyPoint = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1;
	std::cout << "\033[1m\033[33m***** FRAGTRAP *****\033[0m" << std::endl;
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

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-T " << this->name << " colpisce uno " << target << " al piede, causando " << this->rangedAttackDamage << " danni e un buco sul piede!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-T " << this->name << " colpisce uno " << target << " all'orecchio, causando " << this->meleeAttackDamage << " danni ma lo zombie non ha bisogno di sentire!" << std::endl;
}

void				FragTrap::attack1(std::string const &target)
{	
	std::cout << "\033[1m\033[34mFR4G-T " << this->name << ": 'Carl, sai come si chiama il prete che non si può toccare? Don touch... CARL! DON TOUCH!!!' - " << target << " è frastornato!\033[0m" << std::endl;
}

void				FragTrap::attack2(std::string const &target)
{	
	std::cout << "\033[1m\033[34mFR4G-T " << this->name << ": 'Carl, sai perchè non ti devi mai fidare di un americano? Perché ti USA... CARL! TI USA!!!' - " << target << " è in difficoltà!\033[0m" << std::endl;
}

void				FragTrap::attack3(std::string const &target)
{
	std::cout << "\033[1m\033[34mFR4G-T " << this->name << ": 'Carl, sai cosa c'è davanti alla torre di Giotto? La torre Digiannove... CARL! LA TORRE DIGIANNOVE!!!' - " << target << " è confuso!\033[0m" << std::endl;
}

void				FragTrap::attack4(std::string const &target)
{
	std::cout << "\033[1m\033[34mFR4G-T " << this->name << ": 'Carl, sai dove vivevano i dinosauri? In via d'estinzione... CARL! IN VIA D'ESTINZIONE!!!' - " << target <<  " è sfinito!\033[0m" << std::endl;
}

void				FragTrap::attack5(std::string const &target)
{
	std::cout << "\033[1m\033[34mFR4G-T " << this->name << ": 'Carl, sai perché ci metto un minuto a fare colazione? Perchè soffro di eiacolazione precoce... CARL! EIACOLAZIONE PRECOCE!!!' - " << target <<  " impazzisce!\033[0m" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energyPoint < 25)
	{
		std::cout << "\033[1m\033[34mFR4G-T " << this->name << " ha finito le battute penose!\033[0m" << std::endl;
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


