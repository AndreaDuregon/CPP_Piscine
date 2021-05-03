/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/03 16:37:29 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h> 

class FragTrap
{
private:
	int					hitPoint;
	static const int	maxHitPoint = 100;
	int					energyPoint;
	static const int	maxEnergyPoint = 100;
	int					level;
	std::string			name;
	static const int	meleeAttackDamage = 30;
	static const int	rangedAttackDamage = 20;
	static const int	armorDamageReduction = 5;
	void				attack1(std::string const &target);
	void				attack2(std::string const &target);
	void				attack3(std::string const &target);
	void				attack4(std::string const &target);
	void				attack5(std::string const &target);
public:
	FragTrap(/* args */);
	FragTrap(std::string n);
	FragTrap(FragTrap const &copy);
	FragTrap& operator = (FragTrap const &op);
	~FragTrap();
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
	void		vaulthunter_dot_exe(std::string const & target);
};
