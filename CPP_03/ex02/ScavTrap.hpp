/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:39:33 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 14:46:52 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(/* args */);
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &copy);
	ScavTrap& operator = (ScavTrap const &op);
	~ScavTrap();
	void		challengeNewcomer(std::string const & target);
};