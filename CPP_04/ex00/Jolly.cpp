/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Jolly.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:18:21 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:24:01 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Jolly.hpp"

Jolly::Jolly() : Victim() {}

Jolly::Jolly(std::string n) : Victim(n)
{
	std::cout << "Ladies and Gentlmen, " << this->name << ", the Joker!" << std::endl;
}

Jolly::Jolly(Jolly const &copy) : Victim(copy) {}

Jolly		&Jolly::operator = (Jolly const &op)
{
	Victim::operator=(op);
	return (*this);
}

Jolly::~Jolly()
{
	std::cout << "Jolly " << this->name << " has lost is head!" << std::endl;
}

void		Jolly::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a fat toad!" << std::endl;
}