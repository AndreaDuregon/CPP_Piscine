/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:39:33 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/03 17:03:06 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>

class ScavTrap
{
private:
	int					hitPoint;
	static const int	maxHitPoint = 100;
	int					energyPoint;
	static const int	maxEnergyPoint = 50;
	int					level;
	std::string			name;
	static const int	meleeAttackDamage = 20;
	static const int	rangedAttackDamage = 15;
	static const int	armorDamageReduction = 3;
	void				attack1(std::string const &target);
	void				attack2(std::string const &target);
	void				attack3(std::string const &target);
	void				attack4(std::string const &target);
	void				attack5(std::string const &target);
public:
	ScavTrap(/* args */);
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	void		setHitPoint(int h);
	void 		setEnergyPoint(int e);
	void 		setLevel(int l);
	void 		setName(std::string n);
	int			getHitPoint();
	int			getMaxHitPoint();
	int			getEnergyPoint();
	int			getMaxEnergyPoint();
	int			getLevel();
	std::string	getName() const;
	int			getMeleeAttackDamage();
	int			getRangedAttackDamage();
	int			getArmorDamageReduction();
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};