/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 22:55:34 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 23:15:22 by aduregon         ###   ########.fr       */
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