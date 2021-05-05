/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:47:18 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 23:26:21 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
	*this = copy;
}

AssaultTerminator	&AssaultTerminator::operator = (AssaultTerminator const &op)
{
	(void) op;
    return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator	*AssaultTerminator::clone() const
{
	return new AssaultTerminator();
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}			