/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 22:55:48 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/29 12:34:00 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()	{}

Human::~Human()	{}

Brain	&Human::getBrain()
{
	return (*this->brain);
}

std::string	Human::identify()
{
	return (this->getBrain().identify());
}