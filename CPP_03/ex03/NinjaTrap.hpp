/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:13:43 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 15:54:54 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	
public:
	NinjaTrap(/* args */);
	NinjaTrap(std::string n);
	NinjaTrap(NinjaTrap const &copy);
	NinjaTrap& operator = (NinjaTrap const &op);
	~NinjaTrap();
	void	ninjaShoebox(FragTrap &f);
	void	ninjaShoebox(ScavTrap &s);
	void	ninjaShoebox(ClapTrap &c);
	void	ninjaShoebox(NinjaTrap &n);
};