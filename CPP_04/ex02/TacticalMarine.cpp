/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:46:38 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 23:26:52 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
	*this = copy;
}

TacticalMarine	&TacticalMarine::operator = (TacticalMarine const &op)
{
	(void) op;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine	*TacticalMarine::clone() const
{
	return new TacticalMarine();
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}			