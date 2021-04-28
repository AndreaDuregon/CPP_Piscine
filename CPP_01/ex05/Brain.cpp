/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 22:55:34 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/28 10:56:39 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()	{}

Brain::Brain(int q)
{
	this->qi = q;
}

Brain::~Brain()	{}

std::string	Brain::identify()
{
	std::stringstream address;
	address << this;
	return (address.str());
}

void	Brain::setQi(int x)
{
	this->qi = x;
}

int		Brain::getQi()
{
	return (this->qi);
}