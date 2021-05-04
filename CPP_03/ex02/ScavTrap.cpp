/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:39:25 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 14:58:58 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
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

ScavTrap::ScavTrap(std::string n)
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
	std::cout << "\033[33m***** SCAVTRAP *****\033[0m" << std::endl;
	std::cout << "SC4V-T " << this->name << " si sveglia... Sta cercando di ricordare cosa dice una foglia di basilico ad un'altra foglia di basilico*!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = copy.name;
	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->level = copy.level;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &op)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = op.getName();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "***** SCAVTRAP DESTRUCTOR *****" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << " colpisce uno " << target << " al piede, causando " << this->rangedAttackDamage << " danni e un buco sul piede!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << " colpisce uno " << target << " all'orecchio, causando " << this->meleeAttackDamage << " danni ma lo zombie non ha bisogno di sentire!" << std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenge[5] = {": 'Carl, cosa dice una foglia di basilico ad un'altra foglia prima di andarsene? Torno pesto... CARL! TORNO PESTO!!!' - ",
								": 'Carl, sai cosa dice il comandante al suo esercito zombie? Forza, marciamo... CARL! MARCIAMO!!!' - ",
								": 'Carl, sai qual'è lo snack preferito dei falegnami? Il Tronky... CARL! IL TRONKY!!!' - ",
								": 'Carl, il vento è stato multato... Per guida in stato di brezza... CARL! IN STATO DI BREZZA!!!' - ",
								": 'Carl, sai perchè gli iraniani ce l'hanno con il vento? Perché gli sbatte le persiane... CARL! LE PERSIANE!!!' - "};
	std::string damage[5] = {	" è frastornato!",
								" è in difficoltà!",
								" è confuso!",
								" è sfinito!",
								" impazzisce!"};

	std::cout << "\033[35mSC4V-T " << this->name << challenge[rand() % 5] << target << damage[rand() % 5] << "\033[0m" << std::endl;
}