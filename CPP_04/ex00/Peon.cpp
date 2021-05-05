/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:52:07 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:06:18 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim() {}

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy) {}

Peon		&Peon::operator = (Peon const &op)
{
	Victim::operator=(op);
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void		Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}