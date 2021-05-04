/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:27:53 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 14:57:53 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h> 

class ClapTrap
{
protected:
	int					hitPoint;
	int					maxHitPoint;
	int					energyPoint;
	int					maxEnergyPoint;
	int					level;
	std::string			name;
	int					meleeAttackDamage;
	int					rangedAttackDamage;
	int					armorDamageReduction;
public:
	ClapTrap(/* args */);
	ClapTrap(std::string n);
	ClapTrap(ClapTrap const &copy);
	ClapTrap& operator = (ClapTrap const &op);
	~ClapTrap();
	void 		setName(std::string n);
	int			getMaxHitPoint();
	std::string	getName() const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};
