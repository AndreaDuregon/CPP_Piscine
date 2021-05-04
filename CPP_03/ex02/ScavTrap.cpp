/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:39:25 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 12:40:21 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->level = 1;
}

ScavTrap::ScavTrap(std::string n)
{
	std::srand (time(NULL));
	this->name = n;
	this->hitPoint = 100;
	this->energyPoint = 50;
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

void		ScavTrap::setHitPoint(int h)
{
	this->hitPoint = h;
}

void		ScavTrap::setEnergyPoint(int e)
{
	this->energyPoint = e;
}

void		ScavTrap::setLevel(int l)
{
	this->level = l;
}

void		ScavTrap::setName(std::string n)
{
	this->name = n;
}

int			ScavTrap::getHitPoint()
{
	return (this->hitPoint);
}

int			ScavTrap::getMaxHitPoint()
{
	return (this->maxHitPoint);
}

int			ScavTrap::getEnergyPoint()
{
	return (this->energyPoint);
}

int			ScavTrap::getMaxEnergyPoint()
{
	return (this->maxEnergyPoint);
}

int			ScavTrap::getLevel()
{
	return (this->level);
}

std::string	ScavTrap::getName() const
{
	return (this->name);
}

int			ScavTrap::getMeleeAttackDamage()
{
	return (this->meleeAttackDamage);
}

int			ScavTrap::getRangedAttackDamage()
{
	return (this->rangedAttackDamage);
}

int			ScavTrap::getArmorDamageReduction()
{
	return (this->armorDamageReduction);
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << " colpisce uno " << target << " al piede, causando " << this->rangedAttackDamage << " danni e un buco sul piede!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << " colpisce uno " << target << " all'orecchio, causando " << this->meleeAttackDamage << " danni ma lo zombie non ha bisogno di sentire!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->armorDamageReduction;
	if ((int)amount < 0)
		std::cout << "SC4V-T: La barzelletta faceva ridere ma " << this->name << " non l'ha capita!" << std::endl;
	else
	{
		this->hitPoint -= amount;
		if (this->hitPoint < 0)
			this->hitPoint = 0;
		std::cout << "SC4V-T " << this->name << " se la prende ammale... Si dimentica " << amount << " barzellette poco divertenti! Glie ne restano: " << this->hitPoint;
		if (this->hitPoint == 0)
			std::cout << "! " << this->name << " ha finito le barzellette!";
		std::cout << std::endl;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint + (int)amount > this->getMaxHitPoint())
		this->hitPoint = 100;
	else
		this->hitPoint += amount;
	std::cout << "SC4V-T " << this->name << " ha trovato su facebook " << amount << " barzellette penose! Può sfinire Carl ancora per " << this->hitPoint << " volte!" << std::endl;
}

void				ScavTrap::attack1(std::string const &target)
{	
	std::cout << "SC4V-T " << this->name << ": 'Carl, sai come si chiama il prete che non si può toccare? Don touch... CARL! DON TOUCH!!!' - " << target << " è frastornato!" << std::endl;
}

void				ScavTrap::attack2(std::string const &target)
{	
	std::cout << "SC4V-T " << this->name << " Carl, sai perchè non ti devi mai fidare di un americano? Perché ti USA... CARL! TI USA!!!' - " << target << " è in difficoltà!" << std::endl;
}

void				ScavTrap::attack3(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << ": 'Carl, sai cosa c'è davanti alla torre di Giotto? La torre Digiannove... CARL! LA TORRE DIGIANNOVE!!!' - " << target << " è confuso!" << std::endl;
}

void				ScavTrap::attack4(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << ": 'Carl, sai dove vivevano i dinosauri? In via d'estinzione... CARL! IN VIA D'ESTINZIONE!!!' - " << target <<  " è sfinito!" << std::endl;
}

void				ScavTrap::attack5(std::string const &target)
{
	std::cout << "SC4V-T " << this->name << ": 'Carl, sai perché ci metto un minuto a fare colazione? Perchè soffro di eiacolazione precoce... CARL! EIACOLAZIONE PRECOCE!!!' - " << target <<  " impazisce!" << std::endl;
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