/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:40:55 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 17:00:13 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(/* args */);
	SuperTrap(std::string n);
	SuperTrap(SuperTrap const &copy);
	SuperTrap& operator = (SuperTrap const &op);
	~SuperTrap();
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
};

